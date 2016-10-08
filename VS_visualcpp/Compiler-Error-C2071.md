---
title: "Compiler Error C2071"
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
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
caps.latest.revision: 10
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
# Compiler Error C2071
'identifier' : illegal storage class  
  
 `identifier` was declared with an invalid [storage class](../VS_visualcpp/C-Storage-Classes.md). This error can be caused when more than one storage class is specified for an identifier, or when the definition is incompatible with the storage class declaration.  
  
 To fix this issue, understand the intended storage class of the identifier—for example, `static` or `extern`—and correct the declaration to match.  
  
## Example  
 The following sample generates C2071.  
  
```  
// C2071.cpp  
// compile with: /c  
struct C {  
   extern int i;   // C2071  
};  
struct D {  
   int i;   // OK, no extern on an automatic  
};  
```  
  
## Example  
 The following sample generates C2071.  
  
```  
// C2071_b.cpp  
// compile with: /c  
typedef int x(int i) { return i; }   // C2071  
typedef int (x)(int);   // OK, no local definition in typedef  
```