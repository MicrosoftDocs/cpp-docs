---
description: "Learn more about: Link Options"
title: "Link Options"
ms.date: "11/04/2016"
helpviewer_keywords: ["nothrownew.obj", "newmode.obj", "noenv.obj", "psetargv.obj", "legacy_stdio_float_rounding.obj", "loosefpmath.obj", "smallheap.obj", "fp10.obj", "nochkclr.obj", "chkstk.obj", "pcommode.obj", "pnoenv.obj", "link options [C++]", "invalidcontinue.obj", "pnothrownew.obj", "pwsetargv.obj", "pinvalidcontinue.obj", "wsetargv.obj", "binmode.obj", "setargv.obj", "noarg.obj", "pnewmode.obj", "commode.obj", "pthreadlocale.obj", "pbinmode.obj", "threadlocale.obj", "pnoarg.obj"]
ms.assetid: 05b5a77b-9dd1-494b-ae46-314598c770bb
---
# Link options

The CRT lib directory includes several small object files that enable specific CRT features without any code change. These object files are called "link options" since you only have to add them to the linker command line to use them.

CLR pure mode versions of these objects are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017. Use the regular versions for native and /clr code.

| Native and /clr | Pure mode | Description |
|---|---|---|
| `binmode.obj` | `pbinmode.obj` | Sets the default file-translation mode to binary. See [`_fmode`](./fmode.md). |
| `chkstk.obj` | n/a | Provides stack-checking and alloca support when not using the CRT. |
| `commode.obj` | `pcommode.obj` | Sets the global commit flag to "commit". See [`fopen`, `_wfopen`](./reference/fopen-wfopen.md) and [`fopen_s`, `_wfopen_s`](./reference/fopen-s-wfopen-s.md). |
| exe_initialize_mta.lib | n/a | Initializes the MTA apartment during EXE startup, which allows the use of COM objects in global smart pointers. Because this option leaks an MTA apartment reference during shutdown, don't use it for DLLs. Linking to this file is equivalent to including `combase.h` and defining `_EXE_INITIALIZE_MTA`. Using this link option adds [onecore.lib](/windows/win32/apiindex/windows-umbrella-libraries) to the default library list. If this effect is undesirable (such as using onecore_apiset.lib or other umbrella library), use [/NODEFAULTLIB](../build/reference/nodefaultlib-ignore-libraries.md) to override this behavior and provide an alternative. |
| `fp10.obj` | n/a | Changes the default precision control to 64 bits. See [Math and floating-point support](./floating-point-support.md). |
| `invalidcontinue.obj` | `pinvalidcontinue.obj` | Sets a default invalid parameter handler that does nothing, meaning that invalid parameters passed to CRT functions will just set errno and return an error result. |
| `legacy_stdio_float_rounding.obj` | n/a | The printing of floating-point values (for example, when using [`printf`](./reference/printf-printf-l-wprintf-wprintf-l.md)) with the Windows 10 19041 Universal C Runtime has been fixed. It now properly rounds exactly representable floating-point numbers, and respects the floating-point rounding requested by [`fesetround`](./reference/fegetround-fesetround2.md). This behavior update is available in Visual Studio 2019 version 16.2 and later. Legacy behavior is used in earlier versions of Visual Studio, or by providing this link option. |
| `loosefpmath.obj` | n/a | Ensures that floating point code tolerates denormal values. |
| `newmode.obj` | `pnewmode.obj` | Causes [`malloc`](./reference/malloc.md) to call the new handler on failure. See [`_set_new_mode`](./reference/set-new-mode.md), [`_set_new_handler`](./reference/set-new-handler.md), [`calloc`](./reference/calloc.md), and [`realloc`](./reference/realloc.md). |
| `noarg.obj` | `pnoarg.obj` | Disables all processing of argc and argv. |
| `nochkclr.obj` | n/a | Does nothing. Remove from your project. |
| `noenv.obj` | `pnoenv.obj` | Disables the creation of a cached environment for the CRT. |
| `nothrownew.obj` | `pnothrownew.obj` | Enables the non-throwing version of new in the CRT. See [new and delete Operators](../cpp/new-and-delete-operators.md). |
| `setargv.obj` | `psetargv.obj` | Enables command-line argument wildcard expansion. See [Expanding wildcard arguments](../c-language/expanding-wildcard-arguments.md). |
| `threadlocale.obj` | `pthreadlocale.obj` | Enables per-thread locale for all new threads by default. |
| `wsetargv.obj` | `pwsetargv.obj` | Enables command-line argument wildcard expansion. See [Expanding wildcard arguments](../c-language/expanding-wildcard-arguments.md). |

## See also

- [C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
