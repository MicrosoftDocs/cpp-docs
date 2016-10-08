---
title: "Fatal Error C1210"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e2208309-c284-425c-a7e8-48e96e66f35b
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Fatal Error C1210
/clr:pure and /clr:safe are not supported by the version of the runtime installed  
  
 C1210 occurs when you have a compiler for the current release, but a common language runtime from a previous release.  
  
 Some functionality of the compiler may not work on a previous version of the run time.  
  
 To resolve C1210 install the common language runtime version that is intended for use with your compiler.