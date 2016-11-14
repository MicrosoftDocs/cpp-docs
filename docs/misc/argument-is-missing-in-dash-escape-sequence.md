---
title: "Argument is missing in &#39;-&#39; escape sequence. | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_RE_ESCAPEMISSINGARG"
  - "vs.message.0x800A00BD"
ms.assetid: 5bd6559b-8cd9-450f-91c8-335ff1b1ef86
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# Argument is missing in &#39;\&#39; escape sequence.
This error generally occurs during search or replace when regular expressions or wildcards are used in a search string. This error can be caused by a single backslash (`\`) at the end of a pattern or by `\x` or `\u` entered without a valid hexadecimal Unicode character.  
  
### To correct this error  
  
1.  To search using the regular expression escape character, enter `\`.  
  
2.  To search for a Unicode character, enter `\x` or `\u` followed by a valid Unicode value.  
  
3.  To search for the literal backslash, use `\\`.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](/visual-studio/ide/using-regular-expressions-in-visual-studio)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/en-us/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](/visual-studio/ide/find-in-files)