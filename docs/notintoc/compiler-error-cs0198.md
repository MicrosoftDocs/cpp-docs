---
title: "Compiler Error CS0198"
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
  - "CS0198"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0198"
ms.assetid: 222c20f6-3f7f-4750-9f99-b5e6ae6c1271
caps.latest.revision: 9
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
# Compiler Error CS0198
Fields of static readonly field 'name' cannot be assigned to (except in a static constructor or a variable initializer)  
  
 A [readonly](../Topic/readonly%20\(C%23%20Reference\).md) variable must have the same [static](../Topic/static%20\(C%23%20Reference\).md) usage as the constructor in which you want to initialize it. For more information, see [Static Constructors](../Topic/Static%20Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0198:  
  
```  
// CS0198.cs  
class MyClass  
{  
   public static readonly int TestInt = 6;  
  
   MyClass()  
   {  
      TestInt = 11;   // CS0198, constructor is not static and readonly field is  
   }  
  
   public static void Main()  
   {  
   }  
}  
```