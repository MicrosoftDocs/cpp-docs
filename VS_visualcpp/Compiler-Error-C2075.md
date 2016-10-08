---
title: "Compiler Error C2075"
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
ms.assetid: 8b1865d2-540b-4117-b982-e7a58a0b6cf7
caps.latest.revision: 7
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
# Compiler Error C2075
'identifier' : array initialization needs curly braces  
  
 There were no curly braces around the specified array initializer.  
  
 The following sample generates C2075:  
  
```  
// C2075.c  
int main() {  
   int i[] = 1, 2, 3 };   // C2075  
}  
```  
  
 Possible resolution:  
  
```  
// C2075b.c  
int main() {  
   int j[] = { 1, 2, 3 };  
}  
```