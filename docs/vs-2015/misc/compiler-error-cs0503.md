---
title: "Compiler Error CS0503 | Microsoft Docs"
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
  - "CS0503"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0503"
ms.assetid: 12a337c9-8c5d-473d-8ce6-057b2c7e7935
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0503
The abstract method 'method' cannot be marked virtual  
  
 It is redundant to mark a member method as both [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) and [virtual](http://msdn.microsoft.com/library/5da9abae-bc1e-434f-8bea-3601b8dcb3b2) because **abstract** implies **virtual**.  
  
 The following sample generates CS0503:  
  
```  
// CS0503.cs  
namespace x  
{  
   abstract public class clx  
   {  
      abstract virtual public void f();   // CS0503  
   }  
}  
```