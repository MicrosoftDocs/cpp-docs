---
description: "Learn more about: time_base Class"
title: "time_base Class"
ms.date: "11/04/2016"
f1_keywords: ["locale/std::time_base"]
helpviewer_keywords: ["time_base class"]
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
---
# time_base Class

The class serves as a base class for facets of class template time_get, defining just the enumerated type `dateorder` and several constants of this type.

## Syntax

```cpp
class time_base : public locale::facet {
public:
    enum dateorder {
        no_order,
        dmy,
        mdy,
        ymd,
        ydm
    };
    time_base(size_t _Refs = 0)
    ~time_base();
};
```

## Remarks

Each constant characterizes a different way to order the components of a date. The constants are:

- `no_order` specifies no particular order.

- `dmy` specifies the order day, month, then year, as in 2 December 1979.

- `mdy` specifies the order month, day, then year, as in December 2, 1979.

- `ymd` specifies the order year, month, then day, as in 1979/12/2.

- `ydm` specifies the order year, day, then month, as in 1979: 2 Dec.

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
