---
title: "Compiler Error CS1620 | Microsoft Docs"
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
  - "CS1620"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1620"
ms.assetid: 13933976-218a-4fe2-8fde-5b9af522e2e5
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1620
Argument 'number' must be passed with the 'keyword' keyword  
  
 This error occurs if you are passing an argument to a function that takes a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter and you don't include the `ref` or `out` keyword at the point of call, or you include the wrong keyword. The error text indicates the appropriate keyword to use and which argument caused the failure.  
  
 The following sample generates CS1620:  
  
```  
// CS1620.cs  
class C  
{  
    void f(ref int i) {}  
    public static void Main()  
    {  
        int x = 1;  
        f(out x);  // CS1620 – f takes a ref parameter, not an out parameter  
        // Try this line instead:  
        // f(ref x);  
    }  
}  
```