---
title: "Compiler Warning (level 3) C4373 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Warning (level 3) C4373
'%$S': virtual function overrides '%$pS', previous versions of the compiler did not override when parameters only differed by const/volatile qualifiers  
  
 Your application contains a method in a derived class that overrides a virtual method in a base class, and the parameters in the overriding method differ by only a [const](../../cpp/const-cpp.md) or [volatile](../../cpp/volatile-cpp.md) qualifier from the parameters of the virtual method. This means the compiler must bind a function reference to the method in either the base or derived class.  
  
 Versions of the compiler prior to [!INCLUDE[cpp_orcas_long](../../cpp/includes/cpp_orcas_long_md.md)] bind the function to the method in the base class, then issue a warning message. Subsequent versions of the compiler ignore the `const` or `volatile` qualifier, bind the function to the method in the derived class, then issue warning `C4373`. This latter behavior complies with the C++ standard.  
  
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