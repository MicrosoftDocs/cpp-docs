---
title: "alignment_of Class"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::alignment_of"]
helpviewer_keywords: ["alignment_of class", "alignment_of"]
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
---
# alignment_of Class

Gets alignment of the specified type. This struct is implemented in terms of [alignof](../cpp/alignof-and-alignas-cpp.md). Use `alignof` directly when you simply need to query an alignment value. Use alignment_of when you need an integral constant, for example when doing tag dispatch.

## Syntax

```cpp
template <class Ty>
struct alignment_of;
```

### Parameters

*Ty*<br/>
The type to query.

## Remarks

The type query holds the value of the alignment of the type *Ty*.

## Requirements

**Header:** \<type_traits>

**Namespace:** std

## See also

- [<type_traits>](../standard-library/type-traits.md)
- [aligned_storage Class](../standard-library/aligned-storage-class.md)
