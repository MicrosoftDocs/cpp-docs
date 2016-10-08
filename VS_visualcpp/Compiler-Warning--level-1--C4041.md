---
title: "Compiler Warning (level 1) C4041"
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
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
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
# Compiler Warning (level 1) C4041
compiler limit : terminating browser output  
  
 Browser information exceeded the compiler limit.  
  
 This warning can be caused by compiling with [/FR](../VS_visualcpp/-FR---Fr--Create-.Sbr-File-.md) (browser information including local variables).  
  
### To fix by using the following possible solutions  
  
1.  Compile with /Fr (browser information without local variables).  
  
2.  Disable browser output (compile without /FR or /Fr).