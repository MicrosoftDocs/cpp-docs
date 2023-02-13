---
description: "Learn more about: errno constants"
title: "errno constants"
ms.date: 04/26/2021
f1_keywords: ["E2BIG", "EACCES", "EAGAIN", "EBADF", "EBUSY", "ECHILD", "EDEADLK", "EDEADLOCK", "EDOM", "EEXIST", "EFAULT", "EFBIG", "EILSEQ", "EINTR", "EINVAL", "EIO", "EISDIR", "EMFILE", "EMLINK", "ENAMETOOLONG", "ENFILE", "ENODEV", "ENOENT", "ENOEXEC", "ENOLCK", "ENOMEM", "ENOSPC", "ENOSYS", "ENOTDIR", "ENOTEMPTY", "ENOTTY", "ENXIO", "EPERM", "EPIPE", "ERANGE", "EROFS", "ESPIPE", "ESRCH", "EXDEV", "STRUNCATE", "EADDRINUSE", "EADDRNOTAVAIL", "EAFNOSUPPORT", "EALREADY", "EBADMSG", "ECANCELED", "ECONNABORTED", "ECONNREFUSED", "ECONNRESET", "EDESTADDRREQ", "EHOSTUNREACH", "EIDRM", "EINPROGRESS", "EISCONN", "ELOOP", "EMSGSIZE", "ENETDOWN", "ENETRESET", "ENETUNREACH", "ENOBUFS", "ENODATA", "ENOLINK", "ENOMSG", "ENOPROTOOPT", "ENOSR", "ENOSTR", "ENOTCONN", "ENOTRECOVERABLE", "ENOTSOCK", "ENOTSUP", "EOPNOTSUPP", "EOTHER", "EOVERFLOW", "EOWNERDEAD", "EPROTO", "EPROTONOSUPPORT", "EPROTOTYPE", "ETIME", "ETIMEDOUT", "ETXTBSY", "EWOULDBLOCK"]
helpviewer_keywords: ["E2BIG constant", "EACCES constant", "EAGAIN constant", "EBADF constant", "EBUSY constant", "ECHILD constant", "EDEADLK constant", "EDEADLOCK constant", "EDOM constant", "EEXIST constant", "EFAULT constant", "EFBIG constant", "EILSEQ constant", "EINTR constant", "EINVAL constant", "EIO constant", "EISDIR constant", "EMFILE constant", "EMLINK constant", "ENAMETOOLONG constant", "ENFILE constant", "ENODEV constant", "ENOENT constant", "ENOEXEC constant", "ENOLCK constant", "ENOMEM constant", "ENOSPC constant", "ENOSYS constant", "ENOTDIR constant", "ENOTEMPTY constant", "ENOTTY constant", "ENXIO constant", "EPERM constant", "EPIPE constant", "ERANGE constant", "EROFS constant", "ESPIPE constant", "ESRCH constant", "EXDEV constant", "STRUNCATE constant", "EADDRINUSE constant", "EADDRNOTAVAIL constant", "EAFNOSUPPORT constant", "EALREADY constant", "EBADMSG constant", "ECANCELED constant", "ECONNABORTED constant", "ECONNREFUSED constant", "ECONNRESET constant", "EDESTADDRREQ constant", "EHOSTUNREACH constant", "EIDRM constant", "EINPROGRESS constant", "EISCONN constant", "ELOOP constant", "EMSGSIZE constant", "ENETDOWN constant", "ENETRESET constant", "ENETUNREACH constant", "ENOBUFS constant", "ENODATA constant", "ENOLINK constant", "ENOMSG constant", "ENOPROTOOPT constant", "ENOSR constant", "ENOSTR constant", "ENOTCONN constant", "ENOTRECOVERABLE constant", "ENOTSOCK constant", "ENOTSUP constant", "EOPNOTSUPP constant", "EOTHER constant", "EOVERFLOW constant", "EOWNERDEAD constant", "EPROTO constant", "EPROTONOSUPPORT constant", "EPROTOTYPE constant", "ETIME constant", "ETIMEDOUT constant", "ETXTBSY constant", "EWOULDBLOCK constant"]
---
# `errno` constants

## Syntax

```cpp
#include <errno.h>
```

## Remarks

The `errno` constants are values assigned to [`errno`](./errno-doserrno-sys-errlist-and-sys-nerr.md) for various error conditions.

`ERRNO.H` contains the definitions of the `errno` values. However, not all the definitions given in `ERRNO.H` are used in 32-bit Windows operating systems. Some of the values in `ERRNO.H` are present to maintain compatibility with the UNIX family of operating systems. The `errno` values in a 32-bit Windows operating system are a subset of the values for `errno` in UNIX systems.

The `errno` value isn't necessarily the same as the actual error code returned by a system call from the Windows operating system. To access the actual operating system error code, use the [`_doserrno`](./errno-doserrno-sys-errlist-and-sys-nerr.md) variable, which contains this value.

The following `errno` values are supported:

| Constant | Description | Value |
|--|--|--|
| `E2BIG` | Argument list too long. | 7 |
| `EACCES` | Permission denied. The file's permission setting doesn't allow the specified access. An attempt was made to access a file (or, in some cases, a directory) in a way that's incompatible with the file's attributes.<br/><br/>For example, the error can occur when an attempt is made to read from a file that isn't open. Or, on an attempt to open an existing read-only file for writing, or to open a directory instead of a file. Under MS-DOS operating system versions 3.0 and later, `EACCES` may also indicate a locking or sharing violation.<br/><br/>The error can also occur in an attempt to rename a file or directory or to remove an existing directory. | 13 |
| `EAGAIN` | No more processes or not enough memory or maximum nesting level reached. An attempt to create a new process failed because there are no more process slots, or there isn't enough memory, or the maximum nesting level has been reached. | 11 |
| `EBADF` | Bad file number. There are two possible causes: 1) The specified file descriptor isn't a valid value or doesn't refer to an open file. 2) An attempt was made to write to a file or device opened for read-only access. | 9 |
| `EBUSY` | Device or resource busy. | 16 |
| `ECHILD` | No spawned processes. | 10 |
| `EDEADLK` | Resource deadlock would occur. | 36 |
| `EDEADLOCK` | Same as `EDEADLK` for compatibility with older Microsoft C versions. | 36 |
| `EDOM` | Math argument. The argument to a math function isn't in the domain of the function. | 33 |
| `EEXIST` | Files exists. An attempt has been made to create a file that already exists. For example, the `_O_CREAT` and `_O_EXCL` flags are specified in an `_open` call, but the named file already exists. | 17 |
| `EFAULT` | Bad address. | 14 |
| `EFBIG` | File too large. | 27 |
| `EILSEQ` | Illegal sequence of bytes (for example, in an `MBCS` string). | 42 |
| `EINTR` | Interrupted function. | 4 |
| `EINVAL` | Invalid argument. An invalid value was given for one of the arguments to a function. For example, the value given for the origin when positioning a file pointer (by a call to `fseek`) is before the beginning of the file. | 22 |
| `EIO` | I/O error. | 5 |
| `EISDIR` | Is a directory. | 21 |
| `EMFILE` | Too many open files. No more file descriptors are available, so no more files can be opened. | 24 |
| `EMLINK` | Too many links. | 31 |
| `ENAMETOOLONG` | Filename too long. | 38 |
| `ENFILE` | Too many files open in system. | 23 |
| `ENODEV` | No such device. | 19 |
| `ENOENT` | No such file or directory. The specified file or directory doesn't exist or can't be found. This message can occur whenever a specified file doesn't exist or a component of a path doesn't specify an existing directory. | 2 |
| `ENOEXEC` | Exec format error. An attempt was made to execute a file that isn't executable or that has an invalid executable-file format. | 8 |
| `ENOLCK` | No locks available. | 39 |
| `ENOMEM` | Not enough memory is available for the attempted operator. For example, this message can occur when insufficient memory is available to execute a child process, or when the allocation request in a `_getcwd` call can't be satisfied. | 12 |
| `ENOSPC` | No space left on device. No more space for writing is available on the device (for example, when the disk is full). | 28 |
| `ENOSYS` | Function not supported. | 40 |
| `ENOTDIR` | Not a directory. | 20 |
| `ENOTEMPTY` | Directory not empty. | 41 |
| `ENOTTY` | Inappropriate I/O control operation. | 25 |
| `ENXIO` | No such device or address. | 6 |
| `EPERM` | Operation not permitted. | 1 |
| `EPIPE` | Broken pipe. | 32 |
| `ERANGE` | Result too large. An argument to a math function is too large, resulting in partial or total loss of significance in the result. This error can also occur in other functions when an argument is larger than expected (for example, when the *`buffer`* argument to `_getcwd` is longer than expected). | 34 |
| `EROFS` | Read only file system. | 30 |
| `ESPIPE` | Invalid seek. | 29 |
| `ESRCH` | No such process. | 3 |
| `EXDEV` | Cross-device link. An attempt was made to move a file to a different device (using the `rename` function). | 18 |
| `STRUNCATE` | A string copy or concatenation resulted in a truncated string. See [`_TRUNCATE`](./truncate.md). | 80 |

The following values are supported for compatibility with POSIX:

| Constant | Description | Value |
|--|--|--|
| `EADDRINUSE` | Address in use. | 100 |
| `EADDRNOTAVAIL` | Address not available. | 101 |
| `EAFNOSUPPORT` | Address family not supported. | 102 |
| `EALREADY` | Connection already in progress. | 103 |
| `EBADMSG` | Bad message. | 104 |
| `ECANCELED` | Operation canceled. | 105 |
| `ECONNABORTED` | Connection aborted. | 106 |
| `ECONNREFUSED` | Connection refused. | 107 |
| `ECONNRESET` | Connection reset. | 108 |
| `EDESTADDRREQ` | Destination address required. | 109 |
| `EHOSTUNREACH` | Host unreachable. | 110 |
| `EIDRM` | Identifier removed. | 111 |
| `EINPROGRESS` | Operation in progress. | 112 |
| `EISCONN` | Already connected. | 113 |
| `ELOOP` | Too many symbolic link levels. | 114 |
| `EMSGSIZE` | Message size. | 115 |
| `ENETDOWN` | Network down. | 116 |
| `ENETRESET` | Network reset. | 117 |
| `ENETUNREACH` | Network unreachable. | 118 |
| `ENOBUFS` | No buffer space. | 119 |
| `ENODATA` | No message available. | 120 |
| `ENOLINK` | No link. | 121 |
| `ENOMSG` | No message. | 122 |
| `ENOPROTOOPT` | No protocol option. | 123 |
| `ENOSR` | No stream resources. | 124 |
| `ENOSTR` | Not a stream. | 125 |
| `ENOTCONN` | Not connected. | 126 |
| `ENOTRECOVERABLE` | State not recoverable. | 127 |
| `ENOTSOCK` | Not a socket. | 128 |
| `ENOTSUP` | Not supported. | 129 |
| `EOPNOTSUPP` | Operation not supported. | 130 |
| `EOTHER` | Other. | 131 |
| `EOVERFLOW` | Value too large. | 132 |
| `EOWNERDEAD` | Owner dead. | 133 |
| `EPROTO` | Protocol error. | 134 |
| `EPROTONOSUPPORT` | Protocol not supported. | 135 |
| `EPROTOTYPE` | Wrong protocol type. | 136 |
| `ETIME` | Stream timeout. | 137 |
| `ETIMEDOUT` | Timed out. | 138 |
| `ETXTBSY` | Text file busy. | 139 |
| `EWOULDBLOCK` | Operation would block. | 140 |

## See also

[Global constants](./global-constants.md)
