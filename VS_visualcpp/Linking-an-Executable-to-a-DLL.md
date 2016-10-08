---
title: "Linking an Executable to a DLL"
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
ms.assetid: 7592e276-dd6e-4a74-90c8-e1ee35598ea3
caps.latest.revision: 8
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
# Linking an Executable to a DLL
An executable file links to (or loads) a DLL in one of two ways:  
  
-   [Implicit linking](../VS_visualcpp/Linking-Implicitly.md)  
  
-   [Explicit linking](../VS_visualcpp/Linking-Explicitly.md)  
  
 Implicit linking is sometimes referred to as static load or load-time dynamic linking. Explicit linking is sometimes referred to as dynamic load or run-time dynamic linking.  
  
 With implicit linking, the executable using the DLL links to an import library (.lib file) provided by the maker of the DLL. The operating system loads the DLL when the executable using it is loaded. The client executable calls the DLL's exported functions just as if the functions were contained within the executable.  
  
 With explicit linking, the executable using the DLL must make function calls to explicitly load and unload the DLL and to access the DLL's exported functions. The client executable must call the exported functions through a function pointer.  
  
 An executable can use the same DLL with either linking method. Furthermore, these mechanisms are not mutually exclusive, as one executable can implicitly link to a DLL and another can attach to it explicitly.  
  
## What do you want to know more about?  
  
-   [Working with Import Libraries and Export Files](../VS_visualcpp/Working-with-Import-Libraries-and-Export-Files.md)  
  
-   [Determining which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
-   [The search path used by Windows to locate a DLL](../VS_visualcpp/Search-Path-Used-by-Windows-to-Locate-a-DLL.md)  
  
## See Also  
 [DLLs in Visual C++](../VS_visualcpp/DLLs-in-Visual-C--.md)