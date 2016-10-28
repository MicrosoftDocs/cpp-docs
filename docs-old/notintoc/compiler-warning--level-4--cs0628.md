---
title: "Compiler Warning (level 4) CS0628"
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
  - "CS0628"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0628"
ms.assetid: a54cfad8-27c9-4abb-8c83-982615489a10
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
# Compiler Warning (level 4) CS0628
'member' : new protected member declared in sealed class  
  
 A [sealed](../Topic/sealed%20\(C%23%20Reference\).md) class cannot introduce a [protected](../Topic/protected%20\(C%23%20Reference\).md) member because no other class will be able to inherit from the `sealed` class and use the `protected` member.  
  
 The following sample generates CS0628:  
  
```  
// CS0628.cs  
// compile with: /W:4  
sealed class C  
{  
   protected int i;   // CS0628  
}  
  
class MyClass  
{  
   public static void Main()  
   {  
   }  
}  
```