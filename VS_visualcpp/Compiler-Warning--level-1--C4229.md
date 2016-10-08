---
title: "Compiler Warning (level 1) C4229"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
caps.latest.revision: 6
manager: ghogen
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
# Compiler Warning (level 1) C4229
anachronism used : modifiers on data are ignored  
  
 Using a Microsoft modifier such as `__cdecl` on a data declaration is an outdated practice.  
  
## Example  
  
```  
// C4229.cpp  
// compile with: /W1 /LD  
int __cdecl counter;   // C4229 cdecl ignored  
```