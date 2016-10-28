---
title: "Unknown argument for &#39;:&#39; operator. Complete Regular Expression required in search string."
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
  - "vs.message.0x800A00BE"
  - "vs.message.VS_E_RE_SPECIALUNKNOWN"
ms.assetid: 8cbc2f7f-7ea1-4803-904c-1f716cd36376
caps.latest.revision: 6
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
# Unknown argument for &#39;:&#39; operator. Complete Regular Expression required in search string.
This error generally occurs during search or replace when regular expressions or wildcards are used in a search string. The operator colon (`:`) was entered but the argument that followed was not a valid argument.  
  
> [!NOTE]
>  Arguments for the colon (`:`) operator are case-sensitive.  
  
### To correct this error  
  
1.  Review the correct regular expression syntax located in the topic "Regular Expressions."  
  
2.  Double-check that the correct case of the argument was used.  
  
3.  If you are using an Input Method Editor (IME), make sure that the argument is not given using full-width characters.  
  
## See Also  
 [Using Regular Expressions in Visual Studio](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md)   
 [NIB: Find and Replace, Quick Find](assetId:///dad03582-4931-4893-83ba-84b37f5b1600)   
 [Find in Files](../Topic/Find%20in%20Files.md)