---
title: "Compiler Error CS1511"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS1511"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1511"
ms.assetid: c04b5268-5bc3-41db-af6b-463ab1d802b4
caps.latest.revision: 11
ms.author: "billchi"
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
# Compiler Error CS1511
Keyword 'base' is not available in a static method  
  
 The [base](../Topic/base%20\(C%23%20Reference\).md) keyword was used in a [static](../Topic/static%20\(C%23%20Reference\).md) method. `base` can only be called in an instance constructor, instance method, or instance accessor.  
  
## Example  
 The following sample generates CS1511.  
  
```  
// CS1511.cs  
// compile with: /target:library  
public class A  
{  
   public int j = 0;  
}  
  
class C : A  
{  
   public void Method()  
   {  
      base.j = 3;   // base allowed here  
   }  
  
   public static int StaticMethod()  
   {  
      base.j = 3;   // CS1511  
      return 1;  
   }  
}  
```