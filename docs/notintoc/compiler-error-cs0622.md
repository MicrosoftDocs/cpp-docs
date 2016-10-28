---
title: "Compiler Error CS0622"
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
  - "CS0622"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0622"
ms.assetid: aef77a69-d8b7-41f8-9539-258deaef5cc4
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
# Compiler Error CS0622
Can only use array initializer expressions to assign to array types. Try using a new expression instead.  
  
 Syntax that is appropriate to initialize an array was used in the declaration of a non-array.  
  
## Example  
 The following sample generates CS0622:  
  
```  
// CS0622.cs  
using System;  
  
public class Test  
{  
    public static void Main ()  
    {  
        Test t = { new Test() };   // CS0622  
        // Try the following instead:  
        // Test[] t = { new Test() };  
    }  
}  
```