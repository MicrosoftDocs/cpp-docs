---
description: "Learn more about: Compiler Warning C4959"
title: "Compiler Warning C4959"
ms.date: "11/04/2016"
f1_keywords: ["C4959"]
helpviewer_keywords: ["C4959"]
ms.assetid: 3a128f3e-4d8a-4565-ba1a-5d32fdeb5982
---
# Compiler Warning C4959

> cannot define unmanaged struct '*type*' in /clr:safe because accessing its members yields unverifiable code

## Remarks

Accessing a member of an unmanaged type will produce an unverifiable (peverify.exe) image.

For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

The **/clr:safe** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following sample generates C4959:

```cpp
// C4959.cpp
// compile with: /clr:safe

// Uncomment the following line to resolve.
// #pragma warning( disable : 4959 )
struct X {
   int data;
};

int main() {
   X x;
   x.data = 10;   // C4959
}
```
