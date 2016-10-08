---
title: "Compiler Error C3244"
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
ms.assetid: dae6c49b-5212-4206-8f61-d4010c0b9969
caps.latest.revision: 6
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
# Compiler Error C3244
'method' : this method was introduced by 'interface' not by 'interface'  
  
 You tried to [explicitly override](../VS_visualcpp/Explicit-Overrides--C---.md) a member that does not exist in the specified interface but does exist in another base class.  
  
 The following sample generates C3244:  
  
```  
// C3244.cpp  
#pragma warning(disable:4199)  
  
__interface IX15A {  
   void f();  
};  
  
__interface IX15B {  
   void g();  
};  
  
class CX15 : public IX15A, public IX15B {  
public:        
   void IX15A::f();  
   void IX15B::g();  
};  
  
void CX15::IX15A::g()   // C3244 occurs here  
{  
}  
```