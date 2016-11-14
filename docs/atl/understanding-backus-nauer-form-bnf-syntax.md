---
title: "Understanding Backus Nauer Form (BNF) Syntax | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BNF notation"
  - "Backus Nauer Form (BNF) syntax"
ms.assetid: 994bbef0-9077-4aa8-bdfe-b7e830af9acc
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Understanding Backus Nauer Form (BNF) Syntax
The scripts used by the ATL Registrar are described in this topic using BNF syntax, which uses the notation shown in the following table.  
  
|Convention/symbol|Meaning|  
|------------------------|-------------|  
|`::=`|Equivalent|  
|`&#124;`|OR|  
|`X+`|One or more `X`s.|  
|`[X]`|`X` is optional. Optional delimiters are denoted by `[]`.|  
|Any **bold** text|A string literal.|  
|Any *italicized* text|How to construct the string literal.|  
  
 As indicated in the preceding table, registrar scripts use string literals. These values are actual text that must appear in your script. The following table describes the string literals used in an ATL Registrar script.  
  
|String literal|Action|  
|--------------------|------------|  
|**ForceRemove**|Completely removes the next key (if it exists) and then re-creates it.|  
|**NoRemove**|Does not remove the next key during Unregister.|  
|**val**|Specifies that `<Key Name>` is actually a named value.|  
|**Delete**|Deletes the next key during Register.|  
|**s**|Specifies that the next value is a string (**REG_SZ**).|  
|**d**|Specifies that the next value is a **DWORD** (**REG_DWORD**).|  
|**m**|Specifies that the next value is a multistring (**REG_MULTI_SZ**).|  
|**b**|Specifies that the next value is a binary value (**REG_BINARY**).|  
  
## BNF Syntax Examples  
 Here are a few syntax examples to help you understand how the notation and string literals work in an ATL Registrar script.  
  
### Syntax Example 1  
  
```  
<registry expression> ::= <Add Key>  
```  
  
 specifies that `registry expression` is equivalent to `Add Key`.  
  
### Syntax Example 2  
  
```  
<registry expression> ::= <Add Key> | <Delete Key>  
```  
  
 specifies that `registry expression` is equivalent to either `Add Key` or `Delete Key`.  
  
### Syntax Example 3  
  
```  
<Key Name> ::= '<AlphaNumeric>+'  
```  
  
 specifies that `Key Name` is equivalent to one or more `AlphaNumerics`.  
  
### Syntax Example 4  
  
```  
<Add Key> ::= [ForceRemove | NoRemove | val]<Key Name>  
```  
  
 specifies that `Add Key` is equivalent to `Key Name`, and that the string literals, `ForceRemove`, `NoRemove`, and `val`, are optional.  
  
### Syntax Example 5  
  
```  
<AlphaNumeric> ::= any character not NULL, that is, ASCII 0  
```  
  
 specifies that `AlphaNumeric` is equivalent to any non-NULL character.  
  
### Syntax Example 6  
  
```  
val 'testmulti' = m 'String 1\0String 2\0'  
```  
  
 specifies that the key name `testmulti` is a multistring value composed of `String 1` and `String 2`.  
  
### Syntax Example 7  
  
```  
val 'testhex' = d '&H55'  
```  
  
 specifies that the key name `testhex` is a **DWORD** value set to hexadecimal 55 (decimal 85). Note this format adheres to the **&H** notation as found in the Visual Basic specification.  
  
## See Also  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)

