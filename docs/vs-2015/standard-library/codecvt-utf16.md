---
title: "codecvt_utf16 | Microsoft Docs"
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
  - "codecvt/std::codecvt_utf16"
  - "std::codecvt_utf16"
  - "std.codecvt_utf16"
  - "codecvt_utf16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_utf16 class"
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# codecvt_utf16
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [codecvt_utf16](https://docs.microsoft.com/cpp/standard-library/codecvt-utf16-class).  
  
Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.  
  
```  
template <class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>  
```  
  
### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
### Remarks  
 This template class converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE, if `Mode & little_endian`, or UTF-16BE otherwise.  
  
 The byte stream should be written to a binary file; it can be corrupted if written to a text file.  
  
## See Also  
 [\<codecvt>](../standard-library/codecvt.md)




