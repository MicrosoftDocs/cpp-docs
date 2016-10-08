---
title: "Windows Store Apps, the Windows Runtime, and the C Run-Time"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
caps.latest.revision: 9
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
# Windows Store Apps, the Windows Runtime, and the C Run-Time
Windows 8.x Store apps are programs that run in the Windows Runtime that executes on Windows 8.  The Windows Runtime is a trustworthy environment that controls the functions, variables, and resources that are available to a Windows 8.x Store app. However, by design, Windows Runtime restrictions prevent the use of most C Run-Time Library (CRT) features in Windows 8.x Store apps.  
  
 The Windows Runtime does not support the following CRT features:  
  
-   Most CRT functions that are related to unsupported functionality.  
  
     For example, a Windows 8.x Store app cannot create a process by using the `exec` and `spawn` families of routines.  
  
     When a CRT function is not supported in a Windows 8.x Store app, that fact is noted in its reference article.  
  
-   Most multibyte character and string functions.  
  
     However, both Unicode and ANSI text are supported.  
  
-   Console apps and command-line arguments.  
  
     However, traditional desktop apps still support the console and command-line arguments.  
  
-   Environment variables.  
  
-   The concept of a current working directory.  
  
-   Windows 8.x Store apps and DLLs that are statically linked to the CRT and built by using the [/MT](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md) or `/MTd` compiler options.  
  
     That is, an app that uses a multithread, static version of the CRT.  
  
-   An app that's built by using the [/MDd](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md) compiler option.  
  
     That is, a debug, multithread, and DLL-specific version of the CRT. Such an app is not supported on the Windows Store.  
  
 For a complete list of CRT functions that are not available in a Windows 8.x Store app and suggestions for alternative functions, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## See Also  
 [Compatibility](../VS_visualcpp/Compatibility.md)   
 [Windows Runtime Unsupported CRT Functions](../VS_visualcpp/Windows-Runtime-Unsupported-CRT-Functions.md)   
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)