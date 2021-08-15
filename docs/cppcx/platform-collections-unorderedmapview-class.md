---
description: "Learn more about: Platform::Collections::UnorderedMapView Class"
title: "Platform::Collections::UnorderedMapView Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["collection/Platform::Collections::UnorderedMapView"]
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
---
# Platform::Collections::UnorderedMapView Class

Represents a read-only view into a *map*, which is a collection of key-value pairs.

## Syntax

```cpp
template <
   typename K,
   typename V,
   typename C = ::std::equal_to<K>>
ref class UnorderedMapView sealed;
```

#### Parameters

*K*<br/>
The type of the key in the key-value pair.

*V*<br/>
The type of the value in the key-value pair.

*C*<br/>
A type that provides a function object that can compare two key values for equality. By default, [std::equal_to\<K>](../standard-library/equal-to-struct.md)

### Remarks

UnorderedMapView is a concrete C++ implementation of the [Windows::Foundation::Collections::IMapView\<K,V>](/uwp/api/windows.foundation.collections.imapview-2) interface that is passed across the application binary interface (ABI). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[UnorderedMapView::UnorderedMapView](#ctor)|Initializes a new instance of the UnorderedMapView class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[UnorderedMapView::First](#first)|Returns an iterator that is initialized to the first element in the map view.|
|[UnorderedMapView::HasKey](#haskey)|Determines whether the current UnorderedMapView contains the specified key.|
|[UnorderedMapView::Lookup](#lookup)|Retrieves the element at the specified key in the current UnorderedMapView object.|
|[UnorderedMapView::Size](#size)|Returns the number of elements in the current UnorderedMapView object.|
|[UnorderedMapView::Split](#split)|Splits an original UnorderedMapView object into two UnorderedMapView objects.|

## Inheritance Hierarchy

`UnorderedMapView`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="first"></a> UnorderedMapView::First Method

Returns an iterator that specifies the first [Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) element in the unordered map.

### Syntax

```cpp
virtual Windows::Foundation::Collections::IIterator<
    Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
    First();
```

### Return Value

An iterator that specifies the first element in the map view.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myMapView->First();`.

## <a name="haskey"></a> UnorderedMapView::HasKey Method

Determines whether the current UnorderedMap contains the specified key.

### Syntax

```cpp
bool HasKey(K key);
```

### Parameters

*key*<br/>
The key used to locate the element. The type of `key` is typename *K*.

### Return Value

**`true`** if the key is found; otherwise, **`false`**.

## <a name="lookup"></a> UnorderedMapView::Lookup Method

Retrieves the value of type V that is associated with the specified key of type K.

### Syntax

```cpp
V Lookup(K key);
```

### Parameters

*key*<br/>
The key used to locate an element in the UnorderedMapView. The type of `key` is typename *K*.

### Return Value

The value that is paired with the `key`. The type of the return value is typename *V*.

## <a name="size"></a> UnorderedMapView::Size Method

Returns the number of [Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) elements in the UnorderedMapView.

### Syntax

```cpp
virtual property unsigned int Size;
```

### Return Value

The number of elements in the Unordered MapView.

## <a name="split"></a> UnorderedMapView::Split Method

Divides the current UnorderedMapView object into two UnorderedMapView objects. This method is non-operational.

### Syntax

```cpp
void Split(
   Windows::Foundation::Collections::IMapView<
                         K,V>^ * firstPartition,
   Windows::Foundation::Collections::IMapView<
                         K,V>^ * secondPartition);
```

### Parameters

*firstPartition*<br/>
The first part of the original UnorderedMapView object.

*secondPartition*<br/>
The second part of the original UnorderedMapView object.

### Remarks

This method is not operational; it does nothing.

## <a name="ctor"></a> UnorderedMapView::UnorderedMapView Constructor

Initializes a new instance of the UnorderedMapView class.

### Syntax

```cpp
UnorderedMapView();
explicit UnorderedMapView(size_t n);
UnorderedMapView(size_t n, const H& h);
UnorderedMapView(size_t n, const H& h, const P& p);

explicit UnorderedMapView(
    const std::unordered_map<K, V, H, P>& m);
explicit UnorderedMapView(
    std::unordered_map<K, V, H, P>&& m);

template <typename InIt> UnorderedMapView(InIt first, InIt last );
template <typename InIt> UnorderedMapView(InIt first, InIt last, size_t n );

template <typename InIt> UnorderedMapView(
    InIt first,
    InIt last,
    size_t n,
    const H& h );

template <typename InIt> UnorderedMapView(
    InIt first,
    InIt last,
    size_t n,
    const H& h,
    const P& p );

UnorderedMapView(std::initializer_list<std::pair<const K, V>);

UnorderedMapView(std::initializer_list< std::pair<const K, V>> il, size_t n

UnorderedMapView(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h);

UnorderedMapView(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h,
    const P& p );
```

### Parameters

*n*<br/>
The number of elements to preallocate space for.

*InIt*<br/>
The typename of the UnorderedMapView.

*H*<br/>
A function object that can a hash value for a key. Defaults to [std::hash\<K>](../standard-library/hash-class.md) for the types that `std::hash` supports.

*P*<br/>
A type that provides a function object that can compare two keys to determine their equality. Defaults to [std::equal_to\<K>](../standard-library/equal-to-struct.md).

*m*<br/>
A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::unordered_map](../standard-library/unordered-map-class.md) that is used to initialize the UnorderedMapView.

*first*<br/>
The input iterator of the first element in a range of elements used to initialize the UnorderedMapView.

*last*<br/>
The input iterator of the first element after a range of elements used to initialize the UnorderedMapView.

## See also

[Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)<br/>
[Windows::Foundation::IMapView](/uwp/api/windows.foundation.collections.imapview-2)
