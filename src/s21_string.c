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
     * EPERM 1 Operation not permitted
     * ENOENT 2 No such file or directory
     * ESRCH 3 No such process
     * EINTR 4 Interrupted system call
     * EIO 5 Input/output error
     * ENXIO 6 No such device or address
     * E2BIG 7 Argument list too long
     * ENOEXEC 8 Exec format error
     * EBADF 9 Bad file descriptor
     * ECHILD 10 No child processes
     * EAGAIN 11 Resource temporarily unavailable
     * ENOMEM 12 Cannot allocate memory
     * EACCES 13 Permission denied
     * EFAULT 14 Bad address
     * ENOTBLK 15 Block device required
     * EBUSY 16 Device or resource busy
     * EEXIST 17 File exists
     * EXDEV 18 Invalid cross-device link
     * ENODEV 19 No such device
     * ENOTDIR 20 Not a directory
     * EISDIR 21 Is a directory
     * EINVAL 22 Invalid argument
     * ENFILE 23 Too many open files in system
     * EMFILE 24 Too many open files
     * ENOTTY 25 Inappropriate ioctl for device
     * ETXTBSY 26 Text file busy
     * EFBIG 27 File too large
     * ENOSPC 28 No space left on device
     * ESPIPE 29 Illegal seek
     * EROFS 30 Read-only file system
     * EMLINK 31 Too many links
     * EPIPE 32 Broken pipe
     * EDOM 33 Numerical argument out of domain
     * ERANGE 34 Numerical result out of range
     * EDEADLK 35 Resource deadlock avoided
     * ENAMETOOLONG 36 File name too long
     * ENOLCK 37 No locks available
     * ENOSYS 38 Function not implemented
     * ENOTEMPTY 39 Directory not empty
     * ELOOP 40 Too many levels of symbolic links
     * EWOULDBLOCK 11 Resource temporarily unavailable
     * ENOMSG 42 No message of desired type
     * EIDRM 43 Identifier removed
     * ECHRNG 44 Channel number out of range
     * EL2NSYNC 45 Level 2 not synchronized
     * EL3HLT 46 Level 3 halted
     * EL3RST 47 Level 3 reset
     * ELNRNG 48 Link number out of range
     * EUNATCH 49 Protocol driver not attached
     * ENOCSI 50 No CSI structure available
     * EL2HLT 51 Level 2 halted
     * EBADE 52 Invalid exchange
     * EBADR 53 Invalid request descriptor
     * EXFULL 54 Exchange full
     * ENOANO 55 No anode
     * EBADRQC 56 Invalid request code
     * EBADSLT 57 Invalid slot
     * EDEADLOCK 35 Resource deadlock avoided
     * EBFONT 59 Bad font file format
     ******** ENOSTR 60 Device not a stream
     ******** ENODATA 61 No data available
     ******** ETIME 62 Timer expired
     ******** ENOSR 63 Out of streams resources
     * ENONET 64 Machine is not on the network
     * ENOPKG 65 Package not installed
     * EREMOTE 66 Object is remote
     * ENOLINK 67 Link has been severed
     * EADV 68 Advertise error
     * ESRMNT 69 Srmount error
     * ECOMM 70 Communication error on send
     * EPROTO 71 Protocol error
     * EMULTIHOP 72 Multihop attempted
     * EDOTDOT 73 RFS specific error
     * EBADMSG 74 Bad message
     * EOVERFLOW 75 Value too large for defined data type
     * ENOTUNIQ 76 Name not unique on network
     * EBADFD 77 File descriptor in bad state
     * EREMCHG 78 Remote address chNo such file or directorylete multibyte or wide character
     * ERESTART 85 Interrupted system call should be restarted
     * ESTRPIPE 86 Streams pipe error
     * EUSERS 87 Too many users
     * ENOTSOCK 88 Socket operation on non-socket
     * EDESTADDRREQ 89 Destination address required
     * EMSGSIZE 90 Message too long
     * EPROTOTYPE 91 Protocol wrong type for socket
     * ENOPROTOOPT 92 Protocol not available
     * EPROTONOSUPPORT 93 Protocol not supported
     * ESOCKTNOSUPPORT 94 Socket type not supported
     * EOPNOTSUPP 95 Operation not supported
     * EPFNOSUPPORT 96 Protocol family not supported
     * EAFNOSUPPORT 97 Address family not supported by protocol
     * EADDRINUSE 98 Address already in use
     * EADDRNOTAVAIL 99 Cannot assign requested address
     * ENETDOWN 100 Network is down
     * ENETUNREACH 101 Network is unreachable
     * ENETRESET 102 Network dropped connection on reset
     * ECONNABORTED 103 Software caused connection abort
     * ECONNRESET 104 Connection reset by peer
     * ENOBUFS 105 No buffer space available
     * EISCONN 106 Transport endpoint is already connected
     * ENOTCONN 107 Transport endpoint is not connected
     * ESHUTDOWN 108 Cannot send after transport endpoint shutdown
     * ETOOMANYREFS 109 Too many references: cannot splice
     * ETIMEDOUT 110 Connection timed out
     * ECONNREFUSED 111 Connection refused
     * EHOSTDOWN 112 Host is down
     * EHOSTUNREACH 113 No route to host
     * EALREADY 114 Operation already in progress
     * EINPROGRESS 115 Operation now in progress
     * ESTALE 116 Stale file handle
     * EUCLEAN 117 Structure needs cleaning
     * ENOTNAM 118 Not a XENIX named type file
     * ENAVAIL 119 No XENIX semaphores available
     * EISNAM 120 Is a named type file
     * EREMOTEIO 121 Remote I/O error
     * EDQUOT 122 Disk quota exceeded
     * ENOMEDIUM 123 No medium found
     * EMEDIUMTYPE 124 Wrong medium type
     * ECANCELED 125 Operation canceled
     * ENOKEY 126 Required key not available
     * EKEYEXPIRED 127 Key has expired
     * EKEYREVOKED 128 Key has been revoked
     * EKEYREJECTED 129 Key was rejected by service
     * EOWNERDEAD 130 Owner died
     * ENOTRECOVERABLE 131 State not recoverable
     * ERFKILL 132 Operation not possible due to RF-kill
     * EHWPOISON 133 Memory page has hardware error
     * ENOTSUP 95 Operation not supported
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