---
title: "Compiler Error C3771 | Microsoft Docs"
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
  - "C3771"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3771"
ms.assetid: 68c23b25-7f21-4eaa-8f7e-38fda1130a69
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3771
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3771](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3771).  
  
  
identifier" : friend declaration cannot be found in the nearest namespace scope  
  
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
 [Template Specifications](http://msdn.microsoft.com/library/8c31924a-5c08-4d2d-aa54-543d7f744753)

