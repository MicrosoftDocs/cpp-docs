---
title: "Windows Runtime Unsupported CRT Functions | Microsoft Docs"
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
helpviewer_keywords: 
  - "unsupported CRT functions, Windows Runtime"
  - "Windows Runtime, unsupported CRT functions"
ms.assetid: bb8386d6-0ef8-460c-88d8-addff009b6f1
caps.latest.revision: 14
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
# Windows Runtime Unsupported CRT Functions
Many C run-time (CRT) APIs can’t be used in [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps that execute in the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]. These apps are built by using the /ZW compiler flag. For a list of unsupported CRT functions, see [CRT functions not supported by /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
 All CRT APIs are described in the [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) section of the documentation.  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)   
 [Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)