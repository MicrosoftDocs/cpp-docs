---
title: "Compiler Error CS0751"
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
  - "CS0751"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0751"
ms.assetid: 2ebaed5f-d3ca-452f-8fce-f3299b84360a
caps.latest.revision: 5
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
# Compiler Error CS0751
A partial method must be declared in a partial class or partial struct  
  
 It is not possible to declare a [partial](../Topic/partial%20\(Method\)%20\(C%23%20Reference\).md) method unless it is encapsulated inside a partial class or partial struct.  
  
### To correct this error  
  
1.  Either remove the `partial` modifier from the method and provide an implementation, or else add the `partial` modifier to the enclosing class or struct.  
  
## Example  
 The following example generates CS0751:  
  
```  
// cs0751.cs  
using System;  
  
public class C  
{  
    partial void Part(); // CS0751  
    public static int Main()  
    {  
        return 1;  
    }  
}  
```  
  
## See Also  
 [Partial Classes and Methods](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)