---
title: "Compiler Error C3771"
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
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
caps.latest.revision: 12
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
# Compiler Error C3771
"identifier" : friend declaration cannot be found in the nearest namespace scope  
  
 The class template declaration for the specified template *identifier* cannot be found within the current namespace.  
  
### To correct this error  
  
-   Ensure that the class template declaration for the template identifier is defined in the current namespace or that the template identifier is a fully-qualified name.  
  
## Example  
 The following code example declares a class template and function in namespace `NA`, but attempts to declare a friend function template in namespace `NB`.  
  
```  
// C3771.cpp   
// compile with: /c  
  
namespace NA {  
template<class T> class A {  
    void aFunction(T t) {};  
    };  
}  
// using namespace NA;  
namespace NB {  
    class X {  
        template<class T> friend void A<T>::aFunction(T); // C3771  
// try the following line instead  
//      template<class T> friend void NA::A<T>::aFunction(T);  
// or try "using namespace NA;" instead.  
    };  
}  
```  
  
## See Also  
 [Template Specifications](../Topic/Template%20Specifications.md)