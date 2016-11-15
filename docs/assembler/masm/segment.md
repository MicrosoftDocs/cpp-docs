---
title: "SEGMENT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SEGMENT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SEGMENT directive"
ms.assetid: e6f68367-6714-4f06-a79c-edfa88014430
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
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
# SEGMENT
Defines a program segment called *name* having segment attributes  
  
## Syntax  
  
```  
  
   name SEGMENT [[READONLY]] [[align]] [[combine]] [[use]] [[characteristics]] ALIAS(string) [['class']]  
statements  
name ENDS  
```  
  
#### Parameters  
 *align*  
 The range of memory addresses from which a starting address for the segment can be selected. The alignment type can be any one of the following:  
  
|Align Type|Starting Address|  
|----------------|----------------------|  
|**BYTE**|Next available byte address.|  
|**WORD**|Next available word address (2 bytes per word).|  
|**DWORD**|Next available double word address (4 bytes per double word).|  
|**PARA**|Next available paragraph address (16 bytes per paragraph).|  
|**PAGE**|Next available page address (256 bytes per page).|  
|**ALIGN**(*n*)|Next available *n*th byte address. See Remarks section for more information.|  
  
 If this parameter is not specified, **PARA** is used by default.  
  
 *combine*  
 **PUBLIC**, **STACK**, **COMMON**, **MEMORY**, **AT***address*, **PRIVATE**  
  
 *use*  
 **USE16**, **USE32**, **FLAT**  
  
 `characteristics`  
 **INFO**, **READ**, **WRITE**, **EXECUTE**, **SHARED**, **NOPAGE**, **NOCACHE**, and **DISCARD**  
  
 These are supported for COFF only and correspond to the COFF section characteristics of similar name (for example, **SHARED** corresponds to IMAGE_SCN_MEM_SHARED). READ sets the IMAGE_SCN_MEM_READ flag. The obsolete READONLY flag caused the section to clear the IMG_SCN_MEM_WRITE flag. If any `characteristics` are set, the default characteristics are not used and only the programmer-specified flags are in effect.  
  
 `ALIAS(` `string` `)`  
 This string is used as the section name in the emitted COFF object.  Creates multiple sections with the same external name, with distinct MASM segment names.  
  
 Not supported with **/omf**.  
  
 `class`  
 Designates how segments should be combined and ordered in the assembled file. Typical values are, `'DATA'`, `'CODE'`, `'CONST'` and `'STACK'`  
  
## Remarks  
 For `ALIGN(``n``)`, `n` may be any power of 2 from 1 to 8192; not supported with **/omf**.  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)