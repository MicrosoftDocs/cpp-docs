---
title: "Compiler Warning C4693"
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
ms.assetid: 72d8db01-5e6f-4794-8731-76107e8f064a
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
# Compiler Warning C4693
'class': a sealed abstract class cannot have any instance members 'Test'  
  
 If a type is marked [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md) and [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md), it can only have static members.  
  
## Example  
 The following sample generates C4693.  
  
```  
// C4693.cpp  
// compile with: /clr /c  
public ref class Public_Ref_Class sealed abstract {  
public:  
   void Test() {}   // C4693  
   static void Test2() {}   // OK  
};  
```