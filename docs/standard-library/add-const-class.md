---
description: "Learn more about: add_const Class"
title: "add_const Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::add_const"]
helpviewer_keywords: ["add_const class", "add_const"]
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
---
# add_const Class

Makes const type from type.

## Syntax

```cpp
template <class Ty>
struct add_const;
```

### Parameters

*Ty*\
The type to modify.

## Remarks

An instance of the type modifier holds a modified-type that is *Ty* if *Ty* is a reference, a function, or a const-qualified type, otherwise `const Ty`.

## Example

```cpp
// std__type_traits__add_const.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main()
{
    std::add_const<int>::type *p = (const int *)0;

    p = p;  // to quiet "unused" warning
    std::cout << "add_const<int> == "
        << typeid(*p).name() << std::endl;

    return (0);
}
```

```Output
add_const<int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](type-traits.md)\
[remove_const Class](remove-const-class.md)
