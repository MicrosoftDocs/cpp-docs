---
description: "Learn more about: to_vector Function"
title: "to_vector Function"
ms.date: "12/30/2016"
f1_keywords: ["collection/Windows::Foundation::Collections::to_vector"]
helpviewer_keywords: ["to_vector Function"]
ms.assetid: 9cdd5123-7243-4def-a1d3-162e0bf6219e
---
# to_vector Function

Returns a `std::vector` whose value is the same as the collection underlying the specified IVector or IVectorView parameter.

## Syntax

```
template <typename T>
inline ::std::vector<T> to_vector(IVector<T>^ v);

template <typename T>
inline ::std::vector<T> to_vector(IVectorView<T>^ v);
```

#### Parameters

*T*<br/>
The template type parameter.

*v*<br/>
An IVector or IVectorView interface that provides access to an underlying Vector or VectorView object.

### Return Value

### Requirements

**Header:** collection.h

**Namespace:** Windows::Foundation::Collections

## See also

[Windows::Foundation::Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)
