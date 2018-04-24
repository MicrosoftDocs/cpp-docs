---
title: "Compiler Error CS0513 | Microsoft Docs"
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
  - "CS0513"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0513"
ms.assetid: 6f8569df-713d-4c9c-a675-6576dad139ce
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0513
'function' is abstract but it is contained in nonabstract class 'class'  
  
 A method cannot be an [abstract](http://msdn.microsoft.com/library/b0797770-c1f3-4b4d-9441-b9122602a6bb) member of a nonabstract class.  
  
 The following sample generates CS0513:  
  
```  
// CS0513.cs  
namespace x  
{  
   public class clx  
   {  
      abstract public void f();   // CS0513, abstract member of nonabstract class  
   }  
}  
```