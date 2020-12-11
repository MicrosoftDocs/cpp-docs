---
description: "Learn more about: &lt;cerrno&gt;"
title: "&lt;cerrno&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cerrno>"]
helpviewer_keywords: ["cerrno header"]
ms.assetid: c618f95c-ad4b-4a6f-825b-8727322ec77a
---
# &lt;cerrno&gt;

Includes the C Standard library header \<errno.h> and adds the associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C Standard library header are declared in the `std` namespace.

## Syntax

```cpp
#include <cerrno>
```

## Macros

```cpp
#define errno
#define E2BIG
#define EACCES
#define EADDRINUSE
#define EADDRNOTAVAIL
#define EAFNOSUPPORT
#define EAGAIN
#define EALREADY
#define EBADF
#define EBADMSG
#define EBUSY
#define ECANCELED
#define ECHILD
#define ECONNABORTED
#define ECONNREFUSED
#define ECONNRESET
#define EDEADLK
#define EDESTADDRREQ
#define EDOM
#define EEXIST
#define EFAULT
#define EFBIG
#define EHOSTUNREACH
#define EIDRM
#define EILSEQ
#define EINPROGRESS
#define EINTR
#define EINVAL
#define EIO
#define EISCONN
#define EISDIR
#define ELOOP
#define EMFILE
#define EMLINK
#define EMSGSIZE
#define ENAMETOOLONG
#define ENETDOWN
#define ENETRESET
#define ENETUNREACH
#define ENFILE
#define ENOBUFS
#define ENODATA
#define ENODEV
#define ENOENT
#define ENOEXEC
#define ENOLCK
#define ENOLINK
#define ENOMEM
#define ENOMSG
#define ENOPROTOOPT
#define ENOSPC
#define ENOSR
#define ENOSTR
#define ENOSYS
#define ENOTCONN
#define ENOTDIR
#define ENOTEMPTY
#define ENOTRECOVERABLE
#define ENOTSOCK
#define ENOTSUP
#define ENOTTY
#define ENXIO
#define EOPNOTSUPP
#define EOVERFLOW
#define EOWNERDEAD
#define EPERM
#define EPIPE
#define EPROTO
#define EPROTONOSUPPORT
#define EPROTOTYPE
#define ERANGE
#define EROFS
#define ESPIPE
#define ESRCH
#define ETIME
#define ETIMEDOUT
#define ETXTBSY
#define EWOULDBLOCK
#define EXDEV
```

### Remarks

The macros here are defined by the POSIX standard.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
