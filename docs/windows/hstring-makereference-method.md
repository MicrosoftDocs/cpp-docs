---
title: "HString::MakeReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::MakeReference"]
dev_langs: ["C++"]
ms.assetid: 9e1fd2b2-66ad-4a50-b647-a20ab10e522f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::MakeReference Method

Creates an `HStringReference` object from a specified string parameter.

## Syntax

```cpp
template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[ sizeDest]);

    template<unsigned int sizeDest>
    static HStringReference MakeReference(
              wchar_t const (&str)[sizeDest],
              unsigned int len);
```

### Parameters

*sizeDest*  
A template parameter that specifies the size of the destination `HStringReference` buffer.

*str*  
A reference to a wide-character string.

*len*  
The maximum length of the *str* parameter buffer to use in this operation. If the *len* parameter isn't specified, the entire *str* parameter is used.

## Return Value

An `HStringReference` object whose value is the same as the specified *str* parameter.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HString Class](../windows/hstring-class.md)