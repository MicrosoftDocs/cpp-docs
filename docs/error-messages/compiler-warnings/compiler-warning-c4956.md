---
title: "Compiler Warning C4956"
description: "Learn more about: Compiler Warning C4956"
ms.date: 11/04/2016
f1_keywords: ["C4956"]
helpviewer_keywords: ["C4956"]
---
# Compiler Warning C4956

> '*type*' : this type is not verifiable

## Remarks

This warning is generated when [/clr:safe](../../build/reference/clr-common-language-runtime-compilation.md) is specified and your code contains a type that is not verifiable. The **/clr:safe** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

For more information, see [Pure and Verifiable Code (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

This warning is issued as an error and can be disabled with the [warning](../../preprocessor/warning.md) pragma or the [/wd](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following example generates C4956:

```cpp
// C4956.cpp
// compile with: /clr:safe
int* p;   // C4956
```
