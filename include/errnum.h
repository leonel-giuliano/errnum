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


extern char *errnum_program_name;


#endif
