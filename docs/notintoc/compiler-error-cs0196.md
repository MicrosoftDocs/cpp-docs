---
title: "Compiler Error CS0196"
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
  - "CS0196"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0196"
ms.assetid: d361484e-73b8-439a-99c7-714e61d73755
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
# Compiler Error CS0196
A pointer must be indexed by only one value  
  
 A pointer cannot have multiple indices. For more information, see [Pointer types](../Topic/Pointer%20types%20\(C%23%20Programming%20Guide\).md)  
  
 The following sample generates CS0196:  
  
```  
// CS0196.cs  
public class MyClass  
{  
   public static void Main ()  
   {  
      int *i = null;  
      int j = 0;  
      j = i[1,2];   // CS0196  
      // try the following line instead  
      // j = i[1];  
   }  
}  
```