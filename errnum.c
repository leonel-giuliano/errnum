#include <stdio.h>
#include <errno.h>
#include <stdarg.h>
#include <string.h>

#include "errnum.h"


char *errnum_program_name = NULL;


int errnum(err_t e, ...) {
    int errno_val = errno;

    va_list arg;
    va_start(arg, e);


    if(errnum_program_name != NULL) fprintf(stderr, "%s: ", errnum_program_name);

    switch (e) {
        case ERR_ARG:
            fprintf(stderr, "usage: %s", va_arg(arg, const char *));
            break;
    }

    if(errno_val > 0) fprintf(stderr, "%s (Errno::%d)", strerror(errno_val), errno_val);


    va_end(arg);
    return (errno_val) ? errno_val : -1;
}
