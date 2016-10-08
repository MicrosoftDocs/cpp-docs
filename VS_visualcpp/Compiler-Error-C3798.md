---
title: "Compiler Error C3798"
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
ms.assetid: b2f8b1d8-8812-49b8-a346-28e48f02ba5c
caps.latest.revision: 4
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
# Compiler Error C3798
'specifier': property declaration cannot have override specifier (should be placed on property get/set methods instead)  
  
 A property was declared incorrectly. For more information, see  
  
-   [property](../VS_visualcpp/property---C---Component-Extensions-.md)  
  
-   [abstract](../VS_visualcpp/abstract---C---Component-Extensions-.md)  
  
-   [sealed](../VS_visualcpp/sealed---C---Component-Extensions-.md)  
  
## Example  
 The following sample generates C3798  
  
```  
// C3798.cpp  
// compile with: /clr /c  
ref struct A {  
   property int Prop_1 abstract;   // C3798  
   property int Prop_2 sealed;   // C3798  
  
   // OK  
   property int Prop_3 {  
      virtual int get() abstract;  
      virtual void set(int i) abstract;  
   }  
  
   property int Prop_4 {  
      virtual int get() sealed;  
      virtual void set(int i) sealed;  
   }  
};  
```