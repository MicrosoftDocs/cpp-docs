---
title: "Compiler Warning (level 1) C4376"
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
ms.assetid: 5f202c74-9489-48fe-b36f-19cd882b1589
caps.latest.revision: 6
manager: ghogen
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
# Compiler Warning (level 1) C4376
access specifier 'old_specifier:' is no longer supported: please use 'new_specifier:' instead  
  
 For more information on specifying type and member accessibility in metadata, see [Type visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Type_visibility) and [Member visibility](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md#BKMK_Member_visibility) in [How to: Define and Consume Classes and Structs (C++/CLI)](../VS_visualcpp/How-to--Define-and-Consume-Classes-and-Structs--C---CLI-.md).  
  
## Example  
 The following sample generates C4376.  
  
```  
// C4376.cpp  
// compile with: /clr /W1 /c  
public ref class G {  
public public:   // C4376  
   void m2();  
};  
  
public ref class H {  
public:   // OK  
   void m2();  
};  
```