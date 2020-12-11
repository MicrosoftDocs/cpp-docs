---
description: "Learn more about: &lt;codecvt&gt; enums"
title: "&lt;codecvt&gt; enums"
ms.date: "11/04/2016"
f1_keywords: ["codecvt/std::codecvt_mode"]
ms.assetid: 46a8b073-01bc-46d3-b3d3-a8540f9422c1
helpviewer_keywords: ["std::codecvt_mode"]
---
# &lt;codecvt&gt; enums

## <a name="codecvt_mode"></a> codecvt_mode Enumeration

Specifies configuration information for [locale](../standard-library/locale-class.md) facets.

```cpp
enum codecvt_mode {
    consume_header = 4,
    generate_header = 2,
    little_endian = 1
};
```

### Remarks

The enumeration defines three constants that supply configuration information to the locale facets declared in [\<codecvt>](../standard-library/codecvt.md). The distinct values are:

- `consume_header`, to consume an initial header sequence when reading a multibyte sequence and determine the endianness of the subsequent multibyte sequence to be read

- `generate_header`, to generate an initial header sequence when writing a multibyte sequence to advertise the endianness of the subsequent multibyte sequence to be written

- `little_endian`, to generate a multibyte sequence in little-endian order, as opposed to the default big-endian order

These constants can be ORed together in arbitrary combinations.

## See also

[\<codecvt>](../standard-library/codecvt.md)
