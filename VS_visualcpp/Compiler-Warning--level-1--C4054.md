---
title: "Compiler Warning (level 1) C4054"
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
ms.assetid: bdd7f6d5-f6f2-44a7-a013-39f309de7a29
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
# Compiler Warning (level 1) C4054
'conversion' : from function pointer 'type1' to data pointer 'type2'  
  
 A function pointer is cast (possibly incorrectly) to a data pointer. This is a level 1 warning under /Za and a level 4 warning under /Ze.  
  
 The following sample generates C4054:  
  
```  
// C4054.c  
// compile with: /W1 /Za /c  
int (*pfunc)();  
int* f() {  
   return (int*)pfunc;   // C4054  
}  
```  
  
 Under /Ze, this is a level 4 warning.  
  
```  
// C4054b.c  
// compile with: /W4 /c  
int (*pfunc)();  
int* f() {  
   return (int*)pfunc;   // C4054  
}  
```