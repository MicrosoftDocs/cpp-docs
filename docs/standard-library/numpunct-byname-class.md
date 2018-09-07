---
title: "numpunct_byname Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xlocnum/std::numpunct_byname"]
dev_langs: ["C++"]
helpviewer_keywords: ["numpunct_byname class"]
ms.assetid: 18412924-e085-4771-b5e9-7a200cbdd7c0
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# numpunct_byname Class

The derived template class describes an object that can serve as a `numpunct` facet of a given locale enabling the formatting and punctuation of numeric and Boolean expressions.

## Syntax

```cpp
template <class CharType>
class numpunct_byname : public numpunct<Elem> {
public:
    explicit numpunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit numpunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~numpunct_byname();

};
```

## Remarks

Its behavior is determined by the [named](../standard-library/locale-class.md#name) locale `_Locname`. The constructor initializes its base object with [numpunct](../standard-library/numpunct-class.md#numpunct)\<CharType>( `_Refs`).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
