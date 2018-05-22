---
title: "Compiler Warning (level 1) CS1584 | Microsoft Docs"
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
  - "CS1584"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1584"
ms.assetid: 56c8f9bf-4cce-4269-b573-d60e5b11f9ab
caps.latest.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Warning (level 1) CS1584
XML comment on 'member' has syntactically incorrect cref attribute 'invalid_syntax'  
  
 One of the parameters passed to a tag for documentation comments has invalid syntax. For more information, see [Recommended Tags for Documentation Comments](http://msdn.microsoft.com/library/6e98f7a9-38f4-4d74-b644-1ff1b23320fd).  
  
## Example  
 The following sample generates CS1584.  
  
```  
// CS1584.cs  
// compile with: /W:1 /doc:CS1584.xml  
/// <remarks>Test class</remarks>  
public class Test  
{  
   /// <remarks>Called in <see cref="Test.Mai()n"/>.</remarks>   // CS1584  
   // try the following line instead  
   // /// <remarks>Called in <see cref="Test.Main()"/>.</remarks>  
   public static void Test2() {}  
  
   /// <remarks>Main method</remarks>  
   public static void Main() {}  
}  
```