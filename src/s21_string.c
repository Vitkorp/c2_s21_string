#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
    int _len = 0;
    for (_len = 0; str[_len]; _len++) {}
    return _len;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
    s21_size_t i;
    int continuesFlag = 1;

    for (i = 0; (i < s21_strlen(str1)) && (continuesFlag != 0);) {
        for (s21_size_t j = 0; (str2[j] != 0) && (continuesFlag != 0); j++) {
            if (str1[i] == str2[j]) {
                continuesFlag = 0;
            }
        }
        if (continuesFlag != 0) {
            i++;
        }
    }
    return i;
}

char* s21_strerror(int errnum) {
    /*
     v EPERM 1 Operation not permitted
     v ENOENT 2 No such file or directory
     v ESRCH 3 No such process
     v EINTR 4 Interrupted system call
     v EIO 5 Input/output error
     v ENXIO 6 No such device or address
     v E2BIG 7 Argument list too long
     v ENOEXEC 8 Exec format error
     v EBADF 9 Bad file descriptor
     v ECHILD 10 No child processes
     v EAGAIN 11 Resource temporarily unavailable
     v ENOMEM 12 Cannot allocate memory
     v EACCES 13 Permission denied
     v EFAULT 14 Bad address
     x ENOTBLK 15 Block device required
     v EBUSY 16 Device or resource busy
     v EEXIST 17 File exists
     v EXDEV 18 Invalid cross-device link
     v ENODEV 19 No such device
     v ENOTDIR 20 Not a directory
     v EISDIR 21 Is a directory
     v EINVAL 22 Invalid argument
     v ENFILE 23 Too many open files in system
     v EMFILE 24 Too many open files
     v ENOTTY 25 Inappropriate ioctl for device
     v ETXTBSY 26 Text file busy
     v EFBIG 27 File too large
     v ENOSPC 28 No space left on device
     v ESPIPE 29 Illegal seek
     v EROFS 30 Read-only file system
     v EMLINK 31 Too many links
     v EPIPE 32 Broken pipe
     v EDOM 33 Numerical argument out of domain
     v ERANGE 34 Numerical result out of range
     v EDEADLK 35 Resource deadlock avoided
     v ENAMETOOLONG 36 File name too long
     v ENOLCK 37 No locks available
     v ENOSYS 38 Function not implemented
     v ENOTEMPTY 39 Directory not empty
     v ELOOP 40 Too many levels of symbolic links
     v EWOULDBLOCK 11 Resource temporarily unavailable
     v ENOMSG 42 No message of desired type
     v EIDRM 43 Identifier removed
     x ECHRNG 44 Channel number out of range
     x EL2NSYNC 45 Level 2 not synchronized
     x EL3HLT 46 Level 3 halted
     x EL3RST 47 Level 3 reset
     x ELNRNG 48 Link number out of range
     x EUNATCH 49 Protocol driver not attached
     x ENOCSI 50 No CSI structure available
     x EL2HLT 51 Level 2 halted
     x EBADE 52 Invalid exchange
     x EBADR 53 Invalid request descriptor
     x EXFULL 54 Exchange full
     x ENOANO 55 No anode
     x EBADRQC 56 Invalid request code
     x EBADSLT 57 Invalid slot
     x EDEADLOCK 35 Resource deadlock avoided
     x EBFONT 59 Bad font file format
     v******* ENOSTR 60 Device not a stream
     v******* ENODATA 61 No data available
     v******* ETIME 62 Timer expired
     v******* ENOSR 63 Out of streams resources
     x ENONET 64 Machine is not on the network
     x ENOPKG 65 Package not installed
     x EREMOTE 66 Object is remote
     v ENOLINK 67 Link has been severed
     x EADV 68 Advertise error
     x ESRMNT 69 Srmount error
     x ECOMM 70 Communication error on send
     v EPROTO 71 Protocol error
     v EMULTIHOP 72 Multihop attempted
     x EDOTDOT 73 RFS specific error
     v EBADMSG 74 Bad message
     v EOVERFLOW 75 Value too large for defined data type
     x ENOTUNIQ 76 Name not unique on network
     x EBADFD 77 File descriptor in bad state
     x EREMCHG 78 Remote address changed
     x ERESTART 85 Interrupted system call should be restarted
     x ESTRPIPE 86 Streams pipe error
     x EUSERS 87 Too many users
     v ENOTSOCK 88 Socket operation on non-socket
     v EDESTADDRREQ 89 Destination address required
     v EMSGSIZE 90 Message too long
     v EPROTOTYPE 91 Protocol wrong type for socket
     v ENOPROTOOPT 92 Protocol not available
     v EPROTONOSUPPORT 93 Protocol not supported
     x ESOCKTNOSUPPORT 94 Socket type not supported
     v EOPNOTSUPP 95 Operation not supported
     x EPFNOSUPPORT 96 Protocol family not supported
     v EAFNOSUPPORT 97 Address family not supported by protocol
     v EADDRINUSE 98 Address already in use
     v EADDRNOTAVAIL 99 Cannot assign requested address
     v ENETDOWN 100 Network is down
     v ENETUNREACH 101 Network is unreachable
     v ENETRESET 102 Network dropped connection on reset
     v ECONNABORTED 103 Software caused connection abort
     v ECONNRESET 104 Connection reset by peer
     v ENOBUFS 105 No buffer space available
     v EISCONN 106 Transport endpoint is already connected
     v ENOTCONN 107 Transport endpoint is not connected
     x ESHUTDOWN 108 Cannot send after transport endpoint shutdown
     x ETOOMANYREFS 109 Too many references: cannot splice
     v ETIMEDOUT 110 Connection timed out
     v ECONNREFUSED 111 Connection refused
     x EHOSTDOWN 112 Host is down
     v EHOSTUNREACH 113 No route to host
     v EALREADY 114 Operation already in progress
     v EINPROGRESS 115 Operation now in progress
     v ESTALE 116 Stale file handle
     x EUCLEAN 117 Structure needs cleaning
     x ENOTNAM 118 Not a XENIX named type file
     x ENAVAIL 119 No XENIX semaphores available
     x EISNAM 120 Is a named type file
     x EREMOTEIO 121 Remote I/O error
     v EDQUOT 122 Disk quota exceeded
     x ENOMEDIUM 123 No medium found
     x EMEDIUMTYPE 124 Wrong medium type
     v ECANCELED 125 Operation canceled
     x ENOKEY 126 Required key not available
     x EKEYEXPIRED 127 Key has expired
     x EKEYREVOKED 128 Key has been revoked
     x EKEYREJECTED 129 Key was rejected by service
     v EOWNERDEAD 130 Owner died
     v ENOTRECOVERABLE 131 State not recoverable
     x ERFKILL 132 Operation not possible due to RF-kill
     x EHWPOISON 133 Memory page has hardware error
     v ENOTSUP 95 Operation not supported
     */
#if defined(__APPLE__) && defined(__MACH__)
    err errors[] = {
        {   0, "Success"                         },
        {   1, "Operation not permitted"         },
        {   2, "No such file or directory"       },
        {   3, "No such process"                 },
        {   4, "Interrupted system call"         },
        {   5, "Input/output error"              },
        {   6, "No such device or address"       },
        {   7, "Argument list too long"          },
        {   8, "Exec format error"               },
        {   9, "Bad file descriptor"             },
        {  10, "No child processes"              },
        {  11, "Resource temporarily unavailable"},
        {  12, "Cannot allocate memory"},
        {  13, "Permission denied"},
        {  14, "Bad address"},
        {  15, "Block device required"},
        {  16, "Device or resource busy"},
        {  17, "File exists"},
        {  18, "Invalid cross-device link"},
        {  19, "No such device"},
        {  20, "Not a directory"},
        {  21, "Is a directory"},
        {  22, "Invalid argument"},
        {  23, "Too many open files in system"},
        {  24, "Too many open files"},
        {  25, "Inappropriate ioctl for device"},
        {  26, "Text file busy"},
        {  27, "File too large"},
        {  28, "No space left on device"},
        {  29, "Illegal seek"},
        {  30, "Read-only file system"},
        {  31, "Too many links"},
        {  32, "Broken pipe"},
        {  33, "Numerical argument out of domain"},
        {  34, "Numerical result out of range"},
        {  35, "Resource deadlock avoided"},
        {  36, "File name too long"},
        {  37, "No locks available"},
        {  38, "Function not implemented"},
        {  39, "Directory not empty"},
        {  40, "Too many levels of symbolic links"},
        {  41, "Unknown error 41"},
        {  42, "No message of desired type"},
        {  43, "Identifier removed"},
        {  44, "Channel number out of range"},
        {  45, "Level 2 not synchronized"},
        {  46, "Level 3 halted"},
        {  47, "Level 3 reset"},
        {  48, "Link number out of range"},
        {  49, "Protocol driver not attached"},
        {  50, "No CSI structure available"},
        {  51, "Level 2 halted"},
        {  52, "Invalid exchange"},
        {  53, "Invalid request descriptor"},
        {  54, "Exchange full"},
        {  55, "No anode"},
        {  56, "Invalid request code"},
        {  57, "Invalid slot"},
        {  58, "Unknown error 58"},
        {  59, "Bad font file format"},
        {  60, "Unknown error 60"},
        {  61, "Unknown error 61"},
        {  62, "Unknown error 62"},
        {  63, "Unknown error 63"},
        {  64, "Machine is not on the network"},
        {  65, "Package not installed"},
        {  66, "Object is remote"},
        {  67, "Link has been severed"},
        {  68, "Advertise error"},
        {  69, "Srmount error"},
        {  70, "Communication error on send"},
        {  71, "Protocol error"},
        {  72, "Multihop attempted"},
        {  73, "RFS specific error"},
        {  74, "Bad message"},
        {  75, "Value too large for defined data type"},
        {  76, "Name not unique on network"},
        {  77, "File descriptor in bad state"},
        {  78, "Remote address changed"},
        {  79, "Unknown error 79"},
        {  80, "Unknown error 80"},
        {  81, "Unknown error 81"},
        {  82, "Unknown error 82"},
        {  83, "Unknown error 83"},
        {  84, "Unknown error 84"},
        {  85, "Interrupted system call should be restarted"},
        {  86, "Streams pipe error"},
        {  87, "Too many users"},
        {  88, "Socket operation on non-socket"},
        {  89, "Destination address required"},
        {  90, "Message too long"},
        {  91, "Protocol wrong type for socket"},
        {  92, "Protocol not available"},
        {  93, "Protocol not supported"},
        {  94, "Socket type not supported"},
        {  95, "Operation not supported"},
        {  96, "Protocol family not supported"},
        {  97, "Address family not supported by protocol"},
        {  98, "Address already in use"},
        {  99, "Cannot assign requested address"},
        { 100, "Network is down"},
        { 101, "Network is unreachable"},
        { 102, "Network dropped connection on reset"},
        { 103, "Software caused connection abort"},
        { 104, "Connection reset by peer"},
        { 105, "No buffer space available"},
        { 106, "Transport endpoint is already connected"},
        { 107, "Transport endpoint is not connected"},
        { 108, "Cannot send after transport endpoint shutdown"},
        { 109, "Too many references: cannot splice"},
        { 110, "Connection timed out"},
        { 111, "Connection refused"},
        { 112, "Host is down"},
        { 113, "No route to host"},
        { 114, "Operation already in progress"},
        { 115, "Operation now in progress"},
        { 116, "Stale file handle"},
        { 117, "Structure needs cleaning"},
        { 118, "Not a XENIX named type file"},
        { 119, "No XENIX semaphores available"},
        { 120, "Is a named type file"},
        { 121, "Remote I/O error"},
        { 122, "Disk quota exceeded"},
        { 123, "No medium found"},
        { 124, "Wrong medium type"},
        { 125, "Operation canceled"},
        { 126, "Required key not available"},
        { 127, "Key has expired"},#elif defined(__APPLE__) && defined(__MACH__)
        { 129, "Key was rejected by service"},
        { 130, "Owner died"},
        { 131, "State not recoverable"},
        { 132, "Operation not possible due to RF-kill"},
        { 133, "Memory page has hardware error"}
    };
#elif defined(__linux__)
    err errors[] = {
        {   0, "Success"                         },
        {   1, "Operation not permitted"         },
        {   2, "No such file or directory"       },
        {   3, "No such process"                 },
        {   4, "Interrupted system call"         },
        {   5, "Input/output error"              },
        {   6, "No such device or address"       },
        {   7, "Argument list too long"          },
        {   8, "Exec format error"               },
        {   9, "Bad file descriptor"             },
        {  10, "No child processes"              },
        {  11, "Resource temporarily unavailable"},
        {  12, "Cannot allocate memory"},
        {  13, "Permission denied"},
        {  14, "Bad address"},
        {  15, "Block device required"},
        {  16, "Device or resource busy"},
        {  17, "File exists"},
        {  18, "Invalid cross-device link"},
        {  19, "No such device"},
        {  20, "Not a directory"},
        {  21, "Is a directory"},
        {  22, "Invalid argument"},
        {  23, "Too many open files in system"},
        {  24, "Too many open files"},
        {  25, "Inappropriate ioctl for device"},
        {  26, "Text file busy"},
        {  27, "File too large"},
        {  28, "No space left on device"},
        {  29, "Illegal seek"},
        {  30, "Read-only file system"},
        {  31, "Too many links"},
        {  32, "Broken pipe"},
        {  33, "Numerical argument out of domain"},
        {  34, "Numerical result out of range"},
        {  35, "Resource deadlock avoided"},
        {  36, "File name too long"},
        {  37, "No locks available"},
        {  38, "Function not implemented"},
        {  39, "Directory not empty"},
        {  40, "Too many levels of symbolic links"},
        {  41, "Unknown error 41"},
        {  42, "No message of desired type"},
        {  43, "Identifier removed"},
        {  44, "Channel number out of range"},
        {  45, "Level 2 not synchronized"},
        {  46, "Level 3 halted"},
        {  47, "Level 3 reset"},
        {  48, "Link number out of range"},
        {  49, "Protocol driver not attached"},
        {  50, "No CSI structure available"},
        {  51, "Level 2 halted"},
        {  52, "Invalid exchange"},
        {  53, "Invalid request descriptor"},
        {  54, "Exchange full"},
        {  55, "No anode"},
        {  56, "Invalid request code"},
        {  57, "Invalid slot"},
        {  58, "Unknown error 58"},
        {  59, "Bad font file format"},
        {  60, "Unknown error 60"},
        {  61, "Unknown error 61"},
        {  62, "Unknown error 62"},
        {  63, "Unknown error 63"},
        {  64, "Machine is not on the network"},
        {  65, "Package not installed"},
        {  66, "Object is remote"},
        {  67, "Link has been severed"},
        {  68, "Advertise error"},
        {  69, "Srmount error"},
        {  70, "Communication error on send"},
        {  71, "Protocol error"},
        {  72, "Multihop attempted"},
        {  73, "RFS specific error"},
        {  74, "Bad message"},
        {  75, "Value too large for defined data type"},
        {  76, "Name not unique on network"},
        {  77, "File descriptor in bad state"},
        {  78, "Remote address changed"},
        {  79, "Unknown error 79"},
        {  80, "Unknown error 80"},
        {  81, "Unknown error 81"},
        {  82, "Unknown error 82"},
        {  83, "Unknown error 83"},
        {  84, "Unknown error 84"},
        {  85, "Interrupted system call should be restarted"},
        {  86, "Streams pipe error"},
        {  87, "Too many users"},
        {  88, "Socket operation on non-socket"},
        {  89, "Destination address required"},
        {  90, "Message too long"},
        {  91, "Protocol wrong type for socket"},
        {  92, "Protocol not available"},
        {  93, "Protocol not supported"},
        {  94, "Socket type not supported"},
        {  95, "Operation not supported"},
        {  96, "Protocol family not supported"},
        {  97, "Address family not supported by protocol"},
        {  98, "Address already in use"},
        {  99, "Cannot assign requested address"},
        { 100, "Network is down"},
        { 101, "Network is unreachable"},
        { 102, "Network dropped connection on reset"},
        { 103, "Software caused connection abort"},
        { 104, "Connection reset by peer"},
        { 105, "No buffer space available"},
        { 106, "Transport endpoint is already connected"},
        { 107, "Transport endpoint is not connected"},
        { 108, "Cannot send after transport endpoint shutdown"},
        { 109, "Too many references: cannot splice"},
        { 110, "Connection timed out"},
        { 111, "Connection refused"},
        { 112, "Host is down"},
        { 113, "No route to host"},
        { 114, "Operation already in progress"},
        { 115, "Operation now in progress"},
        { 116, "Stale file handle"},
        { 117, "Structure needs cleaning"},
        { 118, "Not a XENIX named type file"},
        { 119, "No XENIX semaphores available"},
        { 120, "Is a named type file"},
        { 121, "Remote I/O error"},
        { 122, "Disk quota exceeded"},
        { 123, "No medium found"},
        { 124, "Wrong medium type"},
        { 125, "Operation canceled"},
        { 126, "Required key not available"},
        { 127, "Key has expired"},
        { 128, "Unknown error 128"},
        { 129, "Key was rejected by service"},
        { 130, "Owner died"},
        { 131, "State not recoverable"},
        { 132, "Operation not possible due to RF-kill"},
        { 133, "Memory page has hardware error"}
    };
#endif
    char *a = "";
    for (int i = 0; i < 134; i++) {
        if (errnum == errors[i].id) {
            a = errors[i].null_str;
            break;
        } else {
            a = "Unknown error";
        }
    }
    return a;
}

s21_size_t s21_strspn(const char *str1, const char *str2) {
    s21_size_t len = 0;
    int continuesFlag = 1;

    for (len = 0; (str1[len] != 0) && (continuesFlag != 0); ) {
        int consist = 0;
        for (s21_size_t i = 0; (str2[i] != 0); i++) {
            if (str1[len] == str2[i]) {
                consist += 1;
            }
        }
        if (consist == 0) {
            continuesFlag = 0;
        } else {
            len++;
        }
    }
    return len;
}