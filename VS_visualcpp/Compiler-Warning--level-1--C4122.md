---
title: "Compiler Warning (level 1) C4122"
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
ms.assetid: 9a83eb0d-8708-42f7-988a-b0b6f2f646a0
caps.latest.revision: 6
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
# Compiler Warning (level 1) C4122
'function' : alloc_text applicable only to functions with C linkage  
  
 The **alloc_text** pragma applies only to functions declared with **extern c**. It cannot be used with external C++ functions.  
  
 The pragma is ignored.