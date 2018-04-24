---
title: "Compiler Error CS0631 | Microsoft Docs"
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
  - "CS0631"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0631"
ms.assetid: 5ae06b13-7874-4d0d-b256-7d8b33396156
caps.latest.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0631
ref and out are not valid in this context  
  
 The declaration for an [indexer](http://msdn.microsoft.com/library/022cd27d-d5e0-4cfe-8b97-dc018cc3355d) cannot include the use of [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameters.  
  
## Example  
 The following sample generates CS0631:  
  
```  
// CS0631.cs  
public class MyClass  
{  
    public int this[ref int i]   // CS0631  
    // try the following line instead  
    // public int this[int i]  
    {  
        get  
        {  
            return 0;  
        }  
    }  
}  
  
public class MyClass2  
{  
    public static void Main()  
    {  
    }  
}  
```