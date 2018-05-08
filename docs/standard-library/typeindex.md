---
title: "&lt;typeindex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<typeindex>"]
dev_langs: ["C++"]
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;typeindex&gt;

Include the standard header \<typeindex> to define a class and function that support the indexing of objects of class [type_info](../cpp/type-info-class.md).

## Syntax

```cpp
#include <typeindex>
```

## Remarks

The [hash Structure](../standard-library/hash-structure.md) defines a `hash function` that's suitable for mapping values of type [type_index](../standard-library/type-index-class.md) to a distribution of index values.

The `type_index` class wraps a pointer to a `type_info` object to assist in indexing.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)<br/>
