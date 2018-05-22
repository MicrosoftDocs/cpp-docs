---
title: "codecvt_utf8_utf16 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "codecvt_utf8_utf16"
  - "codecvt/std::cvt_utf8_utf16"
  - "std::codecvt_utf8_utf16"
  - "std.codecvt_utf8_utf16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_utf8_utf16 class"
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# codecvt_utf8_utf16
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [codecvt_utf8_utf16](https://docs.microsoft.com/cpp/standard-library/codecvt-utf8-utf16-class).  
  
Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UTF-16 and a byte stream encoded as UTF-8.  
  
```  
template <class Elem,  unsigned long Maxcode = 0x10ffff,  codecvt_mode Mode = (codecvt_mode)0> 
class codecvt_utf8_utf16 : public std::codecvt<Elem, char, StateType>  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
### Remarks  
 The byte stream can be written to either a binary file or a text file. 



