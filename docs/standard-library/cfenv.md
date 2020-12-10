---
description: "Learn more about: &lt;cfenv&gt;"
title: "&lt;cfenv&gt;"
ms.date: "11/04/2016"
ms.assetid: 6a17ad51-2182-4e91-8108-65997382acd3
---
# &lt;cfenv&gt;

Includes the Standard C library header \<fenv.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <cfenv>
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Constants and Types

```cpp
#define FE_ALL_EXCEPT see below
#define FE_DIVBYZERO see below
#define FE_INEXACT see below
#define FE_INVALID see below
#define FE_OVERFLOW see below
#define FE_UNDERFLOW see below
#define FE_DOWNWARD see below
#define FE_TONEAREST see below
#define FE_TOWARDZERO see below
#define FE_UPWARD see below
#define FE_DFL_ENV see below

namespace std {
    using fenv_t = object type ;
    using fexcept_t = integer type ;
}
```

## Functions

```cpp
int feclearexcept(int except);
int fegetexceptflag(fexcept_t* pflag, int except);
int feraiseexcept(int except);
int fesetexceptflag(const fexcept_t* pflag, int except);
int fetestexcept(int except);
int fegetround();
int fesetround(int mode);
int fegetenv(fenv_t* penv);
int feholdexcept(fenv_t* penv);
int fesetenv(const fenv_t* penv);
int feupdateenv(const fenv_t* penv);
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
