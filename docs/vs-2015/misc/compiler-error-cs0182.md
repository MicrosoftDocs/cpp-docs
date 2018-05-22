---
title: "Compiler Error CS0182 | Microsoft Docs"
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
  - "CS0182"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0182"
ms.assetid: a9e97bb8-f06e-499f-aadf-26abc2082f98
caps.latest.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0182
An attribute argument must be a constant expression, typeof expression or array creation expression of an attribute parameter type  
  
 Certain restrictions apply to what kinds of arguments may be used with attributes. Note that in addition to the restrictions specified in the error message, the following types are NOT allowed as attribute arguments:  
  
-   [sbyte](http://msdn.microsoft.com/library/1a9c7b48-73d1-4d33-b485-c4faf0a816bc)  
  
-   [ushort](http://msdn.microsoft.com/library/1a7dbaae-b7a0-4111-872a-c88a6d3981ac)  
  
-   [uint](http://msdn.microsoft.com/library/e93e42c6-ec72-4b0b-89df-2fd8d36f7a7b)  
  
-   [ulong](http://msdn.microsoft.com/library/f2ece624-837a-40cf-92c5-343e7f33397c)  
  
-   [decimal](http://msdn.microsoft.com/library/b6522132-b5ee-4be3-ad13-3adfdb7de7a1)  
  
 For more information, see [NOT IN BUILD: Global Attributes (C# Programming Guide)](http://msdn.microsoft.com/en-us/7c6c41f8-f0d5-4345-8987-3d91f9bae136).  
  
## Example  
 The following sample generates CS0182:  
  
```  
// CS0182.cs  
public class MyClass  
{  
    static string s = "Test";  
  
    [System.Diagnostics.ConditionalAttribute(s)]   // CS0182  
    // try the following line instead  
    // [System.Diagnostics.ConditionalAttribute("Test")]  
    void NonConstantArgumentToConditional()  
    {  
    }  
  
    public static void Main()  
    {  
    }  
}  
```