---
title: "Compiler Error C3904"
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
ms.assetid: 08297605-e4f2-4c6c-b637-011f1fd40631
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
# Compiler Error C3904
'property_accessor': must specify number parameter(s)  
  
 Check the number of parameters in your `get` and `set` methods against property dimensions.  
  
-   The number of parameters for the `get` method must equal the number of dimensions of the property or be zero for nonindexed properties.  
  
-   The number of parameters of the `set` method must be one more than the number of dimensions of the property.  
  
 For more information, see [property](../VS_visualcpp/property---C---Component-Extensions-.md).  
  
## Example  
 The following sample generates C3904.  
  
```  
// C3904.cpp  
// compile with: /clr /c  
ref class X {  
   property int P {  
      // set  
      void set();   // C3904  
      // try the following line instead  
      // void set(int);  
  
      // get  
      int get(int, int);   // C3904  
      // try the following line instead  
      // int get();  
   };  
};  
```  
  
## Example  
 The following sample generates C3904.  
  
```  
// C3904b.cpp  
// compile with: /clr /c  
ref struct X {  
   property int Q[double, double, float, float, void*, int] {  
      // set  
      void set(double, void*);   // C3904  
      // try the following line instead  
      // void set(double, double, float, float, void*, int, int);  
  
      // get  
      int get();   // C3904  
      // try the following line instead  
      // int get(double, double, float, float, void*, int);  
   }  
};  
```