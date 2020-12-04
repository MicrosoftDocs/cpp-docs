---
description: "Learn more about: ctype_byname Class"
title: "ctype_byname Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocale/std::ctype_byname"]
helpviewer_keywords: ["ctype_byname class"]
ms.assetid: a5cec021-a1f8-425f-8757-08e6f064b604
---
# ctype_byname Class

The derived class template describes an object that can serve as a ctype facet of a given locale, enabling the classification of characters and conversion of characters between case and native and locale specified character sets.

## Syntax

```cpp
template <class _Elem>
class ctype_byname : public ctype<_Elem>
{
public:
    explicit ctype_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit ctype_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual __CLR_OR_THIS_CALL ~ctype_byname();

};
```

## Remarks

Its behavior is determined by the named locale `_Locname`. Each constructor initializes its base object with [ctype](../standard-library/ctype-class.md)\<CharType>( `_Refs`) or the equivalent for base class `ctype<char>`.

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
