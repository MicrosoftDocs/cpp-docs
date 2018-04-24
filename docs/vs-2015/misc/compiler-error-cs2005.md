---
title: "Compiler Error CS2005 | Microsoft Docs"
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
  - "CS2005"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2005"
ms.assetid: 03535d2a-ae30-4272-ab45-e277df5ee8e1
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS2005
Missing file specification for 'option' option  
  
 A [compiler option](http://msdn.microsoft.com/library/d3403556-1816-4546-a782-e8223a772e44) was only partially specified.  
  
 For example, when using [/recurse](http://msdn.microsoft.com/library/4e8212e5-04e3-45b1-8a42-41bc50e683b0), you must specify the file to search: **/recurse:***filename***.cs**.  
  
## Example  
 The following sample generates CS2005.  
  
```  
// CS2005.cs  
// compile with: /recurse:  
// CS2005 expected  
class x  
{  
   public static void Main() {}  
}  
```