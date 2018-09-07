---
title: "moneypunct_byname Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["xlocmon/std::moneypunct_byname"]
dev_langs: ["C++"]
helpviewer_keywords: ["moneypunct_byname class"]
ms.assetid: e8a544d2-6aee-420d-b513-deb385c9b416
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# moneypunct_byname Class

A derived template class that describes an object that can serve as a `moneypunct` facet of a given locale, enabling the formatting monetary input field or monetary output fields.

## Syntax

```cpp
template <class CharType, bool Intl = false>
class moneypunct_byname : public moneypunct<CharType, Intl>
{
public:
    explicit moneypunct_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit moneypunct_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~moneypunct_byname();

};
```

## Remarks

Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [moneypunct](../standard-library/moneypunct-class.md#moneypunct)\<CharType, Intl>( `_Refs`).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
