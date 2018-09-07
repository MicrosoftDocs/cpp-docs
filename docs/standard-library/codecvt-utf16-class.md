---
title: "codecvt_utf16 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["codecvt/std::codecvt_utf16"]
dev_langs: ["C++"]
helpviewer_keywords: ["codecvt_utf16 class"]
ms.assetid: a9897f98-f84d-4db6-90ad-858b2727570c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# codecvt_utf16

Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf16 : public std::codecvt<Elem, char, StateType>
```

## Parameters

*Elem*<br/>
The wide-character element type.
*Maxcode*<br/>
The maximum number of characters for the locale facet.
*Mode*<br/>
Configuration information for the locale facet.

## Remarks

This template class converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE, if Mode & little_endian, or UTF-16BE otherwise.

The byte stream should be written to a binary file; it can be corrupted if written to a text file.

## Requirements

Header: \<codecvt>
Namespace: std