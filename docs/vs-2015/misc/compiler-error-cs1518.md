---
title: "Compiler Error CS1518 | Microsoft Docs"
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
  - "CS1518"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1518"
ms.assetid: 26e0870d-fe91-4c66-b3f8-ed2b074c964e
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1518
Expected class, delegate, enum, interface, or struct  
  
 A declaration was found that is not supported in a [namespace](http://msdn.microsoft.com/library/0a788423-9110-42e0-97d9-bda41ca4870f). Inside a namespace, the compiler accepts only classes, structs, enums, interfaces, namespaces, and delegates.  
  
## Example  
 The following sample generates CS1518:  
  
```  
// CS1518.cs  
namespace x  
{  
   sealed class c1 {};      // OK  
   namespace f2 {};         // OK  
   sealed f3 {};            // CS1518  
   }  
```