---
title: "Compiler Error CS0646"
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
  - "CS0646"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0646"
ms.assetid: 48ea306f-b4a0-4988-8d2b-ca9d38e9bdad
caps.latest.revision: 8
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
# Compiler Error CS0646
Cannot specify the DefaultMember attribute on a type containing an indexer  
  
 If a class or other type specifies **System.Reflection.DefaultMemberAttribute**, it cannot contain an indexer. For more information, see [Properties](../Topic/Properties%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0646:  
  
```  
// CS0646.cs  
// compile with: /target:library  
[System.Reflection.DefaultMemberAttribute("x")]   // CS0646  
class MyClass  
{  
   public int this[int index]   // an indexer  
   {  
      get  
      {  
         return 0;  
      }  
   }  
  
   public int x = 0;  
}  
  
// OK  
[System.Reflection.DefaultMemberAttribute("x")]  
class MyClass2  
{  
   public int prop  
   {  
      get  
      {  
         return 0;  
      }  
   }  
  
   public int x = 0;  
}  
  
class MyClass3  
{  
   public int this[int index]   // an indexer  
   {  
      get  
      {  
         return 0;  
      }  
   }  
  
   public int x = 0;  
}  
```