---
title: "Compiler Error CS0153"
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
  - "CS0153"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0153"
ms.assetid: 3a0791e9-0ab9-4eaa-a230-d39aabaa9d5d
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
# Compiler Error CS0153
A goto case is only valid inside a switch statement  
  
 An attempt was made to use [switch](../Topic/switch%20\(C%23%20Reference\).md) syntax outside of a **switch** statement. For more information, see [switch](../Topic/switch%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0153:  
  
```  
// CS0153.cs  
public class a  
{  
   public static void Main()  
   {  
      goto case 5;   // CS0153  
   }  
}  
```