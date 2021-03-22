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

|Constant|Description|Value|
|-|-|-|
|**EPERM**|Operation not permitted.|1|
|**ENOENT**|No such file or directory. The specified file or directory does not exist or cannot be found. This message can occur whenever a specified file does not exist or a component of a path does not specify an existing directory.|2|
|**ESRCH**|No such process.|3|
|**EINTR**|Interrupted function.|4|
|**EIO**|I/O error.|5|
|**ENXIO**|No such device or address.|6|
|**E2BIG**|Argument list too long.|7|
|**ENOEXEC**|Exec format error. An attempt was made to execute a file that is not executable or that has an invalid executable-file format.|8|
|**EBADF**|Bad file number. There are two possible causes: 1) The specified file descriptor is not a valid value or does not refer to an open file. 2) An attempt was made to write to a file or device opened for read-only access.|9|
|**ECHILD**|No spawned processes.|10|
|**EAGAIN**|No more processes or not enough memory or maximum nesting level reached. An attempt to create a new process failed because there are no more process slots, or there is not enough memory, or the maximum nesting level has been reached.|11|
|**ENOMEM**|Not enough memory is available for the attempted operator. For example, this message can occur when insufficient memory is available to execute a child process, or when the allocation request in a **_getcwd** call cannot be satisfied.|12|
|**EACCES**|Permission denied. The file's permission setting does not allow the specified access. This error signifies that an attempt was made to access a file (or, in some cases, a directory) in a way that is incompatible with the file's attributes.<br/><br/>For example, the error can occur when an attempt is made to read from a file that is not open, to open an existing read-only file for writing, or to open a directory instead of a file. Under MS-DOS operating system versions 3.0 and later, **EACCES** may also indicate a locking or sharing violation.<br/><br/>The error can also occur in an attempt to rename a file or directory or to remove an existing directory.|13|
|**EFAULT**|Bad address.|14|
|**EBUSY**|Device or resource busy.|16|
|**EEXIST**|Files exists. An attempt has been made to create a file that already exists. For example, the **_O_CREAT** and **_O_EXCL** flags are specified in an **_open** call, but the named file already exists.|17|
|**EXDEV**|Cross-device link. An attempt was made to move a file to a different device (using the **rename** function).|18|
|**ENODEV**|No such device.|19|
|**ENOTDIR**|Not a directory.|20|
|**EISDIR**|Is a directory.|21|
|**EINVAL**|Invalid argument. An invalid value was given for one of the arguments to a function. For example, the value given for the origin when positioning a file pointer (by means of a call to **fseek**) is before the beginning of the file.|22|
|**ENFILE**|Too many files open in system.|23|
|**EMFILE**|Too many open files. No more file descriptors are available, so no more files can be opened.|24|
|**ENOTTY**|Inappropriate I/O control operation.|25|
|**EFBIG**|File too large.|27|
|**ENOSPC**|No space left on device. No more space for writing is available on the device (for example, when the disk is full).|28|
|**ESPIPE**|Invalid seek.|29|
|**EROFS**|Read only file system.|30|
|**EMLINK**|Too many links.|31|
|**EPIPE**|Broken pipe.|32|
|**EDOM**|Math argument. The argument to a math function is not in the domain of the function.|33|
|**ERANGE**|Result too large. An argument to a math function is too large, resulting in partial or total loss of significance in the result. This error can also occur in other functions when an argument is larger than expected (for example, when the *buffer* argument to **_getcwd** is longer than expected).|34|
|**EDEADLK**|Resource deadlock would occur.|36|
|**EDEADLOCK**|Same as EDEADLK for compatibility with older Microsoft C versions.|36|
|**ENAMETOOLONG**|Filename too long.|38|
|**ENOLCK**|No locks available.|39|
|**ENOSYS**|Function not supported.|40|
|**ENOTEMPTY**|Directory not empty.|41|
|**EILSEQ**|Illegal sequence of bytes (for example, in an MBCS string).|42|
|**STRUNCATE**|A string copy or concatenation resulted in a truncated string. See [_TRUNCATE](../c-runtime-library/truncate.md).|80|

The following values are supported for compatibility with POSIX. They are required values on non-POSIX systems.

|Constant|Description|Value|
|-|-|-|
|**EADDRINUSE**|Address in use.|100|
|**EADDRNOTAVAIL**|Address not available.|101|
|**EAFNOSUPPORT**|Address family not supported.|102|
|**EALREADY**|Connection already in progress.|103|
|**EBADMSG**|Bad message.|104|
|**ECANCELED**|Operation canceled.|105|
|**ECONNABORTED**|Connection aborted.|106|
|**ECONNREFUSED**|Connection refused.|107|
|**ECONNRESET**|Connection reset.|108|
|**EDESTADDRREQ**|Destination address required.|109|
|**EHOSTUNREACH**|Host unreachable.|110|
|**EIDRM**|Identifier removed.|111|
|**EINPROGRESS**|Operation in progress.|112|
|**EISCONN**|Already connected.|113|
|**ELOOP**|Too many symbolic link levels.|114|
|**EMSGSIZE**|Message size.|115|
|**ENETDOWN**|Network down.|116|
|**ENETRESET**|Network reset.|117|
|**ENETUNREACH**|Network unreachable.|118|
|**ENOBUFS**|No buffer space.|119|
|**ENODATA**|No message available.|120|
|**ENOLINK**|No link.|121|
|**ENOMSG**|No message.|122|
|**ENOPROTOOPT**|No protocol option.|123|
|**ENOSR**|No stream resources.|124|
|**ENOSTR**|Not a stream.|125|
|**ENOTCONN**|Not connected.|126|
|**ENOTRECOVERABLE**|State not recoverable.|127|
|**ENOTSOCK**|Not a socket.|128|
|**ENOTSUP**|Not supported.|129|
|**EOPNOTSUPP**|Operation not supported.|130|
|**EOTHER**|Other.|131|
|**EOVERFLOW**|Value too large.|132|
|**EOWNERDEAD**|Owner dead.|133|
|**EPROTO**|Protocol error.|134|
|**EPROTONOSUPPORT**|Protocol not supported.|135|
|**EPROTOTYPE**|Wrong protocol type.|136|
|**ETIME**|Stream timeout.|137|
|**ETIMEDOUT**|Timed out.|138|
|**ETXTBSY**|Text file busy.|139|
|**EWOULDBLOCK**|Operation would block.|140

## See also

[Global Constants](../c-runtime-library/global-constants.md)
