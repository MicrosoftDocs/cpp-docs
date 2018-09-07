---
title: "bad_weak_ptr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["memory/std::bad_weak_ptr"]
dev_langs: ["C++"]
helpviewer_keywords: ["bad_weak_ptr", "bad_weak_ptr class"]
ms.assetid: a09336d5-7237-4480-ab6b-3787e0e6025e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# bad_weak_ptr Class

Reports bad weak_ptr exception.

## Syntax

```cpp
class bad_weak_ptr : public std::exception
 {
public:
    bad_weak_ptr();
    const char *what() throw();
 };
```

## Remarks

The class describes an exception that can be thrown from the [shared_ptr Class](../standard-library/shared-ptr-class.md) constructor that takes an argument of type [weak_ptr Class](../standard-library/weak-ptr-class.md). The member function `what` returns `"bad_weak_ptr"`.

## Example

```cpp
// std__memory__bad_weak_ptr.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int);
        wp = sp;
    }

    try
    {
        std::shared_ptr<int> sp1(wp); // weak_ptr has expired
    }
    catch (const std::bad_weak_ptr&)
    {
        std::cout << "bad weak pointer" << std::endl;
    }
    catch (...)
    {
        std::cout << "unknown exception" << std::endl;
    }

    return (0);
}
```

```Output
bad weak pointer
```

## Requirements

**Header:** \<memory>

**Namespace:** std

## See also

[weak_ptr Class](../standard-library/weak-ptr-class.md)<br/>
