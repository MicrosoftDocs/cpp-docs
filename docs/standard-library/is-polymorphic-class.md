---
description: "Learn more about: is_polymorphic Class"
title: "is_polymorphic Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::is_polymorphic"]
helpviewer_keywords: ["is_polymorphic class", "is_polymorphic"]
ms.assetid: 4e1704db-d6f9-4154-a100-0ba02a373f20
---
# is_polymorphic Class

Tests if type has a virtual function.

## Syntax

```cpp
template <class Ty>
struct is_polymorphic;
```

### Parameters

*Ty*\
The type to query.

## Remarks

An instance of the type predicate holds true if the type *Ty* is a class that declares or inherits a virtual function, otherwise it holds false.

## Example

```cpp
// std__type_traits__is_polymorphic.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

struct trivial
    {
    int val;
    };

struct throws
    {
    throws() throw(int)
        {
        }

    throws(const throws&) throw(int)
        {
        }

    throws& operator=(const throws&) throw(int)
        {
        }

    virtual ~throws()
        {
        }

    int val;
    };

int main()
    {
    std::cout << "is_polymorphic<trivial> == " << std::boolalpha
        << std::is_polymorphic<trivial>::value << std::endl;
    std::cout << "is_polymorphic<throws> == " << std::boolalpha
        << std::is_polymorphic<throws>::value << std::endl;

    return (0);
    }
```

```Output
is_polymorphic<trivial> == false
is_polymorphic<throws> == true
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)\
[is_abstract Class](../standard-library/is-abstract-class.md)
