---
title: "Compiler Error CS1103"
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
  - "CS1103"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1103"
ms.assetid: 513a26ea-9d66-4dc3-b3e6-d709c3089b1a
caps.latest.revision: 6
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
# Compiler Error CS1103
The first parameter of an extension method cannot be of type 'type'.  
  
 The first parameter of an extension method cannot be a pointer type.  
  
## Example  
 The following example generates CS1103:  
  
```  
// cs1103.cs  
public static class Extensions  
{  
    public unsafe static char* Test(this char* charP) { return charP; } // CS1103  
}   
```  
  
## See Also  
 [Extension Methods](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [unsafe](../Topic/unsafe%20\(C%23%20Reference\).md)