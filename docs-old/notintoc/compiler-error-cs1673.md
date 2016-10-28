---
title: "Compiler Error CS1673"
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
  - "CS1673"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1673"
ms.assetid: 5c7dd58b-dcbc-45c9-be36-7d15fafaa067
caps.latest.revision: 7
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
# Compiler Error CS1673
Anonymous methods, lambda expressions, and query expressions inside structs cannot access instance members of 'this'. Consider copying 'this' to a local variable outside the anonymous method, lambda expression or query expression and using the local instead.  
  
 The following sample generates CS1673:  
  
```  
// CS1673.cs  
delegate int MyDelegate();  
  
public struct S  
{  
   int member;  
  
   public int F(int i)  
   {  
       member = i;  
       // Try assigning to a local variable  
       // S s = this;  
       MyDelegate d = delegate()  
       {  
          i = this.member;  // CS1673  
          // And use the local variable instead of "this"  
          // i =  s.member;  
          return i;  
  
       };  
       return d();  
   }  
}  
  
class CMain  
{  
   public static void Main()  
   {  
   }  
}  
```