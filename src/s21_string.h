#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#include "s21_errno_mac.h"
#include "s21_errno_linux.h"

#ifndef S21_NULL
#define S21_NULL (void *)0
#endif  // S21_NULL

typedef unsigned long int s21_size_t;

typedef struct str_err {
    int id;
    char *null_str;
} err;

#if defined(__APPLE__) && defined(__MACH__)
#ifndef S21_ERRLIST 
#define S21_ERRLIST {                                                                     \
                    {S21_EPERM, "Operation not permitted"},                               \
                    {S21_ENOENT, "No such file or directory"},                            \
                    {S21_ESRCH, "No such process"},                                       \
                    {S21_EINTR, "Interrupted system call"},                               \
                    {S21_EIO, "Input/output error"},                                      \
                    {S21_E2BIG, "Argument list too long"},                                \
                    {S21_ENOEXEC, "Exec format error"},                                   \
                    {S21_EBADF, "Bad file descriptor"},                                   \
                    {S21_ECHILD, "No child processes"},                                   \
                    {S21_EDEADLK, "Resource deadlock avoided"},                           \
                    {S21_EACCES, "Permission denied"},                                    \
                    {S21_EFAULT, "Bad address"},                                          \
                    {S21_EBUSY, "Resource busy"},                                         \
                    {S21_EEXIST, "File exists"},                                          \
                    {S21_EXDEV, "Cross-device link"},                                     \
                    {S21_ENOTSUP, "Operation not supported by device"},                   \
                    {S21_ENOTDIR, "Not a directory"},                                     \
                    {S21_EISDIR, "Is a directory"},                                       \
                    {S21_EINVAL, "Invalid argument"},                                     \
                    {S21_ENFILE, "Too many open files in system"},                        \
                    {S21_ENOTTY, "Inappropriate ioctl for device"},                       \
                    {S21_ETXTBSY, "Text file busy"},                                      \
                    {S21_EFBIG, "File too large"},                                        \
                    {S21_ENOSPC, "No space left on device"},                              \
                    {S21_ESPIPE, "Illegal seek"},                                         \
                    {S21_EROFS, "Read-only file system"},                                 \
                    {S21_EMLINK, "Too many links"},                                       \
                    {S21_EPIPE, "Broken pipe"},                                           \
                    {S21_EDOM, "Numerical argument out of domain"},                       \
                    {S21_ERANGE, "Result too large"},                                     \
                    {S21_EINPROGRESS, "Operation now in progress"},                       \
                    {S21_EDESTADDRREQ, "Destination address required"},                   \
                    {S21_EMSGSIZE, "Message too long"},                                   \
                    {S21_EPROTOTYPE, "Protocol wrong type for socket"},                   \
                    {S21_ENOPROTOOPT, "Protocol not available"},                          \
                    {S21_EPROTONOSUPPORT, "Protocol not supported"},                      \
                    {S21_EAFNOSUPPORT, "Address family not supported by protocol family"},\
                    {S21_EADDRINUSE, "Address already in use"},                           \
                    {S21_ENETDOWN, "Network is down"},                                    \
                    {S21_ENETUNREACH, "Network is unreachable"},                          \
                    {S21_ECONNRESET, "Connection reset by peer"},                         \
                    {S21_ENOBUFS, "No buffer space available"},                           \
                    {S21_EISCONN, "Socket is already connected"},                         \
                    {S21_ENOTCONN, "Socket is not connected"},                            \
                    {S21_ECONNREFUSED, "Connection refused"},                             \
                    {S21_ELOOP, "Too many levels of symbolic links"},                     \
                    {S21_ENAMETOOLONG, "File name too long"},                             \
                    {S21_ENOTEMPTY, "Directory not empty"},                               \
                    {S21_ENOLCK, "No locks available"},                                   \
                    {S21_ECANCELED, "Operation canceled"},                                \
                    {S21_EIDRM, "Identifier removed"},                                    \
                    {S21_ENOMSG, "No message of desired type"},                           \
                    {S21_EILSEQ, "Illegal byte sequence"},                                \
                    {S21_EBADMSG, "Bad message"},                                         \
                    {S21_EOPNOTSUPP, "EMULTIHOP (Reserved)"},                             \
                    {S21_ENOLINK, "ENOLINK (Reserved)"},                                  \
                    {S21_EPROTO, "Protocol error"},                                       \
                    {S21_ENOSYS, "Operation not supported on socket"},                    \
                    {S21_ENOTRECOVERABLE, "State not recoverable"},                       \
                    {S21_EOWNERDEAD, "Previous owner died"}                               \
                    }
#endif  // S21_ERRLIST
#elif defined(__linux__)
#ifndef S21_ERRLIST 
#define S21_ERRLIST {                                                              \
                    {S21_EPERM, "Operation not permitted"},                        \
                    {S21_ENOENT, "No such file or directory"},                     \
                    {S21_ESRCH, "No such process"},                                \
                    {S21_EINTR, "Interrupted system call"},                        \
                    {S21_EIO, "Input/output error"},                               \
                    {S21_ENXIO, "No such device or address"},                      \
                    {S21_E2BIG, "Argument list too long"},                         \
                    {S21_ENOEXEC, "Exec format error"},                            \
                    {S21_EBADF, "Bad file descriptor"},                            \
                    {S21_ECHILD, "No child processes"},                            \
                    {S21_EAGAIN, "Resource temporarily unavailable"},              \
                    {S21_ENOMEM, "Cannot allocate memory"},                        \
                    {S21_EACCES, "Permission denied"},                             \
                    {S21_EFAULT, "Bad address"},                                   \
                    {S21_EBUSY, "Device or resource busy"},                        \
                    {S21_EEXIST, "File exists"},                                   \
                    {S21_EXDEV, "Invalid cross-device link"},                      \
                    {S21_ENODEV, "No such device"},                                \
                    {S21_ENOTDIR, "Not a directory"},                              \
                    {S21_EISDIR, "Is a directory"},                                \
                    {S21_EINVAL, "Invalid argument"},                              \
                    {S21_ENFILE, "Too many open files in system"},                 \
                    {S21_EMFILE, "Too many open files"},                           \
                    {S21_ENOTTY, "Inappropriate ioctl for device"},                \
                    {S21_ETXTBSY, "Text file busy"},                               \
                    {S21_EFBIG, "File too large"},                                 \
                    {S21_ENOSPC, "No space left on device"},                       \
                    {S21_ESPIPE, "Illegal seek"},                                  \
                    {S21_EROFS, "Read-only file system"},                          \
                    {S21_EMLINK, "Too many links"},                                \
                    {S21_EPIPE, "Broken pipe"},                                    \
                    {S21_EDOM, "Numerical argument out of domain"},                \
                    {S21_ERANGE, "Numerical result out of range"},                 \
                    {S21_EDEADLK, "Resource deadlock avoided"},                    \
                    {S21_ENAMETOOLONG, "File name too long"},                      \
                    {S21_ENOLCK, "No locks available"},                            \
                    {S21_ENOSYS, "Function not implemented"},                      \
                    {S21_ENOTEMPTY, "Directory not empty"},                        \
                    {S21_ELOOP, "Too many levels of symbolic links"},              \
                    {S21_EWOULDBLOCK, "Resource temporarily unavailable"},         \
                    {S21_ENOMSG, "No message of desired type"},                    \
                    {S21_EIDRM, "Identifier removed"},                             \
                    {S21_ENOLINK, "Link has been severed"},                        \
                    {S21_EPROTO, "Protocol error"},                                \
                    {S21_EMULTIHOP, "Multihop attempted"},                         \
                    {S21_EBADMSG, "Bad message"},                                  \
                    {S21_EOVERFLOW, "Value too large for defined data type"},      \
                    {S21_ENOTSOCK, "Socket operation on non-socket"},              \
                    {S21_EDESTADDRREQ, "Destination address required"},            \
                    {S21_EMSGSIZE, "Message too long"},                            \
                    {S21_EPROTOTYPE, "Protocol wrong type for socket"},            \
                    {S21_ENOPROTOOPT, "Protocol not available"},                   \
                    {S21_EPROTONOSUPPORT, "Protocol not supported"},               \
                    {S21_EOPNOTSUPP, "Operation not supported"},                   \
                    {S21_EAFNOSUPPORT, "Address family not supported by protocol"},\
                    {S21_EADDRINUSE, "Address already in use"},                    \
                    {S21_EADDRNOTAVAIL, "Cannot assign requested address"},        \
                    {S21_ENETDOWN, "Network is down"},                             \
                    {S21_ENETUNREACH, "Network is unreachable"},                   \
                    {S21_ENETRESET, "Network dropped connection on reset"},        \
                    {S21_ECONNABORTED, "Software caused connection abort"},        \
                    {S21_ECONNRESET, "Connection reset by peer"},                  \
                    {S21_ENOBUFS, "No buffer space available"},                    \
                    {S21_EISCONN, "Transport endpoint is already connected"},      \
                    {S21_ENOTCONN, "Transport endpoint is not connected"},         \
                    {S21_ETIMEDOUT, "Connection timed out"},                       \
                    {S21_ECONNREFUSED, "Connection refused"},                      \
                    {S21_EHOSTUNREACH, "No route to host"},                        \
                    {S21_EALREADY, "Operation already in progress"},               \
                    {S21_EINPROGRESS, "Operation now in progress"},                \
                    {S21_ESTALE, "Stale file handle"},                             \
                    {S21_EDQUOT, "Disk quota exceeded"},                           \
                    {S21_ECANCELED, "Operation canceled"},                         \
                    {S21_EOWNERDEAD, "Owner died"},                                \
                    {S21_ENOTRECOVERABLE, "State not recoverable"},                \
                    {S21_ENOTSUP, "Operation not supported"}                       \
                    }
#endif  // S21_ERRLIST
#endif

/*
 * 2. Сравнивает первые n байтов str1 и str2. 
 */
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);

/*
 * 9. Сравнивает строку, на которую указывает str1, со строкой, на которую указывает str2.
 */
int s21_strcmp(const char *str1, const char *str2);

/*
 * 10. Сравнивает не более первых n байтов str1 и str2.
 */
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);

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
