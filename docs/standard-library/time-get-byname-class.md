---
description: "Learn more about: time_get_byname Class"
title: "time_get_byname Class"
ms.date: "11/04/2016"
f1_keywords: ["xloctime/std::time_get_byname"]
helpviewer_keywords: ["time_get_byname class"]
ms.assetid: 6e54153e-da40-4bb9-a942-1a6ce57b30c9
---
# time_get_byname Class

The derived class template describes an object that can serve as a locale facet of type `time_get`\<CharType, InputIterator>.

## Syntax

```cpp
template <class Elem, class InputIterator =
    istreambuf_iterator<CharType, char_traits<CharType>>>
class time_get_byname : public time_get<CharType, InputIterator>
{
public:
    explicit time_get_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_get_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_get_byname()
};
```

### Parameters

*_Locname*\
A named locale.

*_Refs*\
An initial reference count.

## Requirements

Its behavior is determined by the named locale *_Locname*. Each constructor initializes its base object with [time_get](../standard-library/time-get-class.md#time_get)\<CharType, InputIterator>( `_Refs`).

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
