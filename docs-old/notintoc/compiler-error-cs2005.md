---
title: "Compiler Error CS2005"
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
  - "CS2005"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2005"
ms.assetid: 03535d2a-ae30-4272-ab45-e277df5ee8e1
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
# Compiler Error CS2005
Missing file specification for 'option' option  
  
 A [compiler option](../Topic/C%23%20Compiler%20Options.md) was only partially specified.  
  
 For example, when using [/recurse](../Topic/-recurse%20\(C%23%20Compiler%20Options\).md), you must specify the file to search: **/recurse:***filename***.cs**.  
  
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