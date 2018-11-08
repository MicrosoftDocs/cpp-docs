---
title: "C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2017"
ms.date: "09/24/2018"
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
---
# C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2017

In previous versions of Visual Studio, binary compatibility between object files (OBJs), static libraries (LIBs), dynamic libraries (DLLs), and executables (EXEs) built by using different versions of the compiler toolset and runtime libraries was not guaranteed. This has changed in Visual Studio 2017. In Visual Studio 2015 and Visual Studio 2017, the C++ toolset major number is 14 (v140 for Visual Studio 2015 and v141 for Visual Studio 2017). This reflects the fact that both the runtime libraries and the applications compiled with either version of the compiler are--for the most part--binary compatible. This means, for example, that if you have a DLL in Visual Studio 2015, you don't have to recompile it in order to consume it from an application that is built with Visual Studio 2017.

There are two exceptions to this rule. Binary compatibility is not guaranteed in these cases:

1. When static libraries or object files are compiled with the `/GL` compiler switch.

2. When consuming libraries built with a toolset whose version is greater than the toolset used to compile and link the application. For example, a program that is compiled and linked with compiler version 19.12 can consume libraries that are compiled with 19.0 up through 19.12. Also, binary compatibility only exists between Visual Studio 2015 and Visual Studio 2017; linking 19.x programs with libraries produced by Visual Studio 2013 or earlier is not supported.

## See Also

[Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)
