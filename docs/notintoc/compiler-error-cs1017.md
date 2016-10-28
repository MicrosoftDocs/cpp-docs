---
title: "Compiler Error CS1017"
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
  - "CS1017"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1017"
ms.assetid: e0902e8a-b042-4711-a8a6-83456a3f88cb
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
# Compiler Error CS1017
Catch clauses cannot follow the general catch clause of a try statement  
  
 A `catch` block that does not take any parameters must be the last in a series of `catch` blocks. For more information on exceptions, see [Exception Handling Statements](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md).  
  
## Example  
 The following sample generates CS1017:  
  
```  
// CS1017.cs  
using System;  
  
namespace x  
{  
    public class b : Exception  
    {  
    }  
  
    public class a  
    {  
        public static void Main()  
        {  
            try  
            {  
            }  
  
            catch   // CS1017, must be last catch  
            {  
            }  
  
            catch(b)  
            {  
                throw;  
            }  
        }  
    }  
}  
```