#ifndef SRC_S21_ERRNO_LINUX_H_
#define SRC_S21_ERRNO_LINUX_H_

#include "s21_string.h"

#if defined(__linux__)

// list of errors for POSIX.1-2017

// #ifndef S21_SUCCESS
// #define S21_SUCCESS           0
// #endif

#ifndef S21_EPERM
#define S21_EPERM             1
#endif

#ifndef S21_ENOENT
#define S21_ENOENT            2
#endif

#ifndef S21_ESRCH
#define S21_ESRCH             3
#endif

#ifndef S21_EINTR
#define S21_EINTR             4
#endif

#ifndef S21_EIO
#define S21_EIO               5
#endif

#ifndef S21_ENXIO
#define S21_ENXIO             6
#endif

#ifndef S21_E2BIG
#define S21_E2BIG             7
#endif

#ifndef S21_ENOEXEC
#define S21_ENOEXEC           8
#endif

#ifndef S21_EBADF
#define S21_EBADF             9
#endif

#ifndef S21_ECHILD 
#define S21_ECHILD           10
#endif

#ifndef S21_EAGAIN 
#define S21_EAGAIN           11
#endif

#ifndef S21_ENOMEM 
#define S21_ENOMEM           12
#endif

#ifndef S21_EACCES
#define S21_EACCES           13
#endif

#ifndef S21_EFAULT
#define S21_EFAULT           14
#endif

// #ifndef S21_ENOTBLK
// #define S21_ENOTBLK  15
// #endif

#ifndef S21_EBUSY
#define S21_EBUSY            16
#endif

#ifndef S21_EEXIST
#define S21_EEXIST           17
#endif

#ifndef S21_EXDEV
#define S21_EXDEV            18
#endif

#ifndef S21_ENODEV
#define S21_ENODEV           19
#endif

#ifndef S21_ENOTDIR
#define S21_ENOTDIR          20
#endif

#ifndef S21_EISDIR
#define S21_EISDIR           21
#endif

#ifndef S21_EINVAL 
#define S21_EINVAL           22
#endif

#ifndef S21_ENFILE 
#define S21_ENFILE           23
#endif

#ifndef S21_EMFILE 
#define S21_EMFILE           24
#endif

#ifndef S21_ENOTTY 
#define S21_ENOTTY           25
#endif

#ifndef S21_ETXTBSY
#define S21_ETXTBSY          26
#endif

#ifndef S21_EFBIG
#define S21_EFBIG            27
#endif

#ifndef S21_ENOSPC
#define S21_ENOSPC           28
#endif

#ifndef S21_ESPIPE
#define S21_ESPIPE           29
#endif

#ifndef S21_EROFS
#define S21_EROFS            30
#endif

#ifndef S21_EMLINK
#define S21_EMLINK           31
#endif

#ifndef S21_EPIPE
#define S21_EPIPE            32
#endif

#ifndef S21_EDOM
#define S21_EDOM             33
#endif

#ifndef S21_ERANGE
#define S21_ERANGE           34
#endif

#ifndef S21_EDEADLK
#define S21_EDEADLK          35
#endif

#ifndef S21_ENAMETOOLONG
#define S21_ENAMETOOLONG     36
#endif

#ifndef S21_ENOLCK
#define S21_ENOLCK           37
#endif

#ifndef S21_ENOSYS
#define S21_ENOSYS           38
#endif

#ifndef S21_ENOTEMPTY
#define S21_ENOTEMPTY        39
#endif

#ifndef S21_ELOOP
#define S21_ELOOP            40
#endif

#ifndef S21_EWOULDBLOCK
#define S21_EWOULDBLOCK      11
#endif

#ifndef S21_ENOMSG
#define S21_ENOMSG           42
#endif

#ifndef S21_EIDRM
#define S21_EIDRM            43
#endif

// #ifndef S21_ECHRNG
// #define S21_ECHRNG        44
// #endif

// #ifndef S21_EL2NSYNC
// #define S21_EL2NSYNC      45
// #endif

// #ifndef S21_EL3HLT
// #define S21_EL3HLT        46
// #endif

// #ifndef S21_EL3RST
// #define S21_EL3RST        47
// #endif

// #ifndef S21_ELNRNG
// #define S21_ELNRNG        48
// #endif

// #ifndef S21_EUNATCH
// #define S21_EUNATCH       49
// #endif

// #ifndef S21_ENOCSI
// #define S21_ENOCSI        50
// #endif

// #ifndef S21_EL2HLT
// #define S21_EL2HLT        51
// #endif

// #ifndef S21_EBADE
// #define S21_EBADE         52
// #endif

// #ifndef S21_EBADR
// #define S21_EBADR         53
// #endif

// #ifndef S21_EXFULL
// #define S21_EXFULL        54
// #endif

// #ifndef S21_ENOANO
// #define S21_ENOANO        55
// #endif

// #ifndef S21_EBADRQC
// #define S21_EBADRQC       56
// #endif

// #ifndef S21_EBADSLT
// #define S21_EBADSLT       57
// #endif

// #ifndef S21_EDEADLOCK
// #define S21_EDEADLOCK     35
// #endif

// #ifndef S21_EBFONT
// #define S21_EBFONT        59
// #endif

// #ifndef S21_ENONET
// #define S21_ENONET        64
// #endif

// #ifndef S21_ENOPKG
// #define S21_ENOPKG        65
// #endif

// #ifndef S21_EREMOTE
// #define S21_EREMOTE       66
// #endif

#ifndef S21_ENOLINK
#define S21_ENOLINK          67
#endif

// #ifndef S21_EADV
// #define S21_EADV          68
// #endif

// #ifndef S21_ESRMNT
// #define S21_ESRMNT        69
// #endif

// #ifndef S21_ECOMM
// #define S21_ECOMM         70
// #endif

#ifndef S21_EPROTO
#define S21_EPROTO           71
#endif

#ifndef S21_EMULTIHOP
#define S21_EMULTIHOP        72
#endif

// #ifndef S21_EDOTDOT
// #define S21_EDOTDOT       73
// #endif

#ifndef S21_EBADMSG
#define S21_EBADMSG          74
#endif

#ifndef S21_EOVERFLOW
#define S21_EOVERFLOW        75
#endif

// #ifndef S21_ENOTUNIQ 
// #define S21_ENOTUNIQ      76
// #endif

// #ifndef S21_EBADFD
// #define S21_EBADFD        77
// #endif

// #ifndef S21_EREMCHG
// #define S21_EREMCHG       78
// #endif

// #ifndef S21_ERESTART
// #define S21_ERESTART      85
// #endif

// #ifndef S21_ESTRPIPE
// #define S21_ESTRPIPE      86
// #endif

// #ifndef S21_EUSERS
// #define S21_EUSERS        87
// #endif

#ifndef S21_ENOTSOCK
#define S21_ENOTSOCK         88
#endif

#ifndef S21_EDESTADDRREQ
#define S21_EDESTADDRREQ     89
#endif

#ifndef S21_EMSGSIZE
#define S21_EMSGSIZE         90
#endif

#ifndef S21_EPROTOTYPE
#define S21_EPROTOTYPE       91
#endif

#ifndef S21_ENOPROTOOPT
#define S21_ENOPROTOOPT      92
#endif

#ifndef S21_EPROTONOSUPPORT
#define S21_EPROTONOSUPPORT  93
#endif

// #ifndef S21_ESOCKTNOSUPPORT
// #define S21_ESOCKTNOSUPPORT  94
// #endif

#ifndef S21_EOPNOTSUPP
#define S21_EOPNOTSUPP       95
#endif

// #ifndef S21_EPFNOSUPPORT
// #define S21_EPFNOSUPPORT     96
// #endif

#ifndef S21_EAFNOSUPPORT
#define S21_EAFNOSUPPORT     97
#endif

#ifndef S21_EADDRINUSE
#define S21_EADDRINUSE       98
#endif

#ifndef S21_EADDRNOTAVAIL
#define S21_EADDRNOTAVAIL    99
#endif

#ifndef S21_ENETDOWN
#define S21_ENETDOWN        100
#endif

#ifndef S21_ENETUNREACH
#define S21_ENETUNREACH     101
#endif

#ifndef S21_ENETRESET
#define S21_ENETRESET       102
#endif

#ifndef S21_ECONNABORTED
#define S21_ECONNABORTED    103
#endif

#ifndef S21_ECONNRESET
#define S21_ECONNRESET      104
#endif

#ifndef S21_ENOBUFS
#define S21_ENOBUFS         105
#endif

#ifndef S21_EISCONN
#define S21_EISCONN         106
#endif

#ifndef S21_ENOTCONN
#define S21_ENOTCONN        107
#endif

// #ifndef S21_ESHUTDOWN
// #define S21_ESHUTDOWN       108
// #endif

// #ifndef S21_ETOOMANYREFS
// #define S21_ETOOMANYREFS    109
// #endif

#ifndef S21_ETIMEDOUT
#define S21_ETIMEDOUT       110
#endif

#ifndef S21_ECONNREFUSED
#define S21_ECONNREFUSED    111
#endif

// #ifndef S21_EHOSTDOWN
// #define S21_EHOSTDOWN       112
// #endif

#ifndef S21_EHOSTUNREACH
#define S21_EHOSTUNREACH    113
#endif

#ifndef S21_EALREADY
#define S21_EALREADY        114
#endif

#ifndef S21_EINPROGRESS
#define S21_EINPROGRESS     115
#endif

#ifndef S21_ESTALE
#define S21_ESTALE          116
#endif

// #ifndef S21_EUCLEAN
// #define S21_EUCLEAN         117
// #endif

// #ifndef S21_ENOTNAM
// #define S21_ENOTNAM         118
// #endif

// #ifndef S21_ENAVAIL
// #define S21_ENAVAIL         119
// #endif

// #ifndef S21_EISNAM
// #define S21_EISNAM          120
// #endif

// #ifndef S21_EREMOTEIO
// #define S21_EREMOTEIO       121
// #endif

#ifndef S21_EDQUOT
#define S21_EDQUOT          122
#endif

// #ifndef S21_ENOMEDIUM
// #define S21_ENOMEDIUM       123
// #endif

// #ifndef S21_EMEDIUMTYPE
// #define S21_EMEDIUMTYPE     124
// #endif

#ifndef S21_ECANCELED
#define S21_ECANCELED       125
#endif

// #ifndef S21_ENOKEY
// #define S21_ENOKEY          126
// #endif

// #ifndef S21_EKEYEXPIRED
// #define S21_EKEYEXPIRED     127
// #endif

// #ifndef S21_EKEYREVOKED
// #define S21_EKEYREVOKED     128
// #endif

// #ifndef S21_EKEYREJECTED
// #define S21_EKEYREJECTED    129
// #endif

#ifndef S21_EOWNERDEAD
#define S21_EOWNERDEAD      130
#endif

#ifndef S21_ENOTRECOVERABLE
#define S21_ENOTRECOVERABLE 131
#endif

// #ifndef S21_ERFKILL
// #define S21_ERFKILL         132
// #endif

// #ifndef S21_EHWPOISON
// #define S21_EHWPOISON       133
// #endif

#ifndef S21_ENOTSUP
#define S21_ENOTSUP          95
#endif

#ifndef S21_ERRLIST 
#define S21_ERRLIST  
    err elist[] = {
        {S21_EPERM, "Operation not permitted"},
        {S21_ENOENT, "No such file or directory"},
        {S21_ESRCH, "No such process"},
        {S21_EINTR, "Interrupted system call"},
        {S21_EIO, "Input/output error"},
        {S21_ENXIO, "No such device or address"},
        {S21_E2BIG, "Argument list too long"},
        {S21_ENOEXEC, "Exec format error"},
        {S21_EBADF, "Bad file descriptor"},
        {S21_ECHILD, "No child processes"},
        {S21_EAGAIN, "Resource temporarily unavailable"},
        {S21_ENOMEM, "Cannot allocate memory"},
        {S21_EACCES, "Permission denied"},
        {S21_EFAULT, "Bad address"},
        {S21_EBUSY, "Device or resource busy"},
        {S21_EEXIST, "File exists"},
        {S21_EXDEV, "Invalid cross-device link"},
        {S21_ENODEV, "No such device"},
        {S21_ENOTDIR, "Not a directory"},
        {S21_EISDIR, "Is a directory"},
        {S21_EINVAL, "Invalid argument"},
        {S21_ENFILE, "Too many open files in system"},
        {S21_EMFILE, "Too many open files"},
        {S21_ENOTTY, "Inappropriate ioctl for device"},
        {S21_ETXTBSY, "Text file busy"},
        {S21_EFBIG, "File too large"},
        {S21_ENOSPC, "No space left on device"},
        {S21_ESPIPE, "Illegal seek"},
        {S21_EROFS, "Read-only file system"},
        {S21_EMLINK, "Too many links"},
        {S21_EPIPE, "Broken pipe"},
        {S21_EDOM, "Numerical argument out of domain"},
        {S21_ERANGE, "Numerical result out of range"},
        {S21_EDEADLK, "Resource deadlock avoided"},
        {S21_ENAMETOOLONG, "File name too long"},
        {S21_ENOLCK, "No locks available"},
        {S21_ENOSYS, "Function not implemented"},
        {S21_ENOTEMPTY, "Directory not empty"},
        {S21_ELOOP, "Too many levels of symbolic links"},
        {S21_EWOULDBLOCK, "Resource temporarily unavailable"},
        {S21_ENOMSG, "No message of desired type"},
        {S21_EIDRM, "Identifier removed"},
        {S21_ENOLINK, "Link has been severed"},
        {S21_EPROTO, "Protocol error"},
        {S21_EMULTIHOP, "Multihop attempted"},
        {S21_EBADMSG, "Bad message"},
        {S21_EOVERFLOW, "Value too large for defined data type"},
        {S21_ENOTSOCK, "Socket operation on non-socket"},
        {S21_EDESTADDRREQ, "Destination address required"},
        {S21_EMSGSIZE, "Message too long"},
        {S21_EPROTOTYPE, "Protocol wrong type for socket"},
        {S21_ENOPROTOOPT, "Protocol not available"},
        {S21_EPROTONOSUPPORT, "Protocol not supported"},
        {S21_EOPNOTSUPP, "Operation not supported"},
        {S21_EAFNOSUPPORT, "Address family not supported by protocol"},
        {S21_EADDRINUSE, "Address already in use"},
        {S21_EADDRNOTAVAIL, "Cannot assign requested address"},
        {S21_ENETDOWN, "Network is down"},
        {S21_ENETUNREACH, "Network is unreachable"},
        {S21_ENETRESET, "Network dropped connection on reset"},
        {S21_ECONNABORTED, "Software caused connection abort"},
        {S21_ECONNRESET, "Connection reset by peer"},
        {S21_ENOBUFS, "No buffer space available"},
        {S21_EISCONN, "Transport endpoint is already connected"},
        {S21_ENOTCONN, "Transport endpoint is not connected"},
        {S21_ETIMEDOUT, "Connection timed out"},
        {S21_ECONNREFUSED, "Connection refused"},
        {S21_EHOSTUNREACH, "No route to host"},
        {S21_EALREADY, "Operation already in progress"},
        {S21_EINPROGRESS, "Operation now in progress"},
        {S21_ESTALE, "Stale file handle"},
        {S21_EDQUOT, "Disk quota exceeded"},
        {S21_ECANCELED, "Operation canceled"},
        {S21_EOWNERDEAD, "Owner died"},
        {S21_ENOTRECOVERABLE, "State not recoverable"},
        {S21_ENOTSUP, "Operation not supported"}
    };
#endif  // S21_ERRLIST

#endif  // __linux__

#endif  // SRC_S21_ERRNO_LINUX_H_