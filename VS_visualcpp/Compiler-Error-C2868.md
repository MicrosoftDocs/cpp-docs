---
title: "Compiler Error C2868"
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
ms.assetid: 6ff5837b-e66d-44d1-9d17-80af35e08d08
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
# Compiler Error C2868
'identifier' : illegal syntax for using-declaration; expected qualified-name  
  
 A [using declaration](../VS_visualcpp/using-Declaration.md) requires a [qualified name](assetId:///3fefb16d-8120-4627-8b3f-3d90fbdcd1df).  
  
 The following sample generates C2868:  
  
```  
// C2868.cpp  
class X {  
public:  
   int i;  
};  
  
class Y : X {  
public:  
   using X::i;   // OK  
};  
  
int main() {  
   using X;   // C2868  
}  
```