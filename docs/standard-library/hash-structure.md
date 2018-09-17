---
title: "hash Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["typeindex/std::hash"]
dev_langs: ["C++"]
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# hash Structure

The template class defines its method as returning `val.hash_code()`. The method defines a hash function that is used to map values of type [type_index](../standard-library/type-index-class.md) to a distribution of index values.

## Syntax

```cpp
template <>
struct hash<type_index>
: public unary_function<type_index, size_t>
{ // hashes a typeinfo object
    size_t operator()(type_index val) const;

};
```

## See also

[\<typeindex>](../standard-library/typeindex.md)<br/>
