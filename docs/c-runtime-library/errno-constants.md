---
description: "Learn more about: errno Constants"
title: "errno Constants"
ms.date: "09/17/2018"
f1_keywords: ["ENOEXEC", "ENOMEM", "E2BIG", "STRUNCATE", "ENOENT", "EMFILE", "EBADF", "EDEADLOCK", "EXDEV", "EILSEQ", "EINVAL", "EDOM", "EACCES", "ERANGE", "ENOSPC", "EAGAIN", "EEXIST", "ECHILD"]
helpviewer_keywords: ["ENOEXEC constant", "EBADF constant", "EAGAIN constant", "EINVAL constant", "ENOENT constant", "errno constants", "E2BIG constant", "EMFILE constant", "EDEADLOCK constant", "ENOSPC constant", "EDOM constant", "ENOMEM constant", "EACCES constant", "EEXIST constant", "STRUNCATE constant", "ERANGE constant", "ECHILD constant", "EXDEV constant", "EILSEQ constant"]
ms.assetid: 47089258-d5a5-4cd8-b193-223894dea0cf
---
# errno Constants

## Syntax

```
#include <errno.h>
```

## Remarks

The **errno** values are constants assigned to [errno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) in the event of various error conditions.

ERRNO.H contains the definitions of the **errno** values. However, not all the definitions given in ERRNO.H are used in 32-bit Windows operating systems. Some of the values in ERRNO.H are present to maintain compatibility with the UNIX family of operating systems.

The **errno** values in a 32-bit Windows operating system are a subset of the values for **errno** in XENIX systems. Thus, the **errno** value is not necessarily the same as the actual error code returned by a system call from the Windows operating systems. To access the actual operating system error code, use the [_doserrno](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) variable, which contains this value.

The following **errno** values are supported:

|Constant|Description|
|-|-|
|**ECHILD**|No spawned processes.|
|**EAGAIN**|No more processes. An attempt to create a new process failed because there are no more process slots, or there is not enough memory, or the maximum nesting level has been reached.|
|**E2BIG**|Argument list too long.|
|**EACCES**|Permission denied. The file's permission setting does not allow the specified access. This error signifies that an attempt was made to access a file (or, in some cases, a directory) in a way that is incompatible with the file's attributes.<br/><br/>For example, the error can occur when an attempt is made to read from a file that is not open, to open an existing read-only file for writing, or to open a directory instead of a file. Under MS-DOS operating system versions 3.0 and later, **EACCES** may also indicate a locking or sharing violation.<br/><br/>The error can also occur in an attempt to rename a file or directory or to remove an existing directory.|
|**EBADF**|Bad file number. There are two possible causes: 1) The specified file descriptor is not a valid value or does not refer to an open file. 2) An attempt was made to write to a file or device opened for read-only access.|
|**EDEADLOCK**|Resource deadlock would occur. The argument to a math function is not in the domain of the function.|
|**EDOM**|Math argument.|
|**EEXIST**|Files exist. An attempt has been made to create a file that already exists. For example, the **_O_CREAT** and **_O_EXCL** flags are specified in an **_open** call, but the named file already exists.|
|**EILSEQ**|Illegal sequence of bytes (for example, in an MBCS string).|
|**EINVAL**|Invalid argument. An invalid value was given for one of the arguments to a function. For example, the value given for the origin when positioning a file pointer (by means of a call to **fseek**) is before the beginning of the file.|
|**EMFILE**|Too many open files. No more file descriptors are available, so no more files can be opened.|
|**ENOENT**|No such file or directory. The specified file or directory does not exist or cannot be found. This message can occur whenever a specified file does not exist or a component of a path does not specify an existing directory.|
|**ENOEXEC**|Exec format error. An attempt was made to execute a file that is not executable or that has an invalid executable-file format.|
|**ENOMEM**|Not enough core. Not enough memory is available for the attempted operator. For example, this message can occur when insufficient memory is available to execute a child process, or when the allocation request in a **_getcwd** call cannot be satisfied.|
|**ENOSPC**|No space left on device. No more space for writing is available on the device (for example, when the disk is full).|
|**ERANGE**|Result too large. An argument to a math function is too large, resulting in partial or total loss of significance in the result. This error can also occur in other functions when an argument is larger than expected (for example, when the *buffer* argument to **_getcwd** is longer than expected).|
|**EXDEV**|Cross-device link. An attempt was made to move a file to a different device (using the **rename** function).|
|**STRUNCATE**|A string copy or concatenation resulted in a truncated string. See [_TRUNCATE](../c-runtime-library/truncate.md).

The following values are supported for compatibility with POSIX. They are required values on non-POSIX systems.

```C
#define E2BIG /* argument list too long */
#define EACCES /* permission denied */
#define EADDRINUSE /* address in use */
#define EADDRNOTAVAIL /* address not available */
#define EAFNOSUPPORT /* address family not supported */
#define EAGAIN /* resource unavailable try again */
#define EALREADY /* connection already in progress */
#define EBADF /* bad file descriptor */
#define EBADMSG /* bad message */
#define EBUSY /* device or resource busy */
#define ECANCELED /* operation canceled */
#define ECHILD /* no child process */
#define ECONNABORTED /* connection aborted */
#define ECONNREFUSED /* connection refused */
#define ECONNRESET /* connection reset */
#define EDEADLK /* resource deadlock would occur */
#define EDESTADDRREQ /* destination address required */
#define EDOM /* argument out of domain */
#define EEXIST /* file exists */
#define EFAULT /* bad address */
#define EFBIG /* file too large */
#define EHOSTUNREACH /* host unreachable */
#define EIDRM /* identifier removed */
#define EILSEQ /* illegal byte sequence */
#define EINPROGRESS /* operation in progress */
#define EINTR /* interrupted */
#define EINVAL /* invalid argument */
#define EIO /* io error */
#define EISCONN /* already connected */
#define EISDIR /* is a directory */
#define ELOOP /* too many synbolic link levels */
#define EMFILE /* too many files open */
#define EMLINK /* too many links */
#define EMSGSIZE /* message size */
#define ENAMETOOLONG /* filename too long */
#define ENETDOWN /* network down */
#define ENETRESET /* network reset */
#define ENETUNREACH /* network unreachable */
#define ENFILE /* too many files open in system */
#define ENOBUFS /* no buffer space */
#define ENODATA /* no message available */
#define ENODEV /* no such device */
#define ENOENT /* no such file or directory */
#define ENOEXEC /* executable format error */
#define ENOLCK /* no lock available */
#define ENOLINK /* no link */
#define ENOMEM /* not enough memory */
#define ENOMSG /* no message */
#define ENOPROTOOPT /* no protocol option */
#define ENOSPC /* no space on device */
#define ENOSR /* no stream resources */
#define ENOSTR /* not a stream */
#define ENOSYS /* function not supported */
#define ENOTCONN /* not connected */
#define ENOTDIR /* not a directory */
#define ENOTEMPTY /* directory not empty */
#define ENOTRECOVERABLE /* state not recoverable */
#define ENOTSOCK /* not a socket */
#define ENOTSUP /* not supported */
#define ENOTTY /* inappropriate io control operation */
#define ENXIO /* no such device or address */
#define EOPNOTSUPP /* operation not supported */
#define EOTHER /* other */
#define EOVERFLOW /* value too large */
#define EOWNERDEAD /* owner dead */
#define EPERM /* operation not permitted */
#define EPIPE /* broken pipe */
#define EPROTO /* protocol error */
#define EPROTONOSUPPORT /* protocol not supported */
#define EPROTOTYPE /* wrong protocol type */
#define ERANGE /* result out of range */
#define EROFS /* read only file system */
#define ESPIPE /* invalid seek */
#define ESRCH /* no such process */
#define ETIME /* stream timeout */
#define ETIMEDOUT /* timed out */
#define ETXTBSY /* text file busy */
#define EWOULDBLOCK /* operation would block */
#define EXDEV /* cross device link */
```

## See also

[Global Constants](../c-runtime-library/global-constants.md)
