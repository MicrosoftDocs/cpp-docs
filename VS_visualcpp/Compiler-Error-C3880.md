---
title: "Compiler Error C3880"
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
ms.assetid: b0e05d1e-32d0-4034-9246-f37d23573ea9
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
# Compiler Error C3880
'var' : cannot be a literal data member  
  
 The type of a [literal](../VS_visualcpp/literal--C---Component-Extensions-.md) attribute must be, or compile-time convertible to, one of the following types:  
  
-   integral type  
  
-   string  
  
-   enum with an integral or underlying type  
  
 The following sample generates C3880:  
  
```  
// C3880.cpp  
// compile with: /clr /c  
ref struct Y1 {  
   literal System::Decimal staticConst1 = 10;   // C3880  
   literal int staticConst2 = 10;   // OK  
};  
```