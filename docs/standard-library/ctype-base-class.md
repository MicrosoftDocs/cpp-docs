---
description: "Learn more about: ctype_base Class"
title: "ctype_base Class"
ms.date: "11/04/2016"
f1_keywords: ["locale/std::ctype_base"]
helpviewer_keywords: ["ctype_base class"]
ms.assetid: ccffe891-d7ab-4d22-baf8-8eb6d438a96d
---
# ctype_base Class

The class serves as a base class for facets of class template [ctype](../standard-library/ctype-class.md). A base class for the ctype class that is used to define enumeration types used to classify or test characters either individually or within entire ranges.

## Syntax

```cpp
struct ctype_base : public locale::facet
{
    enum
    {
        alnum,
        alpha,
        cntrl,
        digit,
        graph,
        lower,
        print,
        punct,
        space,
        upper,
        xdigit
    };
    typedef short mask;

    ctype_base( size_t _Refs = 0 );
    ~ctype_base();
};
```

## Remarks

It defines an enumeration mask. Each enumeration constant characterizes a different way to classify characters, as defined by the functions with similar names declared in the header \<ctype.h>. The constants are:

- **space** (function [isspace](../standard-library/locale-functions.md#isspace))

- **print** (function [isprint](../standard-library/locale-functions.md#isprint))

- **cntrl** (function [iscntrl](../standard-library/locale-functions.md#iscntrl))

- **upper** (function [isupper](../standard-library/locale-functions.md#isupper))

- **lower** (function [islower](../standard-library/locale-functions.md#islower))

- **digit** (function [isdigit](../standard-library/locale-functions.md#isdigit))

- **punct** (function [ispunct](../standard-library/locale-functions.md#ispunct))

- **xdigit** (function [isxdigit](../standard-library/locale-functions.md#isxdigit))

- **alpha** (function [isalpha](../standard-library/locale-functions.md#isalpha))

- **alnum** (function [isalnum](../standard-library/locale-functions.md#isalnum))

- **graph** (function [isgraph](../standard-library/locale-functions.md#isgraph))

You can characterize a combination of classifications by ORing these constants. In particular, it is always true that **alnum** == ( **alpha** &#124; **digit**\) and **graph** \=\= \( **alnum** &#124; **punct**).

## Requirements

**Header:** \<locale>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
