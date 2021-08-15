---
description: "Learn more about: alignment_of Class"
title: "alignment_of Class"
ms.date: "12/11/2019"
f1_keywords: ["type_traits/std::alignment_of"]
helpviewer_keywords: ["alignment_of class", "alignment_of"]
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
---
# alignment_of Class

Gets alignment of the specified type. This struct is implemented in terms of [`alignof`](../cpp/alignment-cpp-declarations.md). Use **`alignof`** directly when you simply need to query an alignment value. Use `alignment_of` when you need an integral constant, for example when doing tag dispatch.

## Syntax

```cpp
template <class Ty>
struct alignment_of;
```

### Parameters

*Ty*\
The type to query.

## Remarks

The type query holds the value of the alignment of the type *Ty*.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

[`<type_traits>`](type-traits.md)\
[`aligned_storage` Class](aligned-storage-class.md)
