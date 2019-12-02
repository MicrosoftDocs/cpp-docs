---
title: "Linker Tools Warning LNK4098"
description: "Describes how incompatible libraries cause linker tools warning LNK4098, and how to use /NODEFAULTLIB to fix it."
ms.date: "12/02/2019"
f1_keywords: ["LNK4098"]
helpviewer_keywords: ["LNK4098"]
ms.assetid: 1f1b1408-1316-4e34-80f5-6a02f2db0ac1
---
# Linker Tools Warning LNK4098

> defaultlib '*library*' conflicts with use of other libs; use /NODEFAULTLIB:*library*

You're trying to link with incompatible libraries.

> [!NOTE]
> The run-time libraries now contain directives to prevent mixing different types. You will receive this warning if you try to use different types or debug and non-debug versions of the run-time library in the same program. For example, if you compiled one file to use one kind of run-time library and another file to use another kind (for example, debug versus retail) and tried to link them, you will get this warning. You should compile all source files to use the same run-time library. For more information, see the [/MD, /MT, /LD (Use Run-Time Library)](../../build/reference/md-mt-ld-use-run-time-library.md) compiler options.

You can use the linker's [/VERBOSE:LIB](../../build/reference/verbose-print-progress-messages.md) switch to find out which libraries the linker searches. For example, when your executable uses the multi-threaded, non-debug run-time libraries, the list reported should include LIBCMT.lib, and not LIBCMTD.lib, MSVCRT.lib, or MSVCRTD.lib. You can tell the linker to ignore the incorrect run-time libraries by using [/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md) for each library you want to ignore.

The table below shows which libraries should be ignored depending on which run-time library you want to use. On the command line, use one **/NODEFAULTLIB** option for each library to ignore. In the Visual Studio IDE, separate the libraries to ignore by semi-colons in the **Ignore Specific Default Libraries** property.

| To use this run-time library | Ignore these libraries |
|-----------------------------------|----------------------------|
| Multithreaded (libcmt.lib) | msvcrt.lib; libcmtd.lib; msvcrtd.lib |
| Multithreaded using DLL (msvcrt.lib) | libcmt.lib; libcmtd.lib; msvcrtd.lib |
| Debug Multithreaded (libcmtd.lib) | libcmt.lib; msvcrt.lib; msvcrtd.lib |
| Debug Multithreaded using DLL (msvcrtd.lib) | libcmt.lib; msvcrt.lib; libcmtd.lib |

For example, if you received this warning and you want to create an executable file that uses the non-debug, DLL version of the run-time libraries, you could use the following options with the linker:

```cmd
/NODEFAULTLIB:libcmt.lib /NODEFAULTLIB:libcmtd.lib /NODEFAULTLIB:msvcrtd.lib
```
