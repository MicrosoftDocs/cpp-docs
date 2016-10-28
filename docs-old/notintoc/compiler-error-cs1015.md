---
title: "Compiler Error CS1015"
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
  - "CS1015"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1015"
ms.assetid: 53179feb-e8be-41e0-bb0b-f7879e9fa613
caps.latest.revision: 7
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
# Compiler Error CS1015
An object, string, or class type expected  
  
 An attempt was made to pass a predefined data type into a [catch](../Topic/try-catch%20\(C%23%20Reference\).md) block. Only data types that derive from \<xref:System.Exception?displayProperty=fullName> can be passed into a `catch` block. For more information on exceptions, see [Exception Handling Statements](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md).  
  
## Example  
 The following sample generates CS1015:  
  
```  
// CS1015.cs  
class Sample  
{  
    static void Main()  
    {  
        try   
        {  
        }  
        catch(int)   // CS1015, int is not derived from System.Exception  
        {  
        }  
    }  
}  
```