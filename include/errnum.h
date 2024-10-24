#ifndef __LIBERRNUM_H__
#define __LIBERRNUM_H__


typedef unsigned char err_t;
enum {
    ERR_ARG = 1,
    ERR_ALLOC,

    // FILES
    ERR_FOPEN,
    ERR_FCLOSE,

    // SOCKETS
    ERR_NEW_SCK,
    ERR_CLOSE_SCK,
    ERR_INET_PTON,
    ERR_CONN,
    ERR_BIND,
    ERR_LISTEN,
    ERR_ACCEPT_CONN,

    // DATA
    ERR_READ,
    ERR_WRT
};


// If this is passed the program name, it would print it when an error occurs
// If not, is initialized to NULL
extern char *errnum_program_name;


// Prints error msg depending on the event given
// Some events requiere more args
// Returns errno or -1 if it wasn't set
int errnum(err_t _ErrorEvent, ...);


#endif
