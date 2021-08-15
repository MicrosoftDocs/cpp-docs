---
description: "Learn more about: Double Thunking (C++)"
title: "Double Thunking (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["double thunks", "interop [C++], double thunking", "mixed assemblies [C++], double thunking", "/clr compiler option [C++], double thunking", "interoperability [C++], double thunking"]
ms.assetid: a85090b2-dc3c-498a-b40c-340db229dd6f
---
# Double Thunking (C++)

Double thunking refers to the loss of performance you can experience when a function call in a managed context calls a Visual C++ managed function and where program execution calls the function's native entry point in order to call the managed function. This topic discusses where double thunking occurs and how you can avoid it to improve performance.

## Remarks

By default, when compiling with **/clr**, the definition of a managed function causes the compiler to generate a managed entry point and a native entry point. This allows the managed function to be called from native and managed call sites. However, when a native entry point exists, it can be the entry point for all calls to the function. If a calling function is managed, the native entry point will then call the managed entry point. In effect, two calls are required to invoke the function (hence, double thunking). For example, virtual functions are always called through a native entry point.

One resolution is to tell the compiler not to generate a native entry point for a managed function, that the function will only be called from a managed context, by using the [__clrcall](../cpp/clrcall.md) calling convention.

Similarly, if you export ([dllexport, dllimport](../cpp/dllexport-dllimport.md)) a managed function, a native entry point is generated and any function that imports and calls that function will call through the native entry point. To avoid double thunking in this situation, do not use native export/import semantics; simply reference the metadata via `#using` (see [#using Directive](../preprocessor/hash-using-directive-cpp.md)).

The compiler has been updated to reduce unnecessary double thunking. For example, any function with a managed type in the signature (including return type) will implicitly be marked as `__clrcall`.

## Example: Double thunking

### Description

The following sample demonstrates double thunking. When compiled native (without **/clr**), the call to the virtual function in `main` generates one call to `T`'s copy constructor and one call to the destructor. Similar behavior is achieved when the virtual function is declared with **/clr** and `__clrcall`. However, when just compiled with **/clr**, the function call generates a call to the copy constructor but there is another call to the copy constructor due to the native-to-managed thunk.

### Code

```cpp
// double_thunking.cpp
// compile with: /clr
#include <stdio.h>
struct T {
   T() {
      puts(__FUNCSIG__);
   }

   T(const T&) {
      puts(__FUNCSIG__);
   }

   ~T() {
      puts(__FUNCSIG__);
   }

   T& operator=(const T&) {
      puts(__FUNCSIG__);
      return *this;
   }
};

struct S {
   virtual void /* __clrcall */ f(T t) {};
} s;

int main() {
   S* pS = &s;
   T t;

   printf("calling struct S\n");
   pS->f(t);
   printf("after calling struct S\n");
}
```

### Sample Output

```
__thiscall T::T(void)
calling struct S
__thiscall T::T(const struct T &)
__thiscall T::T(const struct T &)
__thiscall T::~T(void)
__thiscall T::~T(void)
after calling struct S
__thiscall T::~T(void)
```

## Example: Effect of double thunking

### Description

The previous sample demonstrated the existence of double thunking. This sample shows its effect. The **`for`** loop calls the virtual function and the program reports execution time. The slowest time is reported when the program is compiled with **/clr**. The fastest times are reported when compiling without **/clr** or if the virtual function is declared with `__clrcall`.

### Code

```cpp
// double_thunking_2.cpp
// compile with: /clr
#include <time.h>
#include <stdio.h>

#pragma unmanaged
struct T {
   T() {}
   T(const T&) {}
   ~T() {}
   T& operator=(const T&) { return *this; }
};

struct S {
   virtual void /* __clrcall */ f(T t) {};
} s;

int main() {
   S* pS = &s;
   T t;
   clock_t start, finish;
   double  duration;
   start = clock();

   for ( int i = 0 ; i < 1000000 ; i++ )
      pS->f(t);

   finish = clock();
   duration = (double)(finish - start) / (CLOCKS_PER_SEC);
   printf( "%2.1f seconds\n", duration );
   printf("after calling struct S\n");
}
```

### Sample Output

```
4.2 seconds
after calling struct S
```

## See also

[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)
