---
title: "Compiler Warning (level 1) C4946"
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
ms.assetid: b85cbef0-e053-4de6-9b14-7b0f82d40495
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
# Compiler Warning (level 1) C4946
reinterpret_cast used between related classes: 'class1' and 'class2'  
  
 Do not use [reinterpret_cast](../VS_visualcpp/reinterpret_cast-Operator.md) to cast between related types. Use [static_cast](../VS_visualcpp/static_cast-Operator.md) instead, or for polymorphic types, use [dynamic_cast](../VS_visualcpp/dynamic_cast-Operator.md).  
  
 By default, this warning is off. For more information, see [Compiler Warnings That Are Off by Default](../VS_visualcpp/Compiler-Warnings-That-Are-Off-by-Default.md).  
  
 The following code example generates C4946:  
  
```  
// C4946.cpp  
// compile with: /W1  
#pragma warning (default : 4946)  
class a {  
public:  
   a() : m(0) {}  
   int m;  
};  
  
class b : public virtual a {  
};  
  
class b2 : public virtual a {  
};  
  
class c : public b, public b2 {  
};  
  
int main() {  
   c* pC = new c;  
   a* pA = reinterpret_cast<a*>(pC);   // C4946  
   // try the following line instead  
   // a* pA = static_cast<a*>(pC);  
}  
```