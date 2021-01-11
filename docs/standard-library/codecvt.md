---
description: "Learn more about: &lt;codecvt&gt;"
title: "&lt;codecvt&gt;"
ms.date: "11/04/2016"
f1_keywords: ["codecvt", "<codecvt>"]
helpviewer_keywords: ["codecvt header"]
ms.assetid: d44ee229-00d5-4761-9b48-0c702122789d
---
# &lt;codecvt&gt;

Defines several class templates that describe objects based on class template [codecvt](../standard-library/codecvt-class.md). These objects can serve as [locale facets](../standard-library/locale-class.md#facet_class) that control conversions between a sequence of values of type `Elem` and a sequence of values of type **`char`**.

## Syntax

```cpp
#include <codecvt>
```

## Remarks

The locale facets declared in this header convert between several character encodings. For wide characters (stored within the program in fixed-size integers):

- UCS-4 is Unicode (ISO 10646) encoded within the program as a 32-bit integer.

- UCS-2 is Unicode encoded within the program as a 16-bit integer.

- UTF-16 is Unicode encoded within the program as either one or two 16-bit integers. (Note that this does not meet all the requirements of a valid wide-character encoding for Standard C or Standard C++. Nevertheless it is widely used as such.)

For byte streams (stored in a file, transmitted as a byte sequence, or stored within the program in an array of **`char`**):

- UTF-8 is Unicode encoded within a byte stream as one or more eight-bit bytes with a deterministic byte order.

- UTF-16LE is Unicode encoded within a byte stream as UTF-16 with each 16-bit integer presented as two eight-bit bytes, less significant byte first.

- UTF-16BE is Unicode encoded within a byte stream as UTF-16 with each 16-bit integer presented as two eight-bit bytes, more significant byte first.

### Enumerations

|Name|Description|
|-|-|
|[codecvt_mode](../standard-library/codecvt-enums.md#codecvt_mode)|Specifies configuration information for locale facets.|

### Classes

|Class|Description|
|-|-|
|[codecvt_utf8](codecvt-utf8-class.md)|Represents a locale facet that converts between wide characters encoded as UCS-2 or UCS-4, and a byte stream encoded as UTF-8.|
|[codecvt_utf8_utf16](codecvt-utf8-utf16-class.md)|Represents a locale facet that converts between wide characters encoded as UTF-16 and a byte stream encoded as UTF-8.|
|[codecvt_utf16](codecvt-utf16-class.md)|Represents a locale facet that converts between wide characters encoded as UCS-2 or UCS-4 and a byte stream encoded as UTF-16LE or UTF-16BE.|

## Requirements

**Header:** \<codecvt>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
