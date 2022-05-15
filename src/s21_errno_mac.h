#ifndef SRC_S21_ERRNO_MAC_H_
#define SRC_S21_ERRNO_MAC_H_

//#include "s21_string.h"

#if defined(__APPLE__) && defined(__MACH__)
/*
 Error 0: Undefined error: 0
 Error 253: Unknown error: 253
 Error 254: Unknown error: 254

 
 */

// list of errors for POSIX.1-2017

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

#ifndef S21_EDEADLK
#define S21_EDEADLK          11
#endif


#ifndef S21_EACCES
#define S21_EACCES           13
#endif

#ifndef S21_EFAULT
#define S21_EFAULT           14
#endif

#ifndef S21_EBUSY
#define S21_EBUSY            16
#endif

#ifndef S21_EEXIST
#define S21_EEXIST           17
#endif

#ifndef S21_EXDEV
#define S21_EXDEV            18
#endif

#ifndef S21_ENOTSUP
#define S21_ENOTSUP          19
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

#ifndef S21_EINPROGRESS
#define S21_EINPROGRESS      36
#endif

#ifndef S21_EDESTADDRREQ
#define S21_EDESTADDRREQ     39
#endif

#ifndef S21_EMSGSIZE
#define S21_EMSGSIZE         40
#endif

#ifndef S21_EPROTOTYPE
#define S21_EPROTOTYPE       41
#endif

#ifndef S21_ENOPROTOOPT
#define S21_ENOPROTOOPT      42
#endif

#ifndef S21_EPROTONOSUPPORT
#define S21_EPROTONOSUPPORT  43
#endif

#ifndef S21_EAFNOSUPPORT
#define S21_EAFNOSUPPORT     47
#endif

#ifndef S21_EADDRINUSE
#define S21_EADDRINUSE       48
#endif

#ifndef S21_ENETDOWN
#define S21_ENETDOWN         50
#endif

#ifndef S21_ENETUNREACH
#define S21_ENETUNREACH      51
#endif

#ifndef S21_ECONNRESET
#define S21_ECONNRESET       54
#endif

#ifndef S21_ENOBUFS
#define S21_ENOBUFS          55
#endif

#ifndef S21_EISCONN
#define S21_EISCONN          56
#endif

#ifndef S21_ENOTCONN
#define S21_ENOTCONN         57
#endif

#ifndef S21_ECONNREFUSED
#define S21_ECONNREFUSED     61
#endif

#ifndef S21_ELOOP
#define S21_ELOOP            62
#endif

#ifndef S21_ENAMETOOLONG
#define S21_ENAMETOOLONG     63
#endif

#ifndef S21_ENOTEMPTY
#define S21_ENOTEMPTY        66
#endif

#ifndef S21_ENOLCK
#define S21_ENOLCK           77
#endif

#ifndef S21_ECANCELED
#define S21_ECANCELED        89
#endif

#ifndef S21_EIDRM
#define S21_EIDRM            90
#endif

#ifndef S21_ENOMSG
#define S21_ENOMSG           91
#endif

#ifndef S21_EILSEQ
#define S21_EILSEQ           92
#endif

#ifndef S21_EBADMSG
#define S21_EBADMSG          94
#endif

#ifndef S21_EOPNOTSUPP
#define S21_EOPNOTSUPP       95
#endif

#ifndef S21_ENOLINK
#define S21_ENOLINK          97
#endif

#ifndef S21_EPROTO
#define S21_EPROTO          100
#endif

#ifndef S21_ENOSYS
#define S21_ENOSYS          102
#endif

#ifndef S21_ENOTRECOVERABLE
#define S21_ENOTRECOVERABLE 104
#endif

#ifndef S21_EOWNERDEAD
#define S21_EOWNERDEAD      105
#endif

// #ifndef S21_ERRLIST 
// #define S21_ERRLIST  
//     err elist[] = {
//         {S21_EPERM, "Operation not permitted"},
//         {S21_ENOENT, "No such file or directory"},
//         {S21_ESRCH, "No such process"},
//         {S21_EINTR, "Interrupted system call"},
//         {S21_EIO, "Input/output error"},
//         {S21_E2BIG, "Argument list too long"},
//         {S21_ENOEXEC, "Exec format error"},
//         {S21_EBADF, "Bad file descriptor"},
//         {S21_ECHILD, "No child processes"},
//         {S21_EDEADLK, "Resource deadlock avoided"},
//         {S21_EACCES, "Permission denied"},
//         {S21_EFAULT, "Bad address"},
//         {S21_EBUSY, "Resource busy"},
//         {S21_EEXIST, "File exists"},
//         {S21_EXDEV, "Cross-device link"},
//         {S21_ENOTSUP, "Operation not supported by device"},
//         {S21_ENOTDIR, "Not a directory"},
//         {S21_EISDIR, "Is a directory"},
//         {S21_EINVAL, "Invalid argument"},
//         {S21_ENFILE, "Too many open files in system"},
//         {S21_ENOTTY, "Inappropriate ioctl for device"},
//         {S21_ETXTBSY, "Text file busy"},
//         {S21_EFBIG, "File too large"},
//         {S21_ENOSPC, "No space left on device"},
//         {S21_ESPIPE, "Illegal seek"},
//         {S21_EROFS, "Read-only file system"},
//         {S21_EMLINK, "Too many links"},
//         {S21_EPIPE, "Broken pipe"},
//         {S21_EDOM, "Numerical argument out of domain"},
//         {S21_ERANGE, "Result too large"},
//         {S21_EINPROGRESS, "Operation now in progress"},
//         {S21_EDESTADDRREQ, "Destination address required"},
//         {S21_EMSGSIZE, "Message too long"},
//         {S21_EPROTOTYPE, "Protocol wrong type for socket"},
//         {S21_ENOPROTOOPT, "Protocol not available"},
//         {S21_EPROTONOSUPPORT, "Protocol not supported"},
//         {S21_EAFNOSUPPORT, "Address family not supported by protocol family"},
//         {S21_EADDRINUSE, "Address already in use"},
//         {S21_ENETDOWN, "Network is down"},
//         {S21_ENETUNREACH, "Network is unreachable"},
//         {S21_ECONNRESET, "Connection reset by peer"},
//         {S21_ENOBUFS, "No buffer space available"},
//         {S21_EISCONN, "Socket is already connected"},
//         {S21_ENOTCONN, "Socket is not connected"},
//         {S21_ECONNREFUSED, "Connection refused"},
//         {S21_ELOOP, "Too many levels of symbolic links"},
//         {S21_ENAMETOOLONG, "File name too long"},
//         {S21_ENOTEMPTY, "Directory not empty"},
//         {S21_ENOLCK, "No locks available"},
//         {S21_ECANCELED, "Operation canceled"},
//         {S21_EIDRM, "Identifier removed"},
//         {S21_ENOMSG, "No message of desired type"},
//         {S21_EILSEQ, "Illegal byte sequence"},
//         {S21_EBADMSG, "Bad message"},
//         {S21_EOPNOTSUPP, "EMULTIHOP (Reserved)"},
//         {S21_ENOLINK, "ENOLINK (Reserved)"},
//         {S21_EPROTO, "Protocol error"},
//         {S21_ENOSYS, "Operation not supported on socket"},
//         {S21_ENOTRECOVERABLE, "State not recoverable"},
//         {S21_EOWNERDEAD, "Previous owner died"}
//     };
// #endif  // S21_ERRLIST

#endif  // __APPLE__ && __MACH__

#endif  // SRC_S21_ERRNO_H_