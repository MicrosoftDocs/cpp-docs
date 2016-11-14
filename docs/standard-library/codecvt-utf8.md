---
title: "codecvt_utf8 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 19
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
# codecvt_utf8
Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4, and a byte stream encoded as UTF-8.

```
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8 : public std::codecvt<Elem, char, StateType>
```

## Parameters

`Elem`  
The wide-character element type.  
`Maxcode`  
The maximum number of characters for the locale facet.  
`Mode`  
Configuration information for the locale facet.  

## Remarks

The byte stream can be written to either a binary file or a text file.  

## Requirements

Header: <codecvt> Namespace: std
