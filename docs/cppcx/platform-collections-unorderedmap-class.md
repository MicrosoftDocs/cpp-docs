---
description: "Learn more about: Platform::Collections::UnorderedMap Class"
title: "Platform::Collections::UnorderedMap Class"
ms.date: "12/30/2016"
ms.topic: "reference"
f1_keywords: ["collection/Platform::Collections::UnorderedMap"]
ms.assetid: dc84f261-b13c-4c0a-9b57-30dcb9e3065e
---
# Platform::Collections::UnorderedMap Class

Represents an unordered *map*, which is a collection of key-value pairs.

## Syntax

```cpp
template <
   typename K,
   typename V,
   typename C = std::equal_to<K>
>
ref class Map sealed;
```

#### Parameters

*K*<br/>
The type of the key in the key-value pair.

*V*<br/>
The type of the value in the key-value pair.

*C*<br/>
A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map. By default,  [std::equal_to\<K>](../standard-library/equal-to-struct.md).

### Remarks

Allowed types are:

- integers

- interface class^

- public ref class^

- value struct

- public enum class

**UnorderedMap** is basically a wrapper for [std::unordered_map](../standard-library/unordered-map-class.md) that supports storage of Windows Runtime types. It is the a concrete implementation of the [Windows::Foundation::Collections::IMap](/uwp/api/windows.foundation.collections.imap-2) and [IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap-2) types that are passed across public Windows Runtime interfaces. If you try to use a `Platform::Collections::UnorderedMap` type in a public return value or parameter, compiler error C3986 is raised. You can fix the error by changing the type of the parameter or return value to [Windows::Foundation::Collections::IMap](/uwp/api/windows.foundation.collections.imap-2).

For more information, see [Collections](../cppcx/collections-c-cx.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[UnorderedMap::UnorderedMap](#ctor)|Initializes a new instance of the Map class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[UnorderedMap::Clear](#clear)|Removes all key-value pairs from the current Map object.|
|[UnorderedMap::First](#first)|Returns an iterator that specifies the first element in the map.|
|[UnorderedMap::GetView](#getview)|Returns a read-only view of the current Map; that is, a Platform::Collections::UnorderedMapView Class.|
|[UnorderedMap::HasKey](#haskey)|Determines whether the current Map contains the specified key.|
|[UnorderedMap::Insert](#insert)|Adds the specified key-value pair to the current Map object.|
|[UnorderedMap::Lookup](#lookup)|Retrieves the element at the specified key in the current Map object.|
|[UnorderedMap::Remove](#remove)|Deletes the specified key-value pair from the current Map object.|
|[UnorderedMap::Size](#size)|Returns the number of elements in the current Map object.|

### Events

| Name | Description |
|--|--|
| [Map::MapChanged](#mapchanged) event | Occurs when the Map changes. |

## Inheritance Hierarchy

`UnorderedMap`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="clear"></a> UnorderedMap::Clear Method

Removes all key-value pairs from the current UnorderedMap object.

### Syntax

```cpp
virtual void Clear();
```

## <a name="first"></a> UnorderedMap::First Method

Returns an iterator that specifies the first [Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) element in the unordered map.

### Syntax

```cpp
virtual Windows::Foundation::Collections::IIterator<
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^
   First();
```

### Return Value

An iterator that specifies the first element in the map.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myUnorderedMap->First();`.

## <a name="getview"></a> UnorderedMap::GetView Method

Returns a read-only view of the current UnorderedMap; that is, an [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md) that implements the [Windows::Foundation::Collections::IMapView::IMapView](/uwp/api/windows.foundation.collections.imapview-2) interface.

### Syntax

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### Return Value

An `UnorderedMapView` object.

## <a name="haskey"></a> UnorderedMap::HasKey Method

Determines whether the current UnorderedMap contains the specified key.

### Syntax

```cpp
bool HasKey(
   K key
);
```

### Parameters

*key*<br/>
The key used to locate the UnorderedMap element. The type of *key* is typename *K*.

### Return Value

**`true`** if the key is found; otherwise, **`false`**.

## <a name="insert"></a> UnorderedMap::Insert Method

Adds the specified key-value pair to the current UnorderedMap object.

### Syntax

```cpp
virtual bool Insert(
   K key,
   V value
);
```

### Parameters

*key*<br/>
The key portion of the key-value pair. The type of *key* is typename *K*.

*value*<br/>
The value portion of the key-value pair. The type of *value* is typename *V*.

### Return Value

**`true`** if the key of an existing element in the current Map matches *key* and the value portion of that element is set to *value*. **`false`** if no existing element in the current Map matches *key* and the *key* and *value* parameters are made into a key-value pair and then added to the current UnorderedMap.

## <a name="lookup"></a> UnorderedMap::Lookup Method

Retrieves the value of type V that is associated with the specified key of type K.

### Syntax

```cpp
V Lookup(
   K key
);
```

### Parameters

*key*<br/>
The key used to locate an element in the UnorderedMap. The type of *key* is typename *K*.

### Return Value

The value that is paired with the *key*. The type of the return value is typename *V*.

## <a name="mapchanged"></a> UnorderedMap::MapChanged

Raised when an item is inserted into or removed from the map.

### Syntax

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### Property Value/Return Value

A [MapChangedEventHandler\<K,V>](/uwp/api/windows.foundation.collections.mapchangedeventhandler-2) that contains information about the object that raised the event, and the kind of change that occurred. See also [IMapChangedEventArgs\<K>](/uwp/api/windows.foundation.collections.imapchangedeventargs-1) and [CollectionChange Enumeration](/uwp/api/windows.foundation.collections.collectionchange).

## .NET Framework Equivalent

Windows Runtime apps that us C# or Visual Basic project IMap\<K,V> as IDictionary\<K,V>.

## <a name="remove"></a> UnorderedMap::Remove Method

Deletes the specified key-value pair from the UnorderedMap object.

### Syntax

```cpp
virtual void Remove(
   K key);
```

### Parameters

*key*<br/>
The key portion of the key-value pair. The type of *key* is typename *K*.

## <a name="size"></a> UnorderedMap::Size Method

Returns the number of [Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) elements in the UnorderedMap.

### Syntax

```cpp
virtual property unsigned int Size;
```

### Return Value

The number of elements in the Unordered Map.

## <a name="ctor"></a> UnorderedMap::UnorderedMap Constructor

Initializes a new instance of the UnorderedMap class.

### Syntax

```cpp
UnorderedMap();

explicit UnorderedMap(
    size_t n
    );

UnorderedMap(
    size_t n,
    const H& h
    );

UnorderedMap(
    size_t n,
    const H& h,
    const P& p
    );

explicit UnorderedMap(
    const std::unordered_map<K, V, H, P>& m
    );

explicit UnorderedMap(
    std::unordered_map<K, V, H, P>&& m
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n,
    const H& h
    );

template <typename InIt>
UnorderedMap(
    InIt first,
    InIt last,
    size_t n,
    const H& h,
    const P& p
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h
    );

UnorderedMap(
    std::initializer_list< std::pair<const K, V>> il,
    size_t n,
    const H& h,
    const P& p
    );
```

### Parameters

*InIt*<br/>
The typename of the current UnorderedMap.

*P*<br/>
A function object that can compare two keys to determine whether they are equal. This parameter defaults to [std::equal_to\<K>](../standard-library/equal-to-struct.md).

*H*<br/>
A function object that produces a hash value for a keys. This parameter defaults to [hash Class 1](../standard-library/hash-class.md) for the key types that the class supports.

*m*<br/>
A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::unordered_map](../standard-library/unordered-map-class.md) that is used to initialize the current UnorderedMap.

*il*<br/>
A [std::initializer_list](../standard-library/initializer-list-class.md) of [std::pair](../standard-library/pair-structure.md) objects that is used to initialize the map.

*first*<br/>
The input iterator of the first element in a range of elements used to initialize the current UnorderedMap.

*last*<br/>
The input iterator of the first element after a range of elements used to initialize the current UnorderedMap.

## See also

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)<br/>
[Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md)<br/>
[Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)<br/>
[Collections](../cppcx/collections-c-cx.md)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
