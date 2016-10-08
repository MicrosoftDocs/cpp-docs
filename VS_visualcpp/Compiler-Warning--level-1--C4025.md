---
title: "Compiler Warning (level 1) C4025"
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
ms.assetid: c4f6a651-0641-4446-973e-8290065e49ad
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
# Compiler Warning (level 1) C4025
'number' : based pointer passed to function with variable arguments: parameter number  
  
 Passing a based pointer to a function with variable arguments causes the pointer to be normalized, with unpredictable results. Do not pass based pointers to functions with variable arguments.