---
title: "Compiler Warning (level 1) C4215"
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
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
caps.latest.revision: 7
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
# Compiler Warning (level 1) C4215
nonstandard extension used : long float  
  
 The default Microsoft extensions (/Ze) treat **long float** as **double**. ANSI compatibility ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)) does not. Use **double** to maintain compatibility.  
  
 The following sample generates C4215:  
  
```  
// C4215.cpp  
// compile with: /W1 /LD  
long float a;   // C4215  
  
// use the line below to resolve the warning  
// double a;  
```