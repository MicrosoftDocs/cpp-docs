---
title: "Compiler Error C3772"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3772"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3772"
ms.assetid: 63e938d4-088d-41cc-a562-5881a05b5710
caps.latest.revision: 13
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C3772
"name" : invalid friend template declaration  
  
 It is invalid to declare a friend of a class template specialization. You cannot declare an explicit or partial specialization of a class template and in the same statement declare a friend of that specialization. The *name* placeholder identifies the invalid declaration.  
  
### To correct this error  
  
-   Do not declare a friend of a class template specialization.  
  
-   If appropriate for your application, declare a friend of the class template, or declare a friend of a particular partial or explicit specialization.  
  
## Example  
 The following code example fails because it declares a friend of a partial specialization of a class template.  
  
```  
// c3772.cpp  
// compile with: /c  
  
// A class template.  
    template<class T> class A {};  
  
// A partial specialization of the class template.  
    template<class T> class A<T*> {};  
  
// An explicit specialization.  
    template<> class A<char>;  
  
class X {  
// Invalid declaration of a friend of a partial specialization.  
    template<class T> friend class A<T*>; // C3772  
  
// Instead, if it is appropriate for your application, declare a   
// friend of the class template. Consequently, all specializations   
// of the class template are friends:  
//    template<class T> friend class A;  
// Or declare a friend of a particular partial specialization:  
//    friend class A<int*>;  
// Or declare a friend of a particular explicit specialization:  
//    friend class A<char>;  
};  
```  
  
## See Also  
 [Template Specifications](../Topic/Template%20Specifications.md)   
 [Template Specialization](../cpp/template-specialization--c---.md)   
 [Explicit Specialization of Class Templates](../Topic/Explicit%20Specialization%20of%20Class%20Templates.md)