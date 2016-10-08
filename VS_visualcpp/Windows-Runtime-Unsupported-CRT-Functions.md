---
title: "Windows Runtime Unsupported CRT Functions"
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
ms.assetid: bb8386d6-0ef8-460c-88d8-addff009b6f1
caps.latest.revision: 14
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
# Windows Runtime Unsupported CRT Functions
Many C run-time (CRT) APIs can’t be used in Windows 8.x Store apps that execute in the Windows Runtime. These apps are built by using the /ZW compiler flag. For a list of unsupported CRT functions, see [CRT functions not supported by /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
 All CRT APIs are described in the [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md) section of the documentation.  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)   
 [Alphabetical Function Reference](../VS_visualcpp/CRT-Alphabetical-Function-Reference.md)