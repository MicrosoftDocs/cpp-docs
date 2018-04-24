---
title: "Compiler Error C3772 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3772"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3772"
ms.assetid: 63e938d4-088d-41cc-a562-5881a05b5710
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3772
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3772](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3772).  
  
  
name" : invalid friend template declaration  
  
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
 [Template Specifications](http://msdn.microsoft.com/library/8c31924a-5c08-4d2d-aa54-543d7f744753)   
 [Template Specialization](../../cpp/template-specialization-cpp.md)   
 [Explicit Specialization of Class Templates](http://msdn.microsoft.com/library/7ad67abd-5cb5-4d36-a3df-31a71ca9c49b)

