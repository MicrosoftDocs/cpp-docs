---
description: "Learn more about: codecvt_byname Class"
title: "codecvt_byname Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocale/std::codecvt_byname"]
helpviewer_keywords: ["codecvt_byname class"]
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
---
# codecvt_byname Class

A derived class template that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning conversions.

## Syntax

```cpp
template <class CharType, class Byte, class StateType>
class codecvt_byname: public codecvt<CharType, Byte, StateType> {
public:
    explicit codecvt_byname(
    const char* _Locname,
    size_t _Refs = 0);
```

```cpp
explicit codecvt_byname(
    const string& _Locname,
    size_t _Refs = 0);
```

```cpp
protected:
    virtual ~codecvt_byname();

};
```

### Parameters

*_Locname*\
A named locale.

*_Refs*\
An initial reference count.

## Remarks

Byname facets are automatically created when a named locale is constructed.

Its behavior is determined by the named locale *_Locname*. Each constructor initializes its base object with [codecvt](../standard-library/codecvt-class.md)\<CharType, Byte, StateType>( `_Refs`).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
