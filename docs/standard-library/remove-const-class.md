---
title: "remove_const Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::remove_const"]
dev_langs: ["C++"]
helpviewer_keywords: ["remove_const class", "remove_const"]
ms.assetid: feb76fb3-9228-41d6-80f6-2fbb04daec43
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# remove_const Class

Makes a non const type from type.

## Syntax

```cpp
template <class T>
struct remove_const;
```

```cpp
template <class T>
using remove_const_t = typename remove_const<T>::type;
```

### Parameters

*T*
 The type to modify.

## Remarks

An instance of `remove_const<T>` holds a modified-type that is `T1` when *T* is of the form `const T1`, otherwise *T*.

## Example

```cpp
#include <type_traits>
#include <iostream>

int main()
    {
    int *p = (std::remove_const_t<const int>*)0;

    p = p;  // to quiet "unused" warning
    std::cout << "remove_const_t<const int> == "
        << typeid(*p).name() << std::endl;

    return (0);
    }
```

```Output
remove_const_t<const int> == int
```

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[add_const Class](../standard-library/add-const-class.md)<br/>
[remove_cv Class](../standard-library/remove-cv-class.md)<br/>
