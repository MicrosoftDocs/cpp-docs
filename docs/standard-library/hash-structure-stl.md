---
title: "hash Structure (C++ Standard Library)| Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["thread/std::hash"]
dev_langs: ["C++"]
ms.assetid: 4a8bf5bc-4334-4070-936b-98585f8a073b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# hash Structure (C++ Standard Library)

Defines a member function that returns a value that's uniquely determined by `Val`. The member function defines a [hash](../standard-library/hash-class.md) function that's suitable for mapping values of type `thread::id` to a distribution of index values.

## Syntax

```cpp
template <>
struct hash<thread::id> :
    public unary_function<thread::id, size_t>
{
    size_t operator()(thread::id Val) const;


};
```

## Requirements

**Header:** \<thread>

**Namespace:** std

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<thread>](../standard-library/thread.md)<br/>
[unary_function Struct](../standard-library/unary-function-struct.md)<br/>
