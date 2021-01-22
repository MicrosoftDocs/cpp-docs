---
description: "Learn more about managed and unmanaged pragma directives in Microsoft C++"
title: "managed and unmanaged pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.unmanaged", "managed_CPP", "unmanaged_CPP", "vc-pragma.managed"]
helpviewer_keywords: ["managed pragma", "pragma, unmanaged", "pragma, managed", "unmanaged pragma"]
no-loc: ["pragma"]
---
# `managed` and `unmanaged` pragma

Enable function-level control to compile functions as managed or unmanaged.

## Syntax

> **`#pragma managed`**\
> **`#pragma unmanaged`**\
> **`#pragma managed(`** [ **`push,`** ] { **`on`** | **`off`** } **`)`**\
> **`#pragma managed(pop)`**

## Remarks

The [`/clr`](../build/reference/clr-common-language-runtime-compilation.md) compiler option provides module-level control for compiling functions either as managed or unmanaged.

An unmanaged function is compiled for the native platform. Execution of that portion of the program will be passed to the native platform by the common language runtime.

Functions are compiled as managed by default when **`/clr`** is used.

When applying a **`managed`** or **`unmanaged`** pragma:

- Add the pragma preceding a function, but not within a function body.

- Add the pragma after `#include` statements. Don't use it before any `#include` statements.

The compiler ignores the **`managed`** and **`unmanaged`** pragma if **`/clr`** isn't used in the compilation.

When a template function is instantiated, the pragma state when the template is defined determines if it's managed or unmanaged.

For more information, see [Initialization of mixed assemblies](../dotnet/initialization-of-mixed-assemblies.md).

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

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
