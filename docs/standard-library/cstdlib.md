---
title: "&lt;cstdlib&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cstdlib>"]
helpviewer_keywords: ["cstdlib header"]
ms.assetid: 0a6aaebf-84e9-4b60-ae90-17e11981cf54
---
# &lt;cstdlib&gt;

Includes the Standard C library header \<stdlib.h> and adds the associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace.

> [!NOTE]
> \<stdlib.h> doesn't include the type **wchar_t**.

## Syntax

```cpp
#include <cstdlib>
```

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

## Functions

### Exposition only

```cpp
extern "C" using c-atexit-handler = void();
extern "C++" using atexit-handler = void();
extern "C" using c-compare-pred = int(const void*, const void*);
extern "C++" using compare-pred = int(const void*, const void*);
```

### Start and termination

```cpp
[[noreturn]] void abort() noexcept;
int atexit(c-atexit-handler * func) noexcept;
int atexit(atexit-handler * func) noexcept;
int at_quick_exit(c-atexit-handler * func) noexcept;
int at_quick_exit(atexit-handler * func) noexcept;
[[noreturn]] void exit(int status);
[[noreturn]] void _Exit(int status) noexcept;
[[noreturn]] void quick_exit(int status) noexcept;
char* getenv(const char* name);
int system(const char* string);
```

### C library memory allocation

```cpp
void* aligned_alloc(size_t alignment, size_t size);
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
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

###  Multibyte / wide string and character conversion

```cpp
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* pwcs, const char* s, size_t n);
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);
```

### C standard library algorithms

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

### Low-quality random number generation

```cpp
int rand();
void srand(unsigned int seed);
```

### Absolute values

```cpp
int abs(int j);
long int abs(long int j);
long long int abs(long long int j);
float abs(float j);
double abs(double j);
long double abs(long double j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t div(long int numer, long int denom);
lldiv_t div(long long int numer, long long int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
