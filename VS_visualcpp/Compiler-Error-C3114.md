---
title: "Compiler Error C3114"
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
ms.assetid: b5d2df4f-87d0-4292-9981-25c6a6013c05
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
# Compiler Error C3114
'argument': not a valid named attribute argument  
  
 In order for an attribute class data member to be a valid named argument, it must not be marked `static`, `const`, or `literal`. If a property, the property must not be `static` and must have get and set accessors.  
  
 For more information, see [property](../VS_visualcpp/property---C---Component-Extensions-.md) and [User-Defined Attributes](../VS_visualcpp/User-Defined-Attributes---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3114.  
  
```  
// C3114.cpp  
// compile with: /clr /c  
public ref class A : System::Attribute {  
public:  
   static property int StaticProp {  
      int get();  
   }  
  
   property int Prop2 {  
      int get();  
      void set(int i);  
   }  
};  
  
[A(StaticProp=123)]   // C3114  
public ref class R {};  
  
[A(Prop2=123)]   // OK  
public ref class S {};  
```