---
title: "Compiler Warning (level 3) C4534"
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
ms.assetid: ec2adf3b-d7a1-4005-bb0c-5d219df78dc8
caps.latest.revision: 8
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
# Compiler Warning (level 3) C4534
'constructor' will not be a default constructor for class 'class' due to the default argument  
  
 An unmanaged class can have a constructor with parameters that have default values and the compiler will use this as the default constructor. A class marked with the `value` keyword will not use a constructor with default values for its parameters as a default constructor.  
  
 For more information, see [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md).  
  
 The following sample generates C4534:  
  
```  
// C4534.cpp  
// compile with: /W3 /clr /WX  
value class MyClass {  
public:  
   int ii;  
   MyClass(int i = 9) {   // C4534, will not be the default constructor  
      i++;  
   }  
};  
  
int main() {  
   MyClass ^ xx = gcnew MyClass;  
   xx->ii = 0;  
}  
```