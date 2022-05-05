#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#ifndef S21_NULL
#define S21_NULL (void *)0
#endif  // S21_NULL

typedef unsigned long int s21_size_t;

typedef struct str_err {
    int id;
    char *null_str;
} err;


#if defined(__APPLE__) && defined(__MACH__)
/*
 Error 0: Undefined error: 0
 Error 1: Operation not permitted
 Error 2: No such file or directory
 Error 3: No such process
 Error 4: Interrupted system call
 Error 5: Input/output error
 Error 6: Device not configured
 Error 7: Argument list too long
 Error 8: Exec format error
 Error 9: Bad file descriptor
 Error 10: No child processes
 Error 11: Resource deadlock avoided
 Error 12: Cannot allocate memory
 Error 13: Permission denied
 Error 14: Bad address
 Error 15: Block device required
 Error 16: Resource busy
 Error 17: File exists
 Error 18: Cross-device link
 Error 19: Operation not supported by device
 Error 20: Not a directory
 Error 21: Is a directory
 Error 22: Invalid argument
 Error 23: Too many open files in system
 Error 24: Too many open files
 Error 25: Inappropriate ioctl for device
 Error 26: Text file busy
 Error 27: File too large
 Error 28: No space left on device
 Error 29: Illegal seek
 Error 30: Read-only file system
 Error 31: Too many links
 Error 32: Broken pipe
 Error 33: Numerical argument out of domain
 Error 34: Result too large
 Error 35: Resource temporarily unavailable
 Error 36: Operation now in progress
 Error 37: Operation already in progress
 Error 38: Socket operation on non-socket
 Error 39: Destination address required
 Error 40: Message too long
 Error 41: Protocol wrong type for socket
 Error 42: Protocol not available
 Error 43: Protocol not supported
 Error 44: Socket type not supported
 Error 45: Operation not supported
 Error 46: Protocol family not supported
 Error 47: Address family not supported by protocol family
 Error 48: Address already in use
 Error 49: Can't assign requested address
 Error 50: Network is down
 Error 51: Network is unreachable
 Error 52: Network dropped connection on reset
 Error 53: Software caused connection abort
 Error 54: Connection reset by peer
 Error 55: No buffer space available
 Error 56: Socket is already connected
 Error 57: Socket is not connected
 Error 58: Can't send after socket shutdown
 Error 59: Too many references: can't splice
 Error 60: Operation timed out
 Error 61: Connection refused
 Error 62: Too many levels of symbolic links
 Error 63: File name too long
 Error 64: Host is down
 Error 65: No route to host
 Error 66: Directory not empty
 Error 67: Too many processes
 Error 68: Too many users
 Error 69: Disc quota exceeded
 Error 70: Stale NFS file handle
 Error 71: Too many levels of remote in path
 Error 72: RPC struct is bad
 Error 73: RPC version wrong
 Error 74: RPC prog. not avail
 Error 75: Program version wrong
 Error 76: Bad procedure for program
 Error 77: No locks available
 Error 78: Function not implemented
 Error 79: Inappropriate file type or format
 Error 80: Authentication error
 Error 81: Need authenticator
 Error 82: Device power is off
 Error 83: Device error
 Error 84: Value too large to be stored in data type
 Error 85: Bad executable (or shared library)
 Error 86: Bad CPU type in executable
 Error 87: Shared library version mismatch
 Error 88: Malformed Mach-o file
 Error 89: Operation canceled
 Error 90: Identifier removed
 Error 91: No message of desired type
 Error 92: Illegal byte sequence
 Error 93: Attribute not found
 Error 94: Bad message
 Error 95: EMULTIHOP (Reserved)
 Error 96: No message available on STREAM
 Error 97: ENOLINK (Reserved)
 Error 98: No STREAM resources
 Error 99: Not a STREAM
 Error 100: Protocol error
 Error 101: STREAM ioctl timeout
 Error 102: Operation not supported on socket
 Error 103: Policy not found
 Error 104: State not recoverable
 Error 105: Previous owner died
 Error 106: Interface output queue is full
 Error 107: Unknown error: 107
 Error 108: Unknown error: 108
 Error 109: Unknown error: 109
 Error 110: Unknown error: 110
 Error 111: Unknown error: 111
 Error 112: Unknown error: 112
 Error 113: Unknown error: 113
 Error 114: Unknown error: 114
 Error 115: Unknown error: 115
 Error 116: Unknown error: 116
 Error 117: Unknown error: 117
 Error 118: Unknown error: 118
 Error 119: Unknown error: 119
 Error 120: Unknown error: 120
 Error 121: Unknown error: 121
 Error 122: Unknown error: 122
 Error 123: Unknown error: 123
 Error 124: Unknown error: 124
 Error 125: Unknown error: 125
 Error 126: Unknown error: 126
 Error 127: Unknown error: 127
 Error 128: Unknown error: 128
 Error 129: Unknown error: 129
 Error 130: Unknown error: 130
 Error 131: Unknown error: 131
 Error 132: Unknown error: 132
 Error 133: Unknown error: 133
 Error 134: Unknown error: 134
 Error 135: Unknown error: 135
 Error 136: Unknown error: 136
 Error 137: Unknown error: 137
 Error 138: Unknown error: 138
 Error 139: Unknown error: 139
 Error 140: Unknown error: 140
 Error 141: Unknown error: 141
 Error 142: Unknown error: 142
 Error 143: Unknown error: 143
 Error 144: Unknown error: 144
 Error 145: Unknown error: 145
 Error 146: Unknown error: 146
 Error 147: Unknown error: 147
 Error 148: Unknown error: 148
 Error 149: Unknown error: 149
 Error 150: Unknown error: 150
 Error 151: Unknown error: 151
 Error 152: Unknown error: 152
 Error 153: Unknown error: 153
 Error 154: Unknown error: 154
 Error 155: Unknown error: 155
 Error 156: Unknown error: 156
 Error 157: Unknown error: 157
 Error 158: Unknown error: 158
 Error 159: Unknown error: 159
 Error 160: Unknown error: 160
 Error 161: Unknown error: 161
 Error 162: Unknown error: 162
 Error 163: Unknown error: 163
 Error 164: Unknown error: 164
 Error 165: Unknown error: 165
 Error 166: Unknown error: 166
 Error 167: Unknown error: 167
 Error 168: Unknown error: 168
 Error 169: Unknown error: 169
 Error 170: Unknown error: 170
 Error 171: Unknown error: 171
 Error 172: Unknown error: 172
 Error 173: Unknown error: 173
 Error 174: Unknown error: 174
 Error 175: Unknown error: 175
 Error 176: Unknown error: 176
 Error 177: Unknown error: 177
 Error 178: Unknown error: 178
 Error 179: Unknown error: 179
 Error 180: Unknown error: 180
 Error 181: Unknown error: 181
 Error 182: Unknown error: 182
 Error 183: Unknown error: 183
 Error 184: Unknown error: 184
 Error 185: Unknown error: 185
 Error 186: Unknown error: 186
 Error 187: Unknown error: 187
 Error 188: Unknown error: 188
 Error 189: Unknown error: 189
 Error 190: Unknown error: 190
 Error 191: Unknown error: 191
 Error 192: Unknown error: 192
 Error 193: Unknown error: 193
 Error 194: Unknown error: 194
 Error 195: Unknown error: 195
 Error 196: Unknown error: 196
 Error 197: Unknown error: 197
 Error 198: Unknown error: 198
 Error 199: Unknown error: 199
 Error 200: Unknown error: 200
 Error 201: Unknown error: 201
 Error 202: Unknown error: 202
 Error 203: Unknown error: 203
 Error 204: Unknown error: 204
 Error 205: Unknown error: 205
 Error 206: Unknown error: 206
 Error 207: Unknown error: 207
 Error 208: Unknown error: 208
 Error 209: Unknown error: 209
 Error 210: Unknown error: 210
 Error 211: Unknown error: 211
 Error 212: Unknown error: 212
 Error 213: Unknown error: 213
 Error 214: Unknown error: 214
 Error 215: Unknown error: 215
 Error 216: Unknown error: 216
 Error 217: Unknown error: 217
 Error 218: Unknown error: 218
 Error 219: Unknown error: 219
 Error 220: Unknown error: 220
 Error 221: Unknown error: 221
 Error 222: Unknown error: 222
 Error 223: Unknown error: 223
 Error 224: Unknown error: 224
 Error 225: Unknown error: 225
 Error 226: Unknown error: 226
 Error 227: Unknown error: 227
 Error 228: Unknown error: 228
 Error 229: Unknown error: 229
 Error 230: Unknown error: 230
 Error 231: Unknown error: 231
 Error 232: Unknown error: 232
 Error 233: Unknown error: 233
 Error 234: Unknown error: 234
 Error 235: Unknown error: 235
 Error 236: Unknown error: 236
 Error 237: Unknown error: 237
 Error 238: Unknown error: 238
 Error 239: Unknown error: 239
 Error 240: Unknown error: 240
 Error 241: Unknown error: 241
 Error 242: Unknown error: 242
 Error 243: Unknown error: 243
 Error 244: Unknown error: 244
 Error 245: Unknown error: 245
 Error 246: Unknown error: 246
 Error 247: Unknown error: 247
 Error 248: Unknown error: 248
 Error 249: Unknown error: 249
 Error 250: Unknown error: 250
 Error 251: Unknown error: 251
 Error 252: Unknown error: 252
 Error 253: Unknown error: 253
 Error 254: Unknown error: 254

 
 */
#elif defined(__linux__)
#ifndef S21_EPERM #define S21_EPERM 1

#endif  // (__APPLE__ && __MACH) || __linux__



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
 * ECHRNG 44 Channel nLevel 3 haltedumber out of range
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

/*
 * 13. Вычисляет длину начального сегмента str1, который полностью 
 * состоит из символов, не входящих в str2.
 */
s21_size_t s21_strcspn(const char *str1, const char *str2);

/*
 * 14. Выполняет поиск во внутреннем массиве номера ошибки errnum и возвращает 
 * указатель на строку с сообщением об ошибке. Нужно объявить макросы, 
 * содержащие массивы сообщений об ошибке для операционных систем mac и linux. 
 * Описания ошибок есть в оригинальной библиотеке. Проверка текущей ОС 
 * осуществляется с помощью директив.
 */
char* s21_strerror(int errnum);

// 15. Вычисляет длину строки str, не включая завершающий нулевой символ.
s21_size_t s21_strlen(const char *str);

/* 
 * 18. Вычисляет длину начального сегмента str1, который полностью состоит 
 * из символов str2.
 */
s21_size_t s21_strspn(const char *str1, const char *str2);


#endif  // SRC_S21_STRING_H_
