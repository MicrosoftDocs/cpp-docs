---
title: "&lt;csignal&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<csignal>"]
helpviewer_keywords: ["csignal header"]
ms.assetid: d18bcf82-a89a-476c-a6bf-726af956f7c0
---
# &lt;csignal&gt;

Includes the Standard C library header \<signal.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <csignal>

using sig_atomic_t = see below;

extern using signal-handler = void(int);
```

## Functions

```cpp
signal-handler* signal(int sig, signal-handler* func);
int raise(int sig);
```

## Definitions

```cpp
#define SIG_DFL
#define SIG_ERR
#define SIG_IGN
#define SIGABRT
#define SIGFPE
#define SIGILL
#define SIGINT
#define SIGSEGV
#define SIGTERM
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
