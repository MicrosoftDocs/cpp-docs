---
title: "C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2017 | Microsoft Docs"
ms.custom: ""
ms.date: "09/21/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["binary compatibility, Visual C++"]
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# C++ Binary Compatibility between Visual Studio 2015 and Visual Studio 2017


In previous versions of Visual Studio, binary compatibility between object files (OBJs), static libraries (LIBs), dynamic libraries (DLLs), and executables (EXEs) built by using different versions of the compiler toolset and runtime libraries was not guaranteed. This has changed in Visual Studio 2017. In Visual Studio 2015 and Visual Studio 2017, the C++ toolset major number is 14 (v140 for Visual Studio 2015 and v141 for Visual Studio 2017). This reflects the fact that both the runtime libraries and the applications compiled with either version of the compiler are--for the most part--binary compatible. This means, for example, that you can create a DLL in Visual Studio 2017, and consume it from an application compiled with Visual Studio 2015, or use the Visual Studio 2017 redistributable libraries with your application built by using the 2015 toolset.  

There are two exceptions to this rule. Binary compatibility is not guaranteed in these cases:  

1) When static libraries or object files are compiled with the /GL compiler switch.  

2) When the application consumes redistributable 
libraries whose version number is less than the toolset that is used to compile the application. In other words, if you compile a program with platform toolset v141, any redistributable libraries that the application consumes must be compiled with v141 or greater.  

## See Also  

[Visual C++ change history](..\porting\visual-cpp-change-history-2003-2015.md)


