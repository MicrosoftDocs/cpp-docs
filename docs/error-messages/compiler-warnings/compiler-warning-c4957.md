---
description: "Learn more about: Compiler Warning C4957"
title: "Compiler Warning C4957"
ms.date: "11/04/2016"
f1_keywords: ["C4957"]
helpviewer_keywords: ["C4957"]
ms.assetid: a18c52d4-23e2-44f1-b4b5-f7fa5a7f3987
---
# Compiler Warning C4957

> '*cast*' : explicit cast from '*cast_from*' to '*cast_to*' is not verifiable

## Remarks

A cast will result in an unverifiable image.

Some casts are safe (for example, a **`static_cast`** that triggers user-defined conversions and a **`const_cast`**). A [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) is guaranteed to produce verifiable code.

For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

The **/clr:safe** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following sample generates C4957:

```cpp
// C4957.cpp
// compile with: /clr:safe
// #pragma warning( disable : 4957 )
using namespace System;
int main() {
   Object ^ o = "Hello, World!";
   String ^ s = static_cast<String^>(o);   // C4957
   String ^ s2 = safe_cast<String^>(o);   // OK
}
```
