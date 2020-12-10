---
description: "Learn more about: end Function"
title: "end Function"
ms.date: "01/22/2017"
f1_keywords: ["collection/Windows::Foundation::Collections::end"]
helpviewer_keywords: ["end Function"]
ms.assetid: fb837bff-fc76-4bae-9096-facf0e03041c
---
# end Function

Returns an iterator that points beyond the end of a collection that is accessed by the specified interface parameter.

## Syntax

```

template <typename T>
    ::Platform::Collections::VectorIterator<T>
    end(
        IVector<T>^ v       );

template <typename T>
    ::Platform::Collections::VectorViewIterator<T>
    end(
        IVectorView<T>^ v
       );
template <typename T>
    ::Platform::Collections::InputIterator<T>
    end(
        IIterable<T>^ i
       );
```

#### Parameters

*T*<br/>
A template type parameter.

*v*<br/>
A collection of Vector\<T> or VectorView\<T> objects that are accessed by an IVector\<T>, or IVectorView\<T> interface.

*i*<br/>
A collection of arbitraty Windows Runtime objects that are accessed by an IIterable\<T> interface.

### Return Value

An iterator that points beyond the end of the collection.

### Remarks

The first two template functions return iterators, and the third template function returns an input iterator.

The [Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md) object that is returned by `end` is a proxy iterator that stores elements of type `VectorProxy<T>`. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

### Requirements

**Header:** collection.h

**Namespace:** Windows::Foundation::Collections

## See also

[Windows::Foundation::Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)
