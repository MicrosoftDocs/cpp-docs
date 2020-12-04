---
description: "Learn more about: Compiler Warning C4958"
title: "Compiler Warning C4958"
ms.date: "11/04/2016"
f1_keywords: ["C4958"]
helpviewer_keywords: ["C4958"]
ms.assetid: e79b9e9c-d572-4a3a-a3b6-60962b70864a
---
# Compiler Warning C4958

> '*operation*' : pointer arithmetic is not verifiable

## Remarks

Using pointer arithmetic will produce an unverifiable image.

For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

The **/clr:safe** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following sample generates C4958:

```cpp
// C4958.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4958 )
using namespace System;

int main( ) {
   Int32 arr[] = new Int32[10];
   Int32* p = &arr[0];
   p++;   // C4958
}
```

The compiler implements array operations with pointer arithmetic. Therefore, native arrays are not verifiable; use a CLR array instead. For more information, see [array](../../extensions/arrays-cpp-component-extensions.md).

The following sample generates C4958:

```cpp
// C4958b.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4958 )

int main() {
   int array[5];
   array[4] = 0;   // C4958
}
```
