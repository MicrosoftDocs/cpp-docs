---
description: "Learn more about: codecvt_base Class"
title: "codecvt_base Class"
ms.date: "11/04/2016"
f1_keywords: ["xlocale/std::codecvt_base"]
helpviewer_keywords: ["codecvt_base class"]
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
---
# codecvt_base Class

A base class for the codecvt class that is used to define an enumeration type referred to as `result`, used as the return type for the facet member functions to indicate the result of a conversion.

## Syntax

```cpp
class codecvt_base : public locale::facet {
public:
    enum result {ok, partial, error, noconv};
    codecvt_base( size_t _Refs = 0);
    bool always_noconv() const;
    int max_length() const;
    int encoding() const;
    ~codecvt_base()

protected:
    virtual bool do_always_noconv() const;
    virtual int do_max_length() const;
    virtual int do_encoding() const;
};
```

## Remarks

The class describes an enumeration common to all specializations of class template [codecvt](../standard-library/codecvt-class.md). The enumeration result describes the possible return values from [do_in](../standard-library/codecvt-class.md#do_in) or [do_out](../standard-library/codecvt-class.md#do_out):

- `ok` if the conversion between internal and external character encodings succeeds.

- `partial` if the destination is not large enough for the conversion to succeed.

- `error` if the source sequence is ill formed.

- `noconv` if the function performs no conversion.

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
