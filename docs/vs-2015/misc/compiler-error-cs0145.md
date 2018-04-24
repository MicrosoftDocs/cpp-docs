---
title: "Compiler Error CS0145 | Microsoft Docs"
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
  - "CS0145"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0145"
ms.assetid: e5f9a90f-1700-4e6a-8f82-23d0c0287b85
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0145
A const field requires a value to be provided  
  
 You must initialize a [const](http://msdn.microsoft.com/library/79eb447c-117b-4418-933f-97c50aa472db) variable. For more information, see [Constants](http://msdn.microsoft.com/library/1fb39621-1738-49b1-a1b3-8587f109123f).  
  
 The following sample generates CS0145:  
  
```  
// CS0145.cs  
class MyClass  
{  
   const int i;   // CS0145  
   // try the following line instead  
   // const int i = 0;  
  
   public static void Main()  
   {  
   }  
}  
```