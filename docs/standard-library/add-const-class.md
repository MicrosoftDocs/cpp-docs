---
title: "add_const Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::add_const"]
dev_langs: ["C++"]
helpviewer_keywords: ["add_const class", "add_const"]
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# add_const Class

Makes const type from type.

## Syntax

```cpp
template <class Ty>
struct add_const;
```

### Parameters

*Ty*<br/>
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

[<type_traits>](../standard-library/type-traits.md)<br/>
[remove_const Class](../standard-library/remove-const-class.md)<br/>
