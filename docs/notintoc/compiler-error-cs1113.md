---
title: "Compiler Error CS1113"
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
  - "CS1113"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1113"
ms.assetid: ef2d828f-b5ee-4be9-ba2e-36df5502cc5a
caps.latest.revision: 8
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
# Compiler Error CS1113
Extension methods 'name' defined on value type 'name' cannot be used to create delegates.  
  
 Extension methods that are defined for class types can be used to create delegates. Extension methods that are defined for value types cannot.  
  
### To correct this error  
  
1.  Associate the extension method with a class type.  
  
2.  Make the method a regular method on the struct.  
  
## Example  
 The following example generates CS1113:  
  
```  
// cs1113.cs  
using System;  
public static class Extensions  
{  
    public static S ExtMethod(this S s)  
    {  
        return s;  
    }  
}  
  
public struct S  
{  
}  
  
public class Test  
{  
    static int Main()  
    {  
        Func<S> f = new S().ExtMethod; // CS1113  
        return 1;  
    }  
}  
  
```  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)