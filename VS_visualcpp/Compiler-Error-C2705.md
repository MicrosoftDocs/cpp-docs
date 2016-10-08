---
title: "Compiler Error C2705"
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
ms.assetid: 29249ea3-4ea7-4105-944b-bdb83e8d6852
caps.latest.revision: 9
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
# Compiler Error C2705
'label' : illegal jump into 'exception handler block' scope  
  
 Execution jumps to a label within a `try`/`catch`, `__try`/`__except`, `__try`/`__finally` block. For more information, see [Exception Handling](../VS_visualcpp/Exception-Handling-in-Visual-C--.md).  
  
 The following sample generates C2705:  
  
```  
// C2705.cpp  
int main() {  
goto trouble;  
   __try {  
      trouble: ;   // C2705  
   }  
   __finally {}  
  
   // try the following line instead  
   // trouble: ;  
}  
```