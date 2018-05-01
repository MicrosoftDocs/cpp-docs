---
title: "Compiler Error CS0206 | Microsoft Docs"
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
  - "CS0206"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0206"
ms.assetid: d2f9838a-d8ae-4342-b8bd-fa5745619a26
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0206
A property or indexer may not be passed as an out or ref parameter  
  
 A [property](http://msdn.microsoft.com/library/e295a8a2-b357-4ee7-a12e-385a44146fa8) is not available to be passed as a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) parameter. For more information, see [Passing Parameters](http://msdn.microsoft.com/library/a5c3003f-7441-4710-b8b1-c79de77e0b77).  
  
## Example  
 The following sample generates CS0206:  
  
```  
// CS0206.cs  
public class MyClass  
{  
    public static int P  
    {  
        get  
        {  
            return 0;  
        }  
        set  
        {  
        }  
    }  
  
    public static void MyMeth(ref int i)  
    // public static void MyMeth(int i)  
    {  
    }  
  
    public static void Main()  
    {  
        MyMeth(ref P);   // CS0206  
        // try the following line instead  
        // MyMeth(P);   // CS0206  
    }  
}  
```