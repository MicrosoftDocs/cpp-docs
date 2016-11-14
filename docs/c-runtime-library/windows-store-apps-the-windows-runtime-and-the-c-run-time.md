---
title: "Windows Store Apps, the Windows Runtime, and the C Run-Time | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Windows Store Apps, the Windows Runtime, and the C Run-Time
[!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps are programs that run in the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] that executes on [!INCLUDE[win8](../build/reference/includes/win8_md.md)].  The [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] is a trustworthy environment that controls the functions, variables, and resources that are available to a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app. However, by design, [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] restrictions prevent the use of most C Run-Time Library (CRT) features in [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps.  
  
 The [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] does not support the following CRT features:  
  
-   Most CRT functions that are related to unsupported functionality.  
  
     For example, a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app cannot create a process by using the `exec` and `spawn` families of routines.  
  
     When a CRT function is not supported in a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app, that fact is noted in its reference article.  
  
-   Most multibyte character and string functions.  
  
     However, both Unicode and ANSI text are supported.  
  
-   Console apps and command-line arguments.  
  
     However, traditional desktop apps still support the console and command-line arguments.  
  
-   Environment variables.  
  
-   The concept of a current working directory.  
  
-   [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps and DLLs that are statically linked to the CRT and built by using the [/MT](../build/reference/md-mt-ld-use-run-time-library.md) or `/MTd` compiler options.  
  
     That is, an app that uses a multithread, static version of the CRT.  
  
-   An app that's built by using the [/MDd](../build/reference/md-mt-ld-use-run-time-library.md) compiler option.  
  
     That is, a debug, multithread, and DLL-specific version of the CRT. Such an app is not supported on the [!INCLUDE[win8_appstore_long](../build/reference/includes/win8_appstore_long_md.md)].  
  
 For a complete list of CRT functions that are not available in a [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app and suggestions for alternative functions, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## See Also  
 [Compatibility](../c-runtime-library/compatibility.md)   
 [Windows Runtime Unsupported CRT Functions](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)