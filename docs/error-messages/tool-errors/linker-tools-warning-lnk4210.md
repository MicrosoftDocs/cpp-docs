---
description: "Learn more about: Linker Tools Warning LNK4210"
title: "Linker Tools Warning LNK4210"
ms.date: "11/04/2016"
f1_keywords: ["LNK4210"]
helpviewer_keywords: ["LNK4210"]
ms.assetid: db48cff8-a2be-4a77-8d03-552b42c228fa
---
# Linker Tools Warning LNK4210

> section *section* exists; there may be unhandled static initializers or terminators

## Remarks

Some code has introduced static initializers or terminators, but the VCRuntime library startup code or its equivalent (which needs to run the static initializers or terminators) isn't run when the application starts. Here are some examples of code that requires static initializers or terminators:

- Global class variable with a constructor, destructor, or virtual function table.

- Global variable initialized with a non-compile-time constant.

To fix this problem, try one of the following:

- Remove all code with static initializers.

- Do not use [/NOENTRY](../../build/reference/noentry-no-entry-point.md). After you remove /NOENTRY, you may also have to remove [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) from your linker command line.

- If your build uses /MT, add libcmt.lib, libvcruntime.lib, and libucrt.lib to your linker command line. If your build uses /MTd, add libcmtd.lib, vcruntimed.lib, and libucrtd.lib.

- When moving from /clr:pure compilation to /clr, remove the [/ENTRY](../../build/reference/entry-entry-point-symbol.md) option from the linker-line. This enables CRT initialization and allows static initializers to be executed at application startup. The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

The [/GS](../../build/reference/gs-buffer-security-check.md) compiler option requires initialization by the `__security_init_cookie` function. This initialization is provided by default in the VCRuntime library startup code that runs in `_DllMainCRTStartup`.

- If your project is built using /ENTRY, and if /ENTRY is passed a function other than `_DllMainCRTStartup`, the function must call `_CRT_INIT` to initialize the CRT. This call alone is not sufficient if your DLL uses /GS, requires static initializers, or is called in the context of MFC or ATL code. See [DLLs and Visual C++ run-time library behavior](../../build/run-time-library-behavior.md) for more information.

## See also

- [Setting Linker Options](../../build/reference/linking.md)
