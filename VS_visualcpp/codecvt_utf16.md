---
title: "codecvt_utf16"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
caps.latest.revision: 19
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# codecvt_utf16
Represents a [locale](../VS_visualcpp/locale-Class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.  
  
## Syntax  
  
```  
template<  
    class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0  
>  
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
## Remarks  
 This template class converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE, if `Mode & little_endian`, or UTF-16BE otherwise.  
  
 The byte stream should be written to a binary file; it can be corrupted if written to a text file.  
  
## Requirements  
 **Header:** <codecvt\>  
  
 **Namespace:** std