---
title: "Compiler Error C2317"
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
ms.assetid: e44d129b-8d3e-4ce9-9d79-6791ee77f25e
caps.latest.revision: 9
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
# Compiler Error C2317
'try' block starting on line 'number' has no catch handlers  
  
 A `try` block must have at least one catch handler.  
  
 The following sample generates C2317:  
  
```  
// C2317.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   // C2317, no catch handler  
}  
```  
  
 Possible resolution:  
  
```  
// C2317b.cpp  
// compile with: /EHsc  
#include <eh.h>  
int main() {  
   try {  
      throw "throw an exception";  
   }  
   catch(char*) {}  
}  
```