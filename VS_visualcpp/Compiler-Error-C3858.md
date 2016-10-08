---
title: "Compiler Error C3858"
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
ms.assetid: 46e178d5-a55f-4ac6-a9dc-561fbcba5c1f
caps.latest.revision: 6
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
# Compiler Error C3858
'type': cannot be redeclared in current scope  
  
 The type cannot be declared twice in the same scope.  
  
 The following sample generates C3858:  
  
```  
// C3858.cpp  
// compile with: /LD  
template <class T>  
struct Outer  
{  
   struct Inner;  
};  
  
template <class T>  
struct Outer<T>::Inner;   // C3858  
// try the following line instead  
// struct Outer<T>::Inner{};  
```