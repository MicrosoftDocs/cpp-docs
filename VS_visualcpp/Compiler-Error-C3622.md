---
title: "Compiler Error C3622"
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
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
caps.latest.revision: 11
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
# Compiler Error C3622
'class' : a class declared as 'keyword' cannot be instantiated  
  
 An attempt was made to instantiate a class marked as [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md) (or [__abstract](../Topic/__abstract.md)). A class marked as abstract can be a base class, but it cannot be instantiated.  
  
## Example  
 The following sample generates C3622.  
  
```  
// C3622.cpp  
// compile with: /clr  
ref class a abstract {};  
  
int main() {  
   a aa;   // C3622  
}  
```  
  
## Example  
 The following sample generates C3622.  
  
```  
// C3622_b.cpp  
// compile with: /clr:oldSyntax  
__abstract class a {  
};  
int main() {  
   a aa;   // C3622  
}  
```