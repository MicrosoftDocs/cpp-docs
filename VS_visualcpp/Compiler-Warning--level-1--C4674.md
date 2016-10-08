---
title: "Compiler Warning (level 1) C4674"
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
ms.assetid: 638dae0b-b82c-4865-9599-72630827ca09
caps.latest.revision: 9
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
# Compiler Warning (level 1) C4674
'method' should be declared 'static' and have exactly one parameter  
  
 The signature of a conversion operator was not correct. The method is not considered a user-defined conversion.  
  
 When using the new syntax (**/clr**), see [User-Defined Operators (C++/CLI)](../VS_visualcpp/User-Defined-Operators--C---CLI-.md) and [User-Defined Conversions (C++/CLI)](../VS_visualcpp/User-Defined-Conversions--C---CLI-.md) for information on defining operators.  
  
## Example  
 The following sample generates C4674.  
  
```  
// C4674.cpp  
// compile with: /clr /WX /W1 /LD  
ref class G {  
   int op_Implicit(int i) {   // C4674  
      return 0;  
   }  
};  
```  
  
## Example  
 The following sample generates C4674.  
  
```  
// C4674_b.cpp  
// compile with: /clr:oldSyntax /W1 /LD  
__gc class G {  
   int op_Implicit(int i) {   // C4674  
   // try the following line instead  
   // static int op_Implicit(int i) {  
      return 0;  
   }  
};  
```