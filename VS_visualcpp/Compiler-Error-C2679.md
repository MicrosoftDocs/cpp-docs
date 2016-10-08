---
title: "Compiler Error C2679"
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
ms.assetid: 1a5f9d00-9190-4aa6-bc72-949f68ec136f
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
# Compiler Error C2679
binary 'operator' : no operator found which takes a right-hand operand of type 'type' (or there is no acceptable conversion)  
  
 To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.  
  
 The following sample generates C2679:  
  
```  
// C2679.cpp  
class C {  
public:  
   C();   // no constructor with an int argument  
} c;  
  
class D {  
public:  
   D(int) {}  
   D(){}  
} d;  
  
int main() {  
   c = 10;   // C2679  
   d = 10;   // OK  
}  
```