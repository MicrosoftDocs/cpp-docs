---
title: "Windows Store Apps, the Windows Runtime, and the C Run-Time | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 356d6d8d-76ee-4181-9ad0-6f24b2fede38
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Windows Store Apps, the Windows Runtime, and the C Run-Time
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Windows Store Apps, the Windows Runtime, and the C Run-Time](https://docs.microsoft.com/cpp/c-runtime-library/windows-store-apps-the-windows-runtime-and-the-c-run-time).  
  
INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] apps are programs that run in the [!INCLUDE[wrt](../includes/wrt-md.md)] that executes on [!INCLUDE[win8](../includes/win8-md.md)].  The [!INCLUDE[wrt](../includes/wrt-md.md)] is a trustworthy environment that controls the functions, variables, and resources that are available to a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app. However, by design, [!INCLUDE[wrt](../includes/wrt-md.md)] restrictions prevent the use of most C Run-Time Library (CRT) features in [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] apps.  
  
 The [!INCLUDE[wrt](../includes/wrt-md.md)] does not support the following CRT features:  
  
-   Most CRT functions that are related to unsupported functionality.  
  
     For example, a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app cannot create a process by using the `exec` and `spawn` families of routines.  
  
     When a CRT function is not supported in a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app, that fact is noted in its reference article.  
  
-   Most multibyte character and string functions.  
  
     However, both Unicode and ANSI text are supported.  
  
-   Console apps and command-line arguments.  
  
     However, traditional desktop apps still support the console and command-line arguments.  
  
-   Environment variables.  
  
-   The concept of a current working directory.  
  
-   [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] apps and DLLs that are statically linked to the CRT and built by using the [/MT](../build/reference/md-mt-ld-use-run-time-library.md) or `/MTd` compiler options.  
  
     That is, an app that uses a multithread, static version of the CRT.  
  
-   An app that's built by using the [/MDd](../build/reference/md-mt-ld-use-run-time-library.md) compiler option.  
  
     That is, a debug, multithread, and DLL-specific version of the CRT. Such an app is not supported on the [!INCLUDE[win8_appstore_long](../includes/win8-appstore-long-md.md)].  
  
 For a complete list of CRT functions that are not available in a [!INCLUDE[win8_appname_long](../includes/win8-appname-long-md.md)] app and suggestions for alternative functions, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## See Also  
 [Compatibility](../c-runtime-library/compatibility.md)   
 [Windows Runtime Unsupported CRT Functions](../c-runtime-library/windows-runtime-unsupported-crt-functions.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)





