---
title: "Compiler Error CS0107"
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
  - "CS0107"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0107"
ms.assetid: 505763c5-6d68-4c57-a8bd-7b03682da4c5
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
# Compiler Error CS0107
More than one protection modifier  
  
 Only one access modifier ([public](../Topic/public%20\(C%23%20Reference\).md), [private](../Topic/private%20\(C%23%20Reference\).md), [protected](../Topic/protected%20\(C%23%20Reference\).md), or [internal](../Topic/internal%20\(C%23%20Reference\).md)) is allowed on a class member, with the exception of except **internal protected**.  
  
 The following sample generates CS0107:  
  
```  
// CS0107.cs  
public class C  
{  
   private internal void f()   // CS0107, delete private or internal  
   {  
   }  
  
   public static int Main()  
   {  
      return 1;  
   }  
}  
```