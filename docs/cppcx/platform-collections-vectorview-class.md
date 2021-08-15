---
description: "Learn more about: Platform::Collections::VectorView Class"
title: "Platform::Collections::VectorView Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::VectorView::VectorView", "COLLECTION/Platform::Collections::VectorView::First", "COLLECTION/Platform::Collections::VectorView::GetAt", "COLLECTION/Platform::Collections::VectorView::GetMany", "COLLECTION/Platform::Collections::VectorView::IndexOf", "COLLECTION/Platform::Collections::VectorView::Size"]
helpviewer_keywords: ["VectorView Class"]
ms.assetid: 05cd461d-dce7-49d3-b0e7-2e5c78ed8192
---
# Platform::Collections::VectorView Class

Represents a read-only view of a sequential collection of objects that can be individually accessed by index. The type of each object in the collection is specified by the template parameter.

## Syntax

```
template <typename T, typename E>
   ref class VectorView sealed;
```

#### Parameters

*T*<br/>
The type of the elements contained in the `VectorView` object.

*E*<br/>
Specifies a binary predicate for testing equality with values of type `T`. The default value is `std::equal_to<T>`.

### Remarks

The `VectorView` class implements the [Windows::Foundation::Collections::IVectorView\<T>](/uwp/api/windows.foundation.collections.ivectorview-1) interface, and support for Standard Template Library iterators.

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[VectorView::VectorView](#ctor)|Initializes a new instance of the VectorView class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[VectorView::First](#first)|Returns an iterator that specifies the first element in the VectorView.|
|[VectorView::GetAt](#getat)|Retrieves the element of the current VectorView that is indicated by the specified index.|
|[VectorView::GetMany](#getmany)|Retrieves a sequence of items from the current VectorView, starting at the specified index.|
|[VectorView::IndexOf](#indexof)|Searches for the specified item in the current VectorView, and if found, returns the index of the item.|
|[VectorView::Size](#size)|Returns the number of elements in the current VectorView object.|

## Inheritance Hierarchy

`VectorView`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="first"></a> VectorView::First Method

Returns an iterator that specifies the first element in the VectorView.

### Syntax

```

virtual Windows::Foundation::Collections::IIterator<T>^
   First();
```

### Return Value

An iterator that specifies the first element in the VectorView.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myVectorView->First();`.

## <a name="getat"></a> VectorView::GetAt Method

Retrieves the element of the current VectorView that is indicated by the specified index.

### Syntax

```

T GetAt(
   UInt32 index
);
```

### Parameters

*index*<br/>
A zero-based, unsigned integer that specifies a particular element in the VectorView object.

### Return Value

The element specified by the `index` parameter. The element type is specified by the VectorView template parameter, *T*.

## <a name="getmany"></a> VectorView::GetMany Method

Retrieves a sequence of items from the current VectorView, starting at the specified index.

### Syntax

```

virtual unsigned int GetMany(
   unsigned int startIndex,
   ::Platform::WriteOnlyArray<T>^ dest
);
```

### Parameters

*startIndex*<br/>
The zero-based index of the start of the items to retrieve.

*dest*<br/>
When this operation completes, an array of items that begin at the element specified by `startIndex` and end at the last element in the VectorView.

### Return Value

The number of items retrieved.

## <a name="indexof"></a> VectorView::IndexOf Method

Searches for the specified item in the current VectorView, and if found, returns the index of the item.

### Syntax

```

virtual bool IndexOf(
   T value,
   unsigned int* index
);
```

### Parameters

*value*<br/>
The item to find.

*index*<br/>
The zero-based index of the item if parameter `value` is found; otherwise, 0.

The *index* parameter is 0 if either the item is the first element of the `VectorView` or the item was not found. If the return value is **`true`**, the item was found and it is the first element; otherwise, the item was not found.

### Return Value

**`true`** if the specified item is found; otherwise, **`false`**.

## <a name="size"></a> VectorView::Size Method

Returns the number of elements in the current VectorView object.

### Syntax

```

virtual property unsigned int Size;
```

### Return Value

The number of elements in the current VectorView.

## <a name="ctor"></a> VectorView::VectorView Constructor

Initializes a new instance of the VectorView class.

### Syntax

```
VectorView();
explicit VectorView(
   UInt32 size
);
VectorView(
   UInt32 size,
   T value
);
explicit VectorView(
   const ::std::vector<T>& v
);
explicit VectorView(
   ::std::vector<T>&& v
);
VectorView(
   const T * ptr,
   UInt32 size
);

template <
   size_t N
>
explicit VectorView(
   const T (&arr)[N]
);

template <
   size_t N
>
explicit VectorView(
   const ::std::array<T,
   N>& a
);

explicit VectorView(
   const ::Platform::Array<T>^ arr
);

template <
   typename InIt
>
VectorView(
   InItfirst,
   InItlast
);

VectorView(
   std::initializer_list<T> il
);
```

### Parameters

*InIt*<br/>
The type of a collection of objects that is used to initialize the current VectorView.

*il*<br/>
A [std::initializer_list](../standard-library/initializer-list-class.md) whose elements will be used to initialize the VectorView.

*N*<br/>
The number of elements in a collection of objects that is used to initialize the current VectorView.

*size*<br/>
The number of elements in the VectorView.

*value*<br/>
A value that is used to initialize each element in the current VectorView.

*v*<br/>
An [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::vector](../standard-library/vector-class.md) that is used to initialize the current VectorView.

*ptr*<br/>
Pointer to a `std::vector` that is used to initialize the current VectorView.

*arr*<br/>
A [Platform::Array](../cppcx/platform-array-class.md) object that is used to initialize the current VectorView.

*a*<br/>
A [std::array](../standard-library/array-class-stl.md) object that is used to initialize the current VectorView.

*first*<br/>
The first element in a sequence of objects that are used to initialize the current VectorView. The type of `first` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*last*<br/>
The last element in a sequence of objects that are used to initialize the current VectorView. The type of `last` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## See also

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
