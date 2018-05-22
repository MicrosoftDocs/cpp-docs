---
title: "Compiler Error CS0837 | Microsoft Docs"
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
  - "CS0837"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0837"
ms.assetid: cbde45dc-222c-4bfe-8814-856476319d37
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0837
The first operand of an "is" or "as" operator may not be a lambda expression or anonymous method.  
  
 Lambda expressions and anonymous methods may not be used on the left side of [is](http://msdn.microsoft.com/library/bc62316a-d41f-4f90-8300-c6f4f0556e43) or [as](http://msdn.microsoft.com/library/a9be126b-cbf4-4990-a70d-d0e1983cad0e).  
  
### To correct this error  
  
-   If the error involves the `is` operator, remember that `is` takes a value and a type and tells you whether the value can be made into that type by a reference, boxing, or unboxing conversion. Because lambdas are not values and have no reference, boxing, or unboxing conversions, lambdas are not candidates for `is`.  
  
-   If the code misuses `as`, the correction is probably to change it to a cast.  
  
## Example  
 The following example generates CS0837:  
  
```  
// cs0837.cs  
namespace TestNamespace  
{  
    public delegate void Del();  
  
    class Test  
    {  
        static int Main()  
        {  
            bool b1 = (() => { }) is Del;   // CS0837  
            bool b2 = delegate() { } is Del;// CS0837  
            Del d1 = () => { } as Del;      // CS0837  
            Del d2 = delegate() { } as Del; // CS0837  
            return 1;  
        }  
    }  
}  
```