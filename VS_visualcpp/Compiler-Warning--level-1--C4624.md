---
title: "Compiler Warning (level 1) C4624"
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
ms.assetid: 14f61769-d92e-482b-9515-debd87b30a66
caps.latest.revision: 8
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
# Compiler Warning (level 1) C4624
'derived class' : destructor was implicitly defined as deleted because a base class destructor is inaccessible or deleted  
  
 A destructor was not accessible or deleted in a base class and was therefore not generated for a derived class. Any attempt to create an object of this type on the stack will cause a compiler error.  
  
 The following sample generates C4624 and shows how to fix it:  
  
```  
// C4624.cpp  
// compile with: /W1 /c  
class B {  
// Uncomment the following line to fix.  
// public:  
   ~B();  
};  
  
class D : public B {};   // C4624 B's destructor not public  
```