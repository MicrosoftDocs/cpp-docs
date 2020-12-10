---
description: "Learn more about: time_put_byname Class"
title: "time_put_byname Class"
ms.date: "11/04/2016"
f1_keywords: ["xloctime/std::time_put_byname"]
helpviewer_keywords: ["time_put_byname class"]
ms.assetid: e08c2348-64d2-4ace-98b1-1496e14c7b1a
---
# time_put_byname Class

The derived class template describes an object that can serve as a locale facet of type `time_put`\< CharType, OutputIterator >.

## Syntax

```cpp
template <class CharType, class OutIt = ostreambuf_iterator<CharType, char_traits<CharType>>>
class time_put_byname : public time_put<CharType, OutputIterator>
{
public:
    explicit time_put_byname(
    const char* _Locname,
    size_t _Refs = 0);

    explicit time_put_byname(
    const string& _Locname,
    size_t _Refs = 0);

protected:
    virtual ~time_put_byname();

};
```

### Parameters

*_Locname*\
A locale name.

*_Refs*\
An initial reference count.

## Remarks

Its behavior is determined by the [named](../standard-library/locale-class.md#name) locale *_Locname*. Each constructor initializes its base object with [time_put](../standard-library/time-put-class.md#time_put)\<CharType, OutputIterator>(`_Refs`).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
