---
title: "Compiler Error CS0133 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0133"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0133"
ms.assetid: b5be456f-824d-4e6d-802b-0b1b5889efbd
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0133
The expression being assigned to 'variable' must be constant  
  
 A [const](http://msdn.microsoft.com/library/79eb447c-117b-4418-933f-97c50aa472db) variable cannot take as its value an expression that is not constant. For more information, see [Constants](http://msdn.microsoft.com/library/1fb39621-1738-49b1-a1b3-8587f109123f).  
  
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