---
title: "Compiler Error C2053"
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
ms.assetid: 13324c85-13a8-4996-bd42-a31bfe7ff80f
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
# Compiler Error C2053
'identifier' : wide string mismatch  
  
 The wide string is assigned to an incompatible type.  
  
 The following sample generates C2053:  
  
```  
// C2053.c  
int main() {  
   char array[] = L"Rika";   // C2053  
}  
```