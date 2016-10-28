---
title: "codecvt_utf8"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std.codecvt_utf8"
  - "std::codecvt_utf8"
  - "codecvt_utf8"
  - "codecvt/std::codecvt_utf8"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_utf8 class"
ms.assetid: 2a87478f-e2d4-4b8d-ad9c-00add01d1bb0
caps.latest.revision: 18
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
# codecvt_utf8
Represents a [locale](../stdcpplib/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4, and a byte stream encoded as UTF-8.  
  
## Syntax  
  
```  
template<  
    class Elem,  
    unsigned long Maxcode = 0x10ffff,  
    codecvt_mode Mode = (codecvt_mode)0  
>  
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Elem`|The wide-character element type.|  
|`Maxcode`|The maximum number of characters for the locale facet.|  
|`Mode`|Configuration information for the locale facet.|  
  
## Remarks  
 The byte stream can be written to either a binary file or a text file.  
  
## Requirements  
 **Header:** \<codecvt>  
  
 **Namespace:** std