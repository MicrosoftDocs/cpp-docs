---
title: "Using Precompiled Headers in a Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "precompiled headers"
ms.assetid: 95010260-a035-4327-9d61-222016ac146c
caps.latest.revision: 7
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
# Using Precompiled Headers in a Project
Previous sections present an overview of precompiled headers: /Yc and /Yu, the /Fp option, and the [hdrstop](../../preprocessor/hdrstop.md) pragma. This section describes a method for using the manual precompiled-header options in a project; it ends with an example makefile and the code that it manages.  
  
 For another approach to using the manual precompiled-header options in a project, study one of the makefiles located in the MFC\SRC directory that is created during the default setup of Visual C++. These makefiles take a similar approach to the one presented in this section but make greater use of Microsoft Program Maintenance Utility (NMAKE) macros, and offer greater control of the build process.  
  
 This section contains the following topics:  
  
-   [PCH Files in the Build Process](../../build/reference/pch-files-in-the-build-process.md)  
  
-   [Sample Makefile for PCH](../../build/reference/sample-makefile-for-pch.md)  
  
-   [Example Code for PCH](../../build/reference/example-code-for-pch.md)  
  
## See Also  
 [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md)