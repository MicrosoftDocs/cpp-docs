---
title: "Operator That is Pointer to Function"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: bb576b9c-4cde-406a-9069-e8500a7da9f7
caps.latest.revision: 7
ms.author: "mblome"
manager: "douge"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Operator That is Pointer to Function
This content has been removed. For information, see [Overloading the Function Call Operator](../cpp/function-call--c---.md).  
  
```  
// operator_that_is_pointer_to_function.cpp  
// function style call on object will invoke user-defined conversion   
// if there is one. See secion 13.3.1.1.2   
typedef void(*ptf)();  
void func()  
{  
}  
struct S  
{  
   operator ptf()  
   {  
      return func;  
   }  
};  
  
int main()  
{  
   S s;  
   s();//operates as s.operator ptf()()  
}  
```  
  
## See Also  
 [Visual C++ .NET 2003 Enhanced Compiler Conformance](../notintoc/visual-c---.net-2003-enhanced-compiler-conformance.md)