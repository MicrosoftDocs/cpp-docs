---
description: "Learn more about: Platform::Collections::MapView Class"
title: "Platform::Collections::MapView Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::MapView::MapView", "COLLECTION/Platform::Collections::MapView::First", "COLLECTION/Platform::Collections::MapView::HasKey", "COLLECTION/Platform::Collections::MapView::Lookup", "COLLECTION/Platform::Collections::MapView::Size", "COLLECTION/Platform::Collections::MapView::Split"]
helpviewer_keywords: ["MapView Class"]
ms.assetid: 9577dde7-f599-43c6-b1e4-7d653706fd62
---
# Platform::Collections::MapView Class

Represents a read-only view into a *map*, which is a collection of key-value pairs.

## Syntax

```
template <
   typename K,
   typename V,
   typename C = ::std::less<K>>
ref class MapView sealed;
```

#### Parameters

*K*<br/>
The type of the key in the key-value pair.

*V*<br/>
The type of the value in the key-value pair.

*C*<br/>
A type that provides a function object that can compare two element values as sort keys to determine their relative order in the MapView. By default, [std::less\<K>](../standard-library/less-struct.md).

### Remarks

MapView is a concrete C++ implementation of the [Windows::Foundation::Collections::IMapView \<K,V>](/uwp/api/windows.foundation.collections.imapview-2) interface that is passed across the application binary interface (ABI). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[MapView::MapView](#ctor)|Initializes a new instance of the MapView class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[MapView::First](#first)|Returns an iterator that is initialized to the first element in the map view.|
|[MapView::HasKey](#haskey)|Determines whether the current MapView contains the specified key.|
|[MapView::Lookup](#lookup)|Retrieves the element at the specified key in the current MapView object.|
|[MapView::Size](#size)|Returns the number of elements in the current MapView object.|
|[MapView::Split](#split)|Splits an original MapView object into two MapView objects.|

## Inheritance Hierarchy

`MapView`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="first"></a> MapView::First Method

Returns an iterator that specifies the first element in the map view.

### Syntax

```
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### Return Value

An iterator that specifies the first element in the map view.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myMapView->First();`.

## <a name="haskey"></a> MapView::HasKey Method

Determines whether the current MapView contains the specified key.

### Syntax

```

bool HasKey(K key);
```

### Parameters

*key*<br/>
The key used to locate the MapView element. The type of *key* is typename *K*.

### Return Value

**`true`** if the key is found; otherwise, **`false`**.

## <a name="lookup"></a> MapView::Lookup Method

Retrieves the value of type V that is associated with the specified key of type K.

### Syntax

```
V Lookup(K key);
```

### Parameters

*key*<br/>
The key used to locate an element in the MapView. The type of `key` is typename *K*.

### Return Value

The value that is paired with the `key`. The type of the return value is typename *V*.

## <a name="ctor"></a> MapView::MapView Constructor

Initializes a new instance of the MapView class.

### Syntax

```cpp
explicit MapView(const C& comp = C());

explicit MapView(const ::std::map<K, V, C>& m);

explicit MapView(std::map<K, V, C>&& m);

template <typename InIt> MapView(
    InIt first,
    InIt last,
    const C& comp = C());

MapView(
    ::std::initializer_list<std::pair<const K, V>> il,
    const C& comp = C());
```

### Parameters

*InIt*<br/>
The typename of the current MapView.

*comp*<br/>
A function object that can compare two element values as sort keys to determine their relative order in the MapView.

*m*<br/>
A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a `map Class` that is used to initialize the current MapView.

*first*<br/>
The input iterator of the first element in a range of elements used to initialize the current MapView.

*last*<br/>
The input iterator of the first element after a range of elements used to initialize the current MapView.

*il*<br/>
A [std::initializer_list\<std::pair\<K,V>>](../standard-library/initializer-list-class.md) whose elements will be inserted into the MapView.

## <a name="size"></a> MapView::Size Method

Returns the number of elements in the current MapView object.

### Syntax

```cpp
virtual property unsigned int Size;
```

### Return Value

The number of elements in the current MapView.

## <a name="split"></a> MapView::Split Method

Divides the current MapView object into two MapView objects. This method is non-operational.

### Syntax

```cpp
void Split(
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * firstPartition,
   Windows::Foundation::Collections::IMapView<
                         K, V>^ * secondPartition);
```

### Parameters

*firstPartition*<br/>
The first part of the original MapView object.

*secondPartition*<br/>
The second part of the original MapView object.

### Remarks

This method is not operational; it does nothing.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
