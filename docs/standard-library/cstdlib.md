---
description: "Learn more about: &lt;cstdlib&gt;"
title: "&lt;cstdlib&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cstdlib>"]
helpviewer_keywords: ["cstdlib header"]
ms.assetid: 0a6aaebf-84e9-4b60-ae90-17e11981cf54
---
# &lt;cstdlib&gt;

Includes the C Standard library header \<stdlib.h> and adds the associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace.

> [!NOTE]
> \<stdlib.h> doesn't include the type **`wchar_t`**.

## Requirements

**Header**: \<cstdlib>

**Namespace:** std

## Namespace and Macros

```cpp
namespace std {
    using size_t = see definition;
    using div_t = see definition;
    using ldiv_t = see definition;
    using lldiv_t = see definition;
}

#define NULL
#define EXIT_FAILURE
#define EXIT_SUCCESS
#define RAND_MAX
#define MB_CUR_MAX
```

## Exposition only functions

```cpp
extern "C" using c-atexit-handler = void();
extern "C++" using atexit-handler = void();
extern "C" using c-compare-pred = int(const void*, const void*);
extern "C++" using compare-pred = int(const void*, const void*);
```

## Start and termination functions

|Function|Description|
|-|-|
|[_Exit](#_exit)|Terminates program without using destructors or registered functions.|
|[abort](#abort)|Terminates program without using destructors.|
|[atexit](#atexit)|Registers function for program termination.|
|[exit](#exit)|Destroys objects with thread and static storage, then returns control.|
|[at_quick_exit](#at_quick_exit)|Registers function without arguments for program termination.|
|[quick_exit](#quick_exit)|Registers function with preserved objects for program termination.|
|[getenv](#getenv)|See C standard library reference.|
|[system](#system)|See C standard library reference.|

### <a name="_exit"></a> _Exit

```cpp
[[noreturn]] void _Exit(int status) noexcept;
```

#### Remarks

The program is terminated without executing destructors for objects of automatic, thread, or static storage duration and without calling functions passed to `atexit()`. The function `_Exit` is signal-safe.

### <a name="abort"></a> abort

```cpp
[[noreturn]] void abort() noexcept;
```

#### Remarks

The program is terminated without executing destructors for objects of automatic, thread, or static storage duration and without calling functions passed to `atexit()`. The function `abort` is signal-safe.

### <a name="at_quick_exit"></a> at_quick_exit

```cpp
int at_quick_exit(c-atexit-handler * func) noexcept;
int at_quick_exit(atexit-handler * func) noexcept;
```

#### Return Value

Zero if the registration succeeds, non-zero if it fails.

#### Remarks

The `at_quick_exit()` functions register a function *func*, which is called without arguments when `quick_exit` is called. A call to `at_quick_exit()` that doesn't happen before all calls to `quick_exit` may not succeed. The `at_quick_exit()` functions don't introduce a data race. The order of registration may be indeterminate if `at_quick_exit` was called from more than one thread. Since `at_quick_exit` registrations are distinct from the `atexit` registrations, applications may need to call both registration functions using the same argument. MSVC supports the registration of at least 32 functions.

### <a name="atexit"></a> atexit

```cpp
int atexit(c-atexit-handler * func) noexcept;
int atexit(atexit-handler * func) noexcept;
```

#### Remarks

The `atexit()` functions register the function pointed to by *func* to be called without arguments at normal program termination. A call to `atexit()` that doesn't happen before a call to `exit()` may not succeed. The `atexit()` functions don't introduce a data race.

#### Return Value

Returns zero if the registration succeeds, nonzero if it fails.

### <a name="exit"></a> exit

```cpp
[[noreturn]] void exit(int status);
```

#### Remarks

First, objects with thread storage duration and associated with the current thread are destroyed.

Next, objects with static storage duration are destroyed and functions registered by calling `atexit` are called. Automatic objects aren't destroyed when `exit()` is called. If control leaves a registered function called by `exit` because the function doesn't provide a handler for a thrown exception, `std::terminate()` is called. A function is called once for every time it's registered. Objects with automatic storage duration are all destroyed in a program whose `main` function contains no automatic objects and executes the call to `exit()`. Control can be transferred directly to such a `main` function by throwing an exception that's caught in `main`.

Next, all open C streams (as mediated by the function signatures declared in \<cstdio>) with unwritten buffered data are flushed, all open C streams are closed, and all files created by calling `tmpfile()` are removed.

Finally, control is returned to the host environment. When *status* is zero or EXIT_SUCCESS, an implementation-defined form of the status successful termination is returned. MSVC returns a value of zero. If *status* is EXIT_FAILURE, MSVC returns a value of 3. Otherwise, MSVC returns the *status* parameter value.

### <a name="getenv"></a> getenv

```cpp
char* getenv(const char* name);
```

### <a name="quick_exit"></a> quick_exit

```cpp
[[noreturn]] void quick_exit(int status) noexcept;
```

#### Remarks

Generally, functions registered by calls to `at_quick_exit` are called in the reverse order of their registration. This order doesn't apply to functions registered after other registered functions have already been called. No objects are destroyed when `quick_exit` is called. If control leaves a registered function called by `quick_exit` because the function doesn't provide a handler for a thrown exception, `std::terminate()` is called. A function registered via `at_quick_exit` is invoked by the thread that calls `quick_exit`, which can be a different thread than the one that registered it. That means registered functions shouldn't rely on the identity of objects that have thread storage duration. After calling registered functions, `quick_exit` calls `_Exit(status)`. The standard file buffers aren't flushed. The function `quick_exit` is signal-safe when the functions registered with `at_quick_exit` are.

### <a name="system"></a> system

```cpp
int system(const char* string);
```

## Memory allocation functions

```cpp
// void* aligned_alloc(size_t alignment, size_t size); // Unsupported in MSVC
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
```

### Remarks

These functions have the semantics specified in the C standard library. MSVC doesn't support the `aligned_alloc` function. C11 specified `aligned_alloc()` in a way that's incompatible with the Microsoft implementation of `free()`, namely, that `free()` must be able to handle highly aligned allocations.

## Numeric string conversions

```cpp
double atof(const char* nptr);
int atoi(const char* nptr);
long int atol(const char* nptr);
long long int atoll(const char* nptr);
double strtod(const char* nptr, char** endptr);
float strtof(const char* nptr, char** endptr);
long double strtold(const char* nptr, char** endptr);
long int strtol(const char* nptr, char** endptr, int base);
long long int strtoll(const char* nptr, char** endptr, int base);
unsigned long int strtoul(const char* nptr, char** endptr, int base);
unsigned long long int strtoull(const char* nptr, char** endptr, int base);
```

### Remarks

These functions have the semantics specified in the C standard library.

## Multibyte / wide string and character conversion functions

```cpp
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* pwcs, const char* s, size_t n);
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);
```

### Remarks

These functions have the semantics specified in the C standard library.

## Algorithm functions

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

### Remarks

These functions have the semantics specified in the C standard library.

## Low-quality random number generation functions

```cpp
int rand();
void srand(unsigned int seed);
```

### Remarks

These functions have the semantics specified in the C standard library.

## Absolute values

```cpp
int abs(int j);
long int abs(long int j);
long long int abs(long long int j);
float abs(float j);
double abs(double j);
long double abs(long double j);
long int labs(long int j);
long long int llabs(long long int j);
```

### Remarks

These functions have the semantics specified in the C standard library.

## Integer division

```cpp
div_t div(int numer, int denom);
ldiv_t div(long int numer, long int denom);
lldiv_t div(long long int numer, long long int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);
```

### Remarks

These functions have the semantics specified in the C standard library.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
