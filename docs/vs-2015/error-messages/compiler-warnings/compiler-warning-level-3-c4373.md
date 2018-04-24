---
title: "Compiler Warning (level 3) C4373 | Microsoft Docs"
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
  - "C4373"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4373"
ms.assetid: 670c0ba3-b7d6-4aed-b207-1cb84da3bcde
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4373
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4373](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4373).  
  
  
S': virtual function overrides '%$pS', previous versions of the compiler did not override when parameters only differed by const/volatile qualifiers  
  
 Your application contains a method in a derived class that overrides a virtual method in a base class, and the parameters in the overriding method differ by only a [const](../../cpp/const-cpp.md) or [volatile](../../cpp/volatile-cpp.md) qualifier from the parameters of the virtual method. This means the compiler must bind a function reference to the method in either the base or derived class.  
  
 Versions of the compiler prior to [!INCLUDE[cpp_orcas_long](../../includes/cpp-orcas-long-md.md)] bind the function to the method in the base class, then issue a warning message. Subsequent versions of the compiler ignore the `const` or `volatile` qualifier, bind the function to the method in the derived class, then issue warning `C4373`. This latter behavior complies with the C++ standard.  
  
## Example  
 The following code example generates warning C4373.  
  
```  
// c4373.cpp  
// compile with: /c /W3  
#include <stdio.h>  
struct Base  
{  
    virtual void f(int i) {  
        printf("base\n");  
    }  
};  
struct Derived : Base  
{  
    void f(const int i) {  // C4373  
        printf("derived\n");  
    }  
};  
void main()  
{  
    Derived d;  
    Base* p = &d;  
    p->f(1);  
}  
```  
  
```Output  
derived  
```

