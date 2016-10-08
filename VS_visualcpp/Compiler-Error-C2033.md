---
title: "Compiler Error C2033"
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
ms.assetid: fd5a1637-9db2-4c98-a7cc-b63b39737cd9
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
# Compiler Error C2033
'identifier' : bit field cannot have indirection  
  
 The bit field was declared as a pointer, which is not allowed.  
  
 The following sample generates C2033:  
  
```  
// C2033.cpp  
struct S {  
   int *b : 1;  // C2033  
};  
```  
  
 Possible resolution:  
  
```  
// C2033b.cpp  
// compile with: /c  
struct S {  
   int b : 1;  
};  
```