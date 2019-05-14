---
title: "C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2019"
ms.date: "05/03/2019"
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
---
# C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2019

In Visual Studio 2013 and earlier, binary compatibility between object files (OBJs), static libraries (LIBs), dynamic libraries (DLLs), and executables (EXEs) built by using different versions of the compiler toolset and runtime libraries was not guaranteed. 

In Visual Studio 2015 and later, the C++ toolset major number is 14 (v140 for Visual Studio 2015, v141 for Visual Studio 2017, and v142 for Visual Studio 2019). This reflects the fact that both the runtime libraries and the applications compiled with either version of the compiler are binary compatible. This means that if you have third-party library that was built with Visual Studio 2015, you don't have to recompile it in order to consume it from an application that is built with Visual Studio 2017 or Visual Studio 2019.

The only exception to this rule is that static libraries or object files that are compiled with the `/GL` compiler switch are not binary compatible. 

When you mix binaries built with different supported versions of the MSVC toolset, the Visual C++ redistributable that your application runs on cannot be older than any of the toolset versions used to build your app or any libraries it consumes. 

## See also

[Visual C++ change history](../porting/visual-cpp-change-history-2003-2015.md)
