---
title: "Using Explicit PInvoke in C++ (DllImport Attribute)"
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
ms.assetid: 18e5218c-6916-48a1-a127-f66e22ef15fc
caps.latest.revision: 11
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
# Using Explicit PInvoke in C++ (DllImport Attribute)
The .NET Framework provides explicit Platform Invoke (or PInvoke) features with the `Dllimport` attribute to allow managed applications to call unmanaged functions packaged inside DLLs. Explicit PInvoke is required for situations where unmanaged APIs are packaged as DLLs and the source code is not available. Calling Win32 functions, for example, requires PInvoke. Otherwise, use implicit P{Invoke; see [Using C++ Interop (Implicit PInvoke)](../VS_visualcpp/Using-C---Interop--Implicit-PInvoke-.md) for more information.  
  
 PInvoke works by using <xref:System.Runtime.InteropServices.DllImportAttribute?qualifyHint=False>. This attribute, which takes the name of the DLL as its first argument, is placed before a function declaration for each DLL entry point that will be used. The signature of the function must match the name of a function exported by the DLL (but some type conversion can be performed implicitly by defining the `DllImport` declarations in terms of managed types.)  
  
 The result is a managed entry point for each native DLL function that contains the necessary transition code (or thunk) and simple data conversions. Managed functions can then call into the DLL through these entry points. The code inserted into a module as the result of PInvoke is entirely managed and explicit PInvoke is supported for **/clr**, **/clr:pure**, and **/clr:safe** compilations. For more information, see [Pure and Verifiable Code (C++/CLI)](../VS_visualcpp/Pure-and-Verifiable-Code--C---CLI-.md).  
  
## In This Section  
  
-   [Calling Native Functions from Managed Code](../VS_visualcpp/Calling-Native-Functions-from-Managed-Code.md)  
  
-   [How to: Call Native DLLs from Managed Code Using PInvoke](../VS_visualcpp/How-to--Call-Native-DLLs-from-Managed-Code-Using-PInvoke.md)  
  
-   [How to: Marshal Strings Using PInvoke](../VS_visualcpp/How-to--Marshal-Strings-Using-PInvoke.md)  
  
-   [How to: Marshal Structures Using PInvoke](../VS_visualcpp/How-to--Marshal-Structures-Using-PInvoke.md)  
  
-   [How to: Marshal Arrays Using PInvoke](../VS_visualcpp/How-to--Marshal-Arrays-Using-PInvoke.md)  
  
-   [How to: Marshal Function Pointers Using PInvoke](../VS_visualcpp/How-to--Marshal-Function-Pointers-Using-PInvoke.md)  
  
-   [How to: Marshal Embedded Pointers Using PInvoke](../VS_visualcpp/How-to--Marshal-Embedded-Pointers-Using-PInvoke.md)  
  
## See Also  
 [Calling Native Functions from Managed Code](../VS_visualcpp/Calling-Native-Functions-from-Managed-Code.md)