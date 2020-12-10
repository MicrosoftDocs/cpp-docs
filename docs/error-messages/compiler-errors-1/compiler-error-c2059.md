---
description: "Learn more about: Compiler Error C2059"
title: "Compiler Error C2059"
ms.date: "03/26/2019"
f1_keywords: ["C2059"]
helpviewer_keywords: ["C2059"]
ms.assetid: 2be4eb39-3f37-4b32-8e8d-75835e07c78a
---
# Compiler Error C2059

syntax error : 'token'

The token caused a syntax error.

The following example generates an error message for the line that declares `j`.

```cpp
// C2059e.cpp
// compile with: /c
// C2143 expected
// Error caused by the incorrect use of '*'.
   int j*; // C2059
```

To determine the cause of the error, examine not only the line that's listed in the error message, but also the lines above it. If examining the lines yields no clue about the problem, try commenting out the line that's listed in the error message and perhaps several lines above it.

If the error message occurs on a symbol that immediately follows a **`typedef`** variable, make sure that the variable is defined in the source code.

C2059 is raised when a preprocessor symbol name is re-used as an identifier. In the following example, the compiler sees `DIGITS.ONE` as the number 1, which is not valid as an enum element name:

```cpp
#define ONE 1

enum class DIGITS {
    ZERO,
    ONE // error C2059
};
```

You may get C2059 if a symbol evaluates to nothing, as can occur when **/D**_symbol_**=** is used to compile.

```cpp
// C2059a.cpp
// compile with: /DTEST=
#include <stdio.h>

int main() {
   #ifdef TEST
      printf_s("\nTEST defined %d", TEST);   // C2059
   #else
      printf_s("\nTEST not defined");
   #endif
}
```

Another case in which C2059 can occur is when you compile an application that specifies a structure in the default arguments for a function. The default value for an argument must be an expression. An initializer list—for example, one that used to initialize a structure—is not an expression.  To resolve this problem, define a constructor to perform the required initialization.

The following example generates C2059:

```cpp
// C2059b.cpp
// compile with: /c
struct ag_type {
   int a;
   float b;
   // Uncomment the following line to resolve.
   // ag_type(int aa, float bb) : a(aa), b(bb) {}
};

void func(ag_type arg = {5, 7.0});   // C2059
void func(ag_type arg = ag_type(5, 7.0));   // OK
```

C2059 can occur for an ill-formed cast.

The following sample generates C2059:

```cpp
// C2059c.cpp
// compile with: /clr
using namespace System;
ref class From {};
ref class To : public From {};

int main() {
   From^ refbase = gcnew To();
   To^ refTo = safe_cast<To^>(From^);   // C2059
   To^ refTo2 = safe_cast<To^>(refbase);   // OK
}
```

C2059 can also occur if you attempt to create a namespace name that contains a period.

The following sample generates C2059:

```cpp
// C2059d.cpp
// compile with: /c
namespace A.B {}   // C2059

// OK
namespace A  {
   namespace B {}
}
```

C2059 can occur when an operator that can qualify a name (`::`, `->`, and `.`) must be followed by the keyword **`template`**, as shown in this example:

```cpp
template <typename T> struct Allocator {
    template <typename U> struct Rebind {
        typedef Allocator<U> Other;
    };
};

template <typename X, typename AY> struct Container {
    typedef typename AY::Rebind<X>::Other AX; // error C2059
};
```

By default, C++ assumes that `AY::Rebind` isn't a template; therefore, the following `<` is interpreted as a less-than sign.  You must tell the compiler explicitly that `Rebind` is a template so that it can correctly parse the angle bracket. To correct this error, use the **`template`** keyword on the dependent type's name, as shown here:

```cpp
template <typename T> struct Allocator {
    template <typename U> struct Rebind {
        typedef Allocator<U> Other;
    };
};

template <typename X, typename AY> struct Container {
    typedef typename AY::template Rebind<X>::Other AX; // correct
};
```
