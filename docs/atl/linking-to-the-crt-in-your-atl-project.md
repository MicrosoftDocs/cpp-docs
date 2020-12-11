---
description: "Learn more about: Linking to the CRT in Your ATL Project"
title: "Linking to the CRT in Your ATL Project"
ms.date: "11/04/2016"
helpviewer_keywords: ["CRT, linking with ATL", "WinMainCRTStartup method", "DllMainCRTStartup method", "wWinMainCRTStartup method", "ATL, C Run-Time library (CRT)"]
ms.assetid: 650957ae-362c-4ecf-8b03-5d49138e8b5b
---
# Linking to the CRT in Your ATL Project

The [C Run-Time Libraries](../c-runtime-library/crt-library-features.md) (CRT) provide many useful functions that can make programming much easier during ATL development. All ATL projects link to the CRT library. You can see the advantages and disadvantages of linking method in [Benefits and Tradeoffs of the Method Used to Link to the CRT](../atl/benefits-and-tradeoffs-of-the-method-used-to-link-to-the-crt.md).

## Effects of Linking to the CRT on Your Program Image

If you statically link to the CRT, code from the CRT is placed in your executable image and you do not need to have the CRT DLL present on a system to run your image. If you dynamically link to the CRT, references to the code in the CRT DLL are placed in your image, but not the code itself. In order for your image to run on a given system, the CRT DLL must be present on that system. Even when you dynamically link to the CRT, you may find that some code can be statically linked (for example, `DllMainCRTStartup`).

When you link your image, you either explicitly or implicitly specify an entry point that the operating system will call into after loading the image. For a DLL, the default entry point is `DllMainCRTStartup`. For an EXE, it is `WinMainCRTStartup`. You can override the default with the /ENTRY linker option. The CRT provides an implementation for `DllMainCRTStartup`, `WinMainCRTStartup`, and `wWinMainCRTStartup` (the Unicode entry point for an EXE). These CRT-provided entry points call constructors on global objects and initialize other data structures that are used by some CRT functions. This startup code adds about 25K to your image if it is linked statically. If it is linked dynamically, most of the code is in the DLL, so your image size stays small.

For more information, see the linker topic [/ENTRY (Entry-Point Symbol)](../build/reference/entry-entry-point-symbol.md).

## Optimization Options

Using the linker option /OPT:NOWIN98 can further reduce a default ATL control by 10K, at the expense of increased loading time on Windows 98 systems. For more information on linking options, see [/OPT (Optimizations)](../build/reference/opt-optimizations.md).

## See also

[Programming with ATL and C Run-Time Code](../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[DLLs and Visual C++ run-time library behavior](../build/run-time-library-behavior.md)
