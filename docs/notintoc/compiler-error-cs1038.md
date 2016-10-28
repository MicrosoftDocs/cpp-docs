---
title: "Compiler Error CS1038"
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
  - "CS1038"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1038"
ms.assetid: 05c53ae9-2819-4771-aee8-3f2ff6bcf0b0
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
# Compiler Error CS1038
\#endregion directive expected  
  
 A [#region](../Topic/%23region%20\(C%23%20Reference\).md) directive did not have a matching [#endregion](../Topic/%23endregion%20\(C%23%20Reference\).md) directive.  
  
 The following sample generates CS1038:  
  
```  
// CS1038.cs  
#region testing  
  
public class clx  
{  
   public static void Main()  
   {  
   }  
}  
// CS1038  
// uncomment the next line to resolve  
// #endregion  
```