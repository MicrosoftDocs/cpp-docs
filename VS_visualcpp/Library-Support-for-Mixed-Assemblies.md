---
title: "Library Support for Mixed Assemblies"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1229595c-9e9d-414d-b018-b4e4c727576d
caps.latest.revision: 10
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Library Support for Mixed Assemblies
Visual C++ supports the use of the Standard C++ Library, the Common RunTime library (CRT), ATL, and MFC for applications compiled with [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md). This allows existing applications that use these libraries to use .NET Framework features as well.  
  
 This support introduces the following new DLL and import libraries:  
  
-   Msvcmrt[d].lib if you compile with /clr. Mixed assemblies links to this import library.  
  
-   Msvcm90[d].dll and Msvcurt[d].lib if you compile with /clr:pure. The DLL is a mixed assembly providing managed C Run Time (CRT) support, and is part of a managed assembly installed in the global assembly cache (GAC). Pure assemblies link to this import library and end up bound to Msvcm90.dll.  
  
 This support provides several related benefits:  
  
-   The CRT and Standard C++ Library are available to both mixed and pure code. The CRT and Standard C++ Library provided are not verifiable; ultimately, your calls are still routed to the same CRT and Standard C++ Library as you are using from native code.  
  
-   Correct unified exception handling in pure and mixed images.  
  
-   Static initialization of C++ variables in pure and mixed images.  
  
-   Support for per-AppDomain and per-process variables in managed code.  
  
-   Resolves the loader lock issues that applied to mixed DLLs in Visual C++ .NET and Visual C++ .NET 2003.  
  
 In addition, this support presents the following limitations:  
  
-   Only the CRT DLL model is supported (both for code compiled with /clr or /clr:pure).  
  
-   You cannot mix pure and mixed objects in a single image if those objects use the Visual C++ libraries (because all objects must be pure in a pure image). If you do this, you receive link-time errors.  
  
 You should update your common language runtime (CLR) to the current version as it is not guaranteed to work with earlier versions. Code built with these changes will not run on CLR version 1.x.  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../VS_visualcpp/Mixed--Native-and-Managed--Assemblies.md)