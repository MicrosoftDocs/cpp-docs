---
description: "Learn more about: codecvt_utf8_utf16"
title: "codecvt_utf8_utf16"
ms.date: "11/04/2016"
f1_keywords: ["codecvt/std::cvt_utf8_utf16"]
helpviewer_keywords: ["codecvt_utf8_utf16 class"]
ms.assetid: 4c12c881-5dba-4e39-b338-0b9caff5af29
---
# codecvt_utf8_utf16

Represents a [locale](../standard-library/locale-class.md) facet that converts between wide characters encoded as UTF-16 and a byte stream encoded as UTF-8.

```cpp
template<class Elem, unsigned long Maxcode = 0x10ffff, codecvt_mode Mode = (codecvt_mode)0>
class codecvt_utf8_utf16 : public _STD codecvt<Elem, char, StateType>
```

## Parameters

*Elem*\
The wide-character element type.

*Maxcode*\
The maximum number of characters for the locale facet.

*Mode*\
Configuration information for the locale facet.

## Remarks

The byte stream can be written to either a binary file or a text file.

## Requirements

Header: \<codecvt>

Namespace: std
