---
title: "Compiler Warning (level 2) CS1587 | Microsoft Docs"
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
  - "CS1587"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1587"
ms.assetid: b27c2009-d485-43fd-a649-fbc15570d256
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 2) CS1587
XML comment is not placed on a valid language element  
  
 Recommended tags for documentation comments are not allowed on all language elements. For example, a tag is not allowed on a namespace. For more information on XML comments, see [Recommended Tags for Documentation Comments](http://msdn.microsoft.com/library/6e98f7a9-38f4-4d74-b644-1ff1b23320fd).  
  
## Example  
 The following sample generates CS1587:  
  
```  
// CS1587.cs  
// compile with: /W:2 /doc:x.xml  
  
/// <summary>test</summary>   // CS1587, tag not allowed on namespace  
namespace MySpace  
{  
    class MyClass  
    {  
        public static void Main()  
        {  
        }  
    }  
}  
```