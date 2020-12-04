---
description: "Learn more about: Compiler Error C2513"
title: "Compiler Error C2513"
ms.date: "11/04/2016"
f1_keywords: ["C2513"]
helpviewer_keywords: ["C2513"]
ms.assetid: ab5b21d3-61e2-4df7-8eea-6f14d6ba8620
---
# Compiler Error C2513

'type' : no variable declared before '='

The type specifier appears in declaration with no variable identifier.

The following sample generates C2513:

```cpp
// C2513.cpp
int main() {
   int = 9;   // C2513
   int i = 9;   // OK
}
```

This error can also be generated as a result of a compiler conformance work done for Visual Studio .NET 2003: initialization of a typedef no longer allowed. The initialization of a typedef is not allowed by the standard and now generates a compiler error.

```cpp
// C2513b.cpp
// compile with: /c
typedef struct S {
   int m_i;
} S = { 1 };   // C2513
// try the following line instead
// } S;
```

An alternative would be to delete **`typedef`** to define a variable with aggregate initializer list, but this is not recommended because it will create a variable with the same name as the type and hide the type name.
