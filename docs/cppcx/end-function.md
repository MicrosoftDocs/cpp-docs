---
description: "Learn more about: end Function"
title: "end Function"
ms.date: 09/27/2022
f1_keywords: ["collection/Windows::Foundation::Collections::end"]
helpviewer_keywords: ["end Function"]
ms.assetid: fb837bff-fc76-4bae-9096-facf0e03041c
---
# `end` function

Returns an iterator that points beyond the end of a collection that is accessed by the specified interface parameter.

## Syntax

```cpp
template <typename T>
    ::Platform::Collections::VectorIterator<T>
    end(IVector<T>^ v);

template <typename T>
    ::Platform::Collections::VectorViewIterator<T>
    end(IVectorView<T>^ v);
template <typename T>
    ::Platform::Collections::InputIterator<T>
    end(IIterable<T>^ i);
```

### Parameters

*`T`*\
A template type parameter.

*`v`*\
A collection of `Vector<T>` or `VectorView<T>` objects that are accessed by an `IVector<T>`, or `IVectorView<T>` interface.

*`i`*\
A collection of arbitrary Windows Runtime objects that are accessed by an `IIterable<T>` interface.

## Return Value

An iterator that points beyond the end of the collection.

## Remarks

The first two function templates return iterators, and the third function template returns an input iterator.

The [`Platform::Collections::VectorViewIterator`](../cppcx/platform-collections-vectorviewiterator-class.md) object that is returned by `end` is a proxy iterator that stores elements of type `VectorProxy<T>`. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

## Requirements

**Header:** collection.h

**Namespace:** `Windows::Foundation::Collections`

## See also

[`Windows::Foundation::Collections` Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)
