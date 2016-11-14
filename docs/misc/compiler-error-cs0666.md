---
title: "Compiler Error CS0666 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0666"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0666"
ms.assetid: 44ad4574-b4a2-487b-8d05-0116762231ab
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
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
# Compiler Error CS0666
'member' : new protected member declared in struct  
  
 A [struct](/dotnet/csharp/language-reference/keywords/struct) cannot be [abstract](/dotnet/csharp/language-reference/keywords/abstract) and is always implicitly [sealed](/dotnet/csharp/language-reference/keywords/sealed). Because structs do not support inheritance, the concept of a [protected](/dotnet/csharp/language-reference/keywords/protected) member in a struct makes no sense. For more information, see [Inheritance](/dotnet/csharp/programming-guide/classes-and-structs/inheritance).  
  
## Example  
 The following sample generates CS0666:  
  
```  
// CS0666.cs  
class M  
{  
    static void Main()  
    {  
    }  
}  
  
struct S  
{  
    protected int x;   // CS0666  
}  
```