---
title: "collate_byname Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["locale/std::collate_byname"]
dev_langs: ["C++"]
helpviewer_keywords: ["collate_byname class"]
ms.assetid: 3dc380df-867c-4763-b60e-ba62a8e63ca7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# collate_byname Class

A derived template class that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning string sorting conventions.

## Syntax

```cpp
template <class CharType>
class collate_byname : public collate<CharType> {
public:
    explicit collate_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit collate_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~collate_byname();

};
```

### Parameters

*_Locname*<br/>
A named locale.

*_Refs*<br/>
An initial reference count.

## Remarks

The template class describes an object that can serve as a [locale facet](../standard-library/locale-class.md#facet_class) of type [collate](../standard-library/collate-class.md#collate)\<CharType>. Its behavior is determined by the [named](../standard-library/locale-class.md#name) locale *_Locname*. Each constructor initializes its base object with [collate](../standard-library/collate-class.md#collate)\<CharType>( `_Refs`).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
