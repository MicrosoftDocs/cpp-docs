---
title: "Compiler Error C2090"
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
ms.assetid: e8176e55-382b-453d-aa27-6597f0274afd
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
# Compiler Error C2090
function returns array  
  
 A function cannot return an array. Return a pointer to an array instead.  
  
 The following sample generates C2090:  
  
```  
// C2090.cpp  
int func1(void)[] {}   // C2090  
```  
  
 Possible resolution:  
  
```  
// C2090b.cpp  
// compile with: /c  
int* func2(int * i) {  
   return i;  
}  
```