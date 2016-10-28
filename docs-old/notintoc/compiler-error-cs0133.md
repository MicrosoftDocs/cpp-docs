---
title: "Compiler Error CS0133"
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
  - "CS0133"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0133"
ms.assetid: b5be456f-824d-4e6d-802b-0b1b5889efbd
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
# Compiler Error CS0133
The expression being assigned to 'variable' must be constant  
  
 A [const](../Topic/const%20\(C%23%20Reference\).md) variable cannot take as its value an expression that is not constant. For more information, see [Constants](../Topic/Constants%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0133:  
  
```  
// CS0133.cs  
public class MyClass  
{  
   public const int i = c;   // CS0133, c is not constant  
   public static int c = i;  
   // try the following line instead  
   // public const int i = 6;  
  
   public static void Main()  
   {  
   }  
}  
```