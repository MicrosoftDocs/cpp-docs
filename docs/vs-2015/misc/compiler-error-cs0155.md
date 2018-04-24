---
title: "Compiler Error CS0155 | Microsoft Docs"
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
  - "CS0155"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0155"
ms.assetid: 6c92984a-2b10-453e-9cb7-e6a1d1b98aa6
caps.latest.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0155
The type caught or thrown must be derived from System.Exception  
  
 An attempt was made to pass a data type that does not derive from **System.Exception** into a [catch](../Topic/try-catch%20\(C%23%20Reference\).md) block. Only data types that derive from **System.Exception** can be passed into a **catch** block. For more information, see [Exception Handling Statements](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) and [Exceptions and Exception Handling](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0155:  
  
```  
// CS0155.cs  
using System;  
  
namespace MyNamespace  
{  
    public class MyClass2  
    // try the following line instead  
    // public class MyClass2 : Exception  
    {  
    }  
    public class MyClass  
    {  
        public static void Main()  
        {  
            try  
            {  
            }  
            catch (MyClass2)   // CS0155, resolves if you derive MyClass2 from Exception  
            {  
            }  
        }  
    }  
}  
```