---
title: "alignment_of Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["type_traits/std::alignment_of"]
dev_langs: ["C++"]
helpviewer_keywords: ["alignment_of class", "alignment_of"]
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# alignment_of Class

Gets alignment of the specified type. This struct is implemented in terms of [alignof](../cpp/alignof-and-alignas-cpp.md). Use `alignof` directly when you simply need to query an alignment value. Use alignment_of when you need an integral constant, for example when doing tag dispatch.

## Syntax

```cpp
template <class Ty>
struct alignment_of;
```

### Parameters

*Ty*
 The type to query.

## Remarks

The type query holds the value of the the alignment of the type *Ty*.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[<type_traits>](../standard-library/type-traits.md)<br/>
[aligned_storage Class](../standard-library/aligned-storage-class.md)<br/>
