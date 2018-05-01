---
title: "Compiler Error CS0264 | Microsoft Docs"
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
  - "CS0264"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0264"
ms.assetid: a8a87185-5915-4b0d-a8cd-2f129ea51b8f
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0264
Partial declarations of 'type' must have the same type parameter names in the same order  
  
 This error occurs if you are defining a generic type in partial declarations and the type parameters are not consistent in name or order throughout all of the partial declarations. To get rid of this error, check the type parameters for each partial declaration and make sure the same name and order of parameters is used. For more information, see [Partial Classes and Methods](http://msdn.microsoft.com/library/804cecb7-62db-4f97-a99f-60975bd59fa1).and [Generic Type Parameters](http://msdn.microsoft.com/library/a03b0ab2-0606-4b41-b7bf-e64d5bb4d18f).  
  
## Example  
 The following example generates CS0264.  
  
```  
// CS0264.cs  
  
partial class MyClass<T>  // CS0264  
{  
}  
  
partial class MyClass <MyType>  
{  
}  
```