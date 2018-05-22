---
title: "Compiler Error CS1657 | Microsoft Docs"
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
  - "CS1657"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1657"
ms.assetid: 6f0aeebe-5c90-4d5b-981c-1795d2e8fbb9
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS1657
Cannot pass 'parameter' as a ref or out argument because 'reason''  
  
 This error occurs when a variable is passed as a [ref](http://msdn.microsoft.com/library/b8a5e59c-907d-4065-b41d-95bf4273c0bd) or [out](http://msdn.microsoft.com/library/7e911a0c-3f98-4536-87be-d539b7536ca8) argument in a context in which that variable is readonly. Readonly contexts include [foreach](http://msdn.microsoft.com/library/5a9c5ddc-5fd3-457a-9bb6-9abffcd874ec) iteration variables, [using](http://msdn.microsoft.com/library/afc355e6-f0b9-4240-94dd-0d93f17d9fc3) variables, and `fixed` variables. To resolve this error, do not call functions that take the `foreach`, `using` or `fixed` variable as a `ref` or `out` parameter in `using` blocks, `foreach` statements, and `fixed` statements.  
  
## Example  
 The following sample generates CS1657:  
  
```  
// CS1657.cs  
using System;  
class C : IDisposable  
{  
    public int i;  
    public void Dispose() {}  
}  
  
class CMain  
{  
    static void f(ref C c)  
    {  
    }  
    static void Main()  
    {  
        using (C c = new C())  
        {  
            f(ref c);  // CS1657  
        }  
    }  
}  
```  
  
## Example  
 The following code illustrates the same problem in a `fixed` statement:  
  
```  
// CS1657b.cs  
// compile with: /unsafe  
unsafe class C  
{  
    static void F(ref int* p)  
    {  
    }  
  
    static void Main()  
    {  
        int[] a = new int[5];  
        fixed(int* p = a) F(ref p); // CS1657  
    }  
}  
```