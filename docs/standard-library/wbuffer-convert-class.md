---
description: "Learn more about: wbuffer_convert Class"
title: "wbuffer_convert Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocmon/stdext::cvt::wbuffer_convert"]
helpviewer_keywords: ["wbuffer_convert class"]
ms.assetid: 4a56f9bf-4138-4612-b516-525fea401358
---
# wbuffer_convert Class

Describes a stream buffer that controls the transmission of elements to and from a byte stream buffer.

## Syntax

```cpp
template <class Codecvt, class Elem = wchar_t, class Traits = std::char_traits<Elem>>
class wbuffer_convert
    : public std::basic_streambuf<Elem, Traits>
```

### Parameters

*Codecvt*\
The [locale](../standard-library/locale-class.md) facet that represents the conversion object.

*Elem*\
The wide-character element type.

*Traits*\
The traits associated with *Elem*.

## Remarks

This class template describes a stream buffer that controls the transmission of elements of type `_Elem`, whose character traits are described by the class `Traits`, to and from a byte stream buffer of type `std::streambuf`.

Conversion between a sequence of `Elem` values and multibyte sequences is performed by an object of class `Codecvt<Elem, char, std::mbstate_t>`, which meets the requirements of the standard code-conversion facet `std::codecvt<Elem, char, std::mbstate_t>`.

An object of this class template stores:

- A pointer to its underlying byte stream buffer

- A pointer to the allocated conversion object (which is freed when the [wbuffer_convert](../standard-library/wbuffer-convert-class.md)
