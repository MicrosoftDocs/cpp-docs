---
description: "Learn more about: codecvt_byname class"
title: "codecvt_byname class"
ms.date: 06/29/2022
f1_keywords: ["xlocale/std::codecvt_byname"]
helpviewer_keywords: ["codecvt_byname class"]
ms.assetid: b63b6c04-f60c-47b9-8e30-a933f24a8ffb
---
# `codecvt_byname` class

A derived class template that describes an object that can serve as a collate facet of a given locale, enabling the retrieval of information specific to a cultural area concerning conversions.

## Syntax

```cpp
template <class CharType, class Byte, class StateType>
class codecvt_byname: public codecvt<CharType, Byte, StateType> {
public:
    explicit codecvt_byname(
    const char* locale_name,
    size_t ref_count = 0);

explicit codecvt_byname(
    const string& locale_name,
    size_t ref_count = 0);

protected:
    virtual ~codecvt_byname();

};
```

### Parameters

*`locale_name`*\
A named locale.

*`ref_count`*\
An initial reference count.

## Remarks

`byname` facets are automatically created when a named locale is constructed.

Its behavior is determined by the named locale *`locale_name`*. Each constructor initializes its base object by using `codecvt<CharType, Byte, StateType>( ref_count )`. For more information, see [`codecvt`](../standard-library/codecvt-class.md).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
