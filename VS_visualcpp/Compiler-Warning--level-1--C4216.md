---
title: "Compiler Warning (level 1) C4216"
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
ms.assetid: 211079dc-59d0-42a7-801c-2ddab21d7232
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
# Compiler Warning (level 1) C4216
nonstandard extension used : float long  
  
 The default Microsoft extensions (/Ze) treat **float long** as **double**. ANSI compatibility ([/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)) does not. Use **double** to maintain compatibility. The following sample generates C4216:  
  
```  
// C4216.cpp  
// compile with: /W1  
float long a;   // C4216  
  
// use the line below to resolve the warning  
// double a;  
  
int main() {  
}  
```