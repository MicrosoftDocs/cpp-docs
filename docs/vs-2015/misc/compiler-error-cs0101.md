---
title: "Compiler Error CS0101 | Microsoft Docs"
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
  - "CS0101"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0101"
ms.assetid: edb5246b-c16b-4845-bb2d-0ef769d014c7
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0101
The namespace 'namespace' already contains a definition for 'type'  
  
 A [namespace](http://msdn.microsoft.com/library/0a788423-9110-42e0-97d9-bda41ca4870f) has duplicate identifiers. Rename or delete one of the duplicate identifiers. For more information, see [Namespaces](http://msdn.microsoft.com/library/b1c4ab46-3fad-4ffa-9deb-dd50a2d8c65a)  
  
 The following sample generates CS0101:  
  
```  
// CS0101.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      static public void Main()  
      {  
      }  
   }  
  
   public class MyClass   // CS0101  
   {  
   }  
}  
```