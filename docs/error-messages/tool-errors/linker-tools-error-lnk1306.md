---
description: "Learn more about: Linker Tools Error LNK1306"
title: "Linker Tools Error LNK1306"
ms.date: "11/04/2016"
f1_keywords: ["LNK1306"]
helpviewer_keywords: ["LNK1306"]
ms.assetid: fad1df6a-0bd9-412f-b0d1-7c9bc749c584
---
# Linker Tools Error LNK1306

> DLL entry point function cannot be managed; compile to native

`DllMain` cannot be compiled to MSIL; it must be compiled to native.

To resolve this issue,

- Compile the file that contains the entry point without **/clr**.

- Put the entry point in a `#pragma unmanaged` section.

For more information, see:

- [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)

- [managed, unmanaged](../../preprocessor/managed-unmanaged.md)

- [Initialization of Mixed Assemblies](../../dotnet/initialization-of-mixed-assemblies.md)

- [DLLs and Visual C++ run-time library behavior](../../build/run-time-library-behavior.md)

## Example

The following sample generates LNK1306.

```cpp
// LNK1306.cpp
// compile with: /clr /link /dll /entry:NewDllMain
// LNK1306 error expected
#include <windows.h>
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {
   return 1;
}
```

To fix this issue, do not use the /clr option to compile this file, or use a `#pragma` directive to put the entry point definition in an unmanaged section as shown in this example:

```cpp
// LNK1306fix.cpp
// compile with: /clr /link /dll /entry:NewDllMain
#include <windows.h>
#pragma managed(push, off)
int __stdcall NewDllMain( HINSTANCE h, ULONG ulReason, PVOID pvReserved ) {
   return 1;
}
#pragma managed(pop)
```
