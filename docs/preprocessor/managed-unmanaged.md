---
description: "Learn more about: managed, unmanaged pragmas"
title: "managed, unmanaged pragmas"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.unmanaged", "managed_CPP", "unmanaged_CPP", "vc-pragma.managed"]
helpviewer_keywords: ["managed pragma", "pragmas, unmanaged", "pragmas, managed", "unmanaged pragma"]
ms.assetid: f072ddcc-e1ec-408a-8ce1-326ddb60e4a4
---
# managed, unmanaged pragmas

Enable function-level control to compile functions as managed or unmanaged.

## Syntax

> **#pragma managed**\
> **#pragma unmanaged**\
> **#pragma managed(** [ **push,** ] { **on** | **off** } **)**\
> **#pragma managed(pop)**

## Remarks

The [/clr](../build/reference/clr-common-language-runtime-compilation.md) compiler option provides module-level control for compiling functions either as managed or unmanaged.

An unmanaged function will be compiled for the native platform. Execution of that portion of the program will be passed to the native platform by the common language runtime.

Functions are compiled as managed by default when `/clr` is used.

When applying these pragmas:

- Add the pragma preceding a function, but not within a function body.

- Add the pragma after `#include` statements. Don't use these pragmas before `#include` statements.

The compiler ignores the **managed** and **unmanaged** pragmas if `/clr` isn't used in the compilation.

When a template function is instantiated, the pragma state when the template is defined determines if it's managed or unmanaged.

For more information, see [Initialization of Mixed Assemblies](../dotnet/initialization-of-mixed-assemblies.md).

## Example

```cpp
// pragma_directives_managed_unmanaged.cpp
// compile with: /clr
#include <stdio.h>

// func1 is managed
void func1() {
   System::Console::WriteLine("In managed function.");
}

// #pragma unmanaged
// push managed state on to stack and set unmanaged state
#pragma managed(push, off)

// func2 is unmanaged
void func2() {
   printf("In unmanaged function.\n");
}

// #pragma managed
#pragma managed(pop)

// main is managed
int main() {
   func1();
   func2();
}
```

```Output
In managed function.
In unmanaged function.
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
