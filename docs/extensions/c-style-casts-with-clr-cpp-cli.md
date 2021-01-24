---
description: "Learn more about: C-Style Casts with /clr (C++/CLI)"
title: "C-Style Casts with -clr (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["C-style casts and /clr"]
ms.assetid: d2a4401a-156a-4da9-8d12-923743e26913
---
# C-Style Casts with /clr (C++/CLI)

The following topic applies only to the Common Language Runtime.

When used with CLR types, the compiler attempts to map C-style cast to one of the casts listed below, in the following order:

1. const_cast

2. safe_cast

3. safe_cast plus const_cast

4. static_cast

5. static_cast plus const_cast

If none of the casts listed above is valid, and if the type of the expression and the target type are CLR reference types, C-style cast maps to a runtime-check (castclass MSIL instruction). Otherwise, a C-style cast is considered invalid and the compiler issues an error.

## Remarks

A C-style cast is not recommended. When compiling with [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md), use [safe_cast](safe-cast-cpp-component-extensions.md).

The following sample shows a C-style cast that maps to a **`const_cast`**.

```cpp
// cstyle_casts_1.cpp
// compile with: /clr
using namespace System;

ref struct R {};
int main() {
   const R^ constrefR = gcnew R();
   R^ nonconstR = (R^)(constrefR);
}
```

The following sample shows a C-style cast that maps to a **safe_cast**.

```cpp
// cstyle_casts_2.cpp
// compile with: /clr
using namespace System;
int main() {
   Object ^ o = "hello";
   String ^ s = (String^)o;
}
```

The following sample shows a C-style cast that maps to a **safe_cast** plus **`const_cast`**.

```cpp
// cstyle_casts_3.cpp
// compile with: /clr
using namespace System;

ref struct R {};
ref struct R2 : public R {};

int main() {
   const R^ constR2 = gcnew R2();
   try {
   R2^ b2DR = (R2^)(constR2);
   }
   catch(InvalidCastException^ e) {
      System::Console::WriteLine("Invalid Exception");
   }
}
```

The following sample shows a C-style cast that maps to a **`static_cast`**.

```cpp
// cstyle_casts_4.cpp
// compile with: /clr
using namespace System;

struct N1 {};
struct N2 {
   operator N1() {
      return N1();
   }
};

int main() {
   N2 n2;
   N1 n1 ;
   n1 = (N1)n2;
}
```

The following sample shows a C-style cast that maps to a **`static_cast`** plus **`const_cast`**.

```cpp
// cstyle_casts_5.cpp
// compile with: /clr
using namespace System;
struct N1 {};

struct N2 {
   operator const N1*() {
      static const N1 n1;
      return &n1;
   }
};

int main() {
   N2 n2;
   N1* n1 = (N1*)(const N1*)n2;   // const_cast + static_cast
}
```

The following sample shows a C-style cast that maps to a run-time check.

```cpp
// cstyle_casts_6.cpp
// compile with: /clr
using namespace System;

ref class R1 {};
ref class R2 {};

int main() {
   R1^ r  = gcnew R1();
   try {
      R2^ rr = ( R2^)(r);
   }
   catch(System::InvalidCastException^ e) {
      Console::WriteLine("Caught expected exception");
   }
}
```

The following sample shows an invalid C-style cast, which causes the compiler to issue an error.

```cpp
// cstyle_casts_7.cpp
// compile with: /clr
using namespace System;
int main() {
   String^s = S"hello";
   int i = (int)s;   // C2440
}
```

## Requirements

Compiler option: `/clr`

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
