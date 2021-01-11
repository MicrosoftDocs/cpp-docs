---
description: "Learn more about: &lt;ctime&gt;"
title: "&lt;ctime&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<ctime>", "std::<ctime>"]
helpviewer_keywords: ["ctime header"]
ms.assetid: c1f7d4a4-4bfe-4e35-92cb-f63dbd3c39a8
---
# &lt;ctime&gt;

Includes the Standard C library header \<time.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <ctime>
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Constants

```cpp
#define NULL
#define CLOCKS_PER_SEC
#define TIME_UTC

namespace std {
    using size_t = see below;
    using clock_t = see below ;
    using time_t = see below ;
}
```

## Structures

```cpp
struct timespec;
struct tm;
```

## Functions

```cpp
clock_t clock();
double difftime(time_t time1, time_t time0);
time_t mktime(struct tm* timeptr);
time_t time(time_t* timer);
int timespec_get(timespec* ts, int base);
char* asctime(const struct tm* timeptr);
char* ctime(const time_t* timer);
struct tm* gmtime(const time_t* timer);
struct tm* localtime(const time_t* timer);
size_t strftime(char* s, size_t maxsize, const char* format, const struct tm* timeptr);
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
