---
title: "Compiler Error CS0664"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CS0664"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0664"
ms.assetid: 60fe15a7-db22-414f-a7b8-fac79dad22b4
caps.latest.revision: 9
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error CS0664
Literal of type double cannot be implicitly converted to type 'type'; use an 'suffix' suffix to create a literal of this type  
  
 An assignment could not be completed; use a suffix to correct the instruction. The documentation for each type identifies the corresponding suffix for the type. For more information on conversions, see [Casting and Type Conversions](../Topic/Casting%20and%20Type%20Conversions%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0664:  
  
```c#  
// CS0664.cs  
class Example  
{  
    static void Main()  
    {  
        decimal d1 = 1.0;   // CS0664, because 1.0 is interpreted  
                            // as a double.  
  
        // Try the following line instead.  
        decimal d2 = 1.0M;  // The M tells the compiler that 1.0 is a  
                            // decimal.  
        Console.WriteLine(d2);  
    }  
}  
```  
  
## See Also  
 [Type Conversion Tables](../Topic/Type%20Conversion%20Tables%20in%20the%20.NET%20Framework.md)