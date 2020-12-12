---
description: "Learn more about: Platform::Collections::Map Class"
title: "Platform::Collections::Map Class"
ms.date: "10/01/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::Map::Map", "COLLECTION/Platform::Collections::Map::Clear", "COLLECTION/Platform::Collections::Map::First", "COLLECTION/Platform::Collections::Map::GetView", "COLLECTION/Platform::Collections::Map::HasKey", "COLLECTION/Platform::Collections::Map::Insert", "COLLECTION/Platform::Collections::Map::Lookup", "COLLECTION/Platform::Collections::Map::Remove", "COLLECTION/Platform::Collections::Map::Size"]
helpviewer_keywords: ["Map Class (C++/Cx)"]
ms.assetid: 2b8cf968-1167-4898-a149-1195b32c1785
---
# Platform::Collections::Map Class

Represents a *map*, which is a collection of key-value pairs. Implements [Windows::Foundation::Collections::IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap-2) to help with XAML [data binding](/windows/uwp/data-binding/data-binding-in-depth).

## Syntax

```cpp
template <
   typename K,
   typename V,
   typename C = std::less<K>>
ref class Map sealed;
```

### Parameters

*K*<br/>
The type of the key in the key-value pair.

*V*<br/>
The type of the value in the key-value pair.

*C*<br/>
A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map. By default, [std::less\<K>](../standard-library/less-struct.md).

*__is_valid_winrt_type()*
A compiler-generated function that validates the type of *K* and *V* and provides a friendly error message if the type cannot be stored in the Map.

### Remarks

Allowed types are:

- integers

- interface class^

- public ref class^

- value struct

- public enum class

Map is basically a wrapper for [std::map](../standard-library/map-class.md). It is a C++ concrete implementation of the [Windows::Foundation::Collections::IMap\<Windows::Foundation::Collections::IKeyValuePair\<K,V>>](/uwp/api/windows.foundation.collections.imap-2) and [IObservableMap](/uwp/api/windows.foundation.collections.iobservablemap-2) types that are passed across public Windows Runtime interfaces. If you try to use a `Platform::Collections::Map` type in a public return value or parameter, compiler error C3986 is raised. You can fix the error by changing the type of the parameter or return value to [Windows::Foundation::Collections::IMap\<K,V>](/uwp/api/windows.foundation.collections.imap-2).

For more information, see [Collections](../cppcx/collections-c-cx.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Map::Map](#ctor)|Initializes a new instance of the Map class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Map::Clear](#clear)|Removes all key-value pairs from the current Map object.|
|[Map::First](#first)|Returns an iterator that specifies the first element in the map.|
|[Map::GetView](#getview)|Returns a read-only view of the current Map; that is, a [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md).|
|[Map::HasKey](#haskey)|Determines whether the current Map contains the specified key.|
|[Map::Insert](#insert)|Adds the specified key-value pair to the current Map object.|
|[Map::Lookup](#lookup)|Retrieves the element at the specified key in the current Map object.|
|[Map::Remove](#remove)|Deletes the specified key-value pair from the current Map object.|
|[Map::Size](#size)|Returns the number of elements in the current Map object.|

### Events

| Name | Description |
|--|--|
| [Map::MapChanged](#mapchanged) event | Occurs when the Map changes. |

## Inheritance Hierarchy

`Map`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="clear"></a> Map::Clear Method

Removes all key-value pairs from the current Map object.

### Syntax

```cpp
virtual void Clear();
```

## <a name="first"></a> Map::First Method

Returns an iterator that specifies the first element in the map, or **`nullptr`** if the map is empty.

### Syntax

```cpp
virtual Windows::Foundation::Collections::IIterator<
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();
```

### Return Value

An iterator that specifies the first element in the map.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myMap->First();`.

## <a name="getview"></a> Map::GetView Method

Returns a read-only view of the current Map; that is, a [Platform::Collections::MapView Class](../cppcx/platform-collections-mapview-class.md), which implements the [Windows::Foundation::Collections::IMapView\<K,V>](/uwp/api/windows.foundation.collections.imapview-2) interface.

### Syntax

```cpp
Windows::Foundation::Collections::IMapView<K, V>^ GetView();
```

### Return Value

A `MapView` object.

## <a name="haskey"></a> Map::HasKey Method

Determines whether the current Map contains the specified key.

### Syntax

```cpp
bool HasKey(K key);
```

### Parameters

*key*<br/>
The key used to locate the Map element. The type of *key* is typename *K*.

### Return Value

**`true`** if the key is found; otherwise, **`false`**.

## <a name="insert"></a> Map::Insert Method

Adds the specified key-value pair to the current Map object.

### Syntax

```cpp
virtual bool Insert(K key, V value);
```

### Parameters

*key*<br/>
The key portion of the key-value pair. The type of *key* is typename *K*.

*value*<br/>
The value portion of the key-value pair. The type of *value* is typename *V*.

### Return Value

**`true`** if the key of an existing element in the current Map matches *key* and the value portion of that element is set to *value*. **`false`** if no existing element in the current Map matches *key* and the *key* and *value* parameters are made into a key-value pair and then added to the current Map.

## <a name="lookup"></a> Map::Lookup Method

Retrieves the value of type V that is associated with the specified key of type K, if the key exists.

### Syntax

```cpp
V Lookup(K key);
```

### Parameters

*key*<br/>
The key used to locate an element in the Map. The type of *key* is typename *K*.

### Return Value

The value that is paired with the *key*. The type of the return value is typename *V*.

### Remarks

If the key does not exist, then a [Platform::OutOfBoundsException](../cppcx/platform-outofboundsexception-class.md) is thrown.

## <a name="ctor"></a> Map::Map Constructor

Initializes a new instance of the Map class.

### Syntax

```cpp
explicit Map(const C& comp = C());
explicit Map(const StdMap& m);
explicit Map(StdMap&& m ;
template <typename InIt>
Map(
   InItfirst,
   InItlast,
   const C& comp = C());
```

### Parameters

*InIt*<br/>
The typename of the current Map.

*comp*<br/>
A type that provides a function object that can compare two element values as sort keys to determine their relative order in the Map.

*m*<br/>
A reference or [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) to a `map Class` that is used to initialize the current Map.

*first*<br/>
The input iterator of the first element in a range of elements used to initialize the current Map.

*last*<br/>
The input iterator of the first element after a range of elements used to initialize the current Map.

## <a name="mapchanged"></a> Map::MapChanged Event

Raised when an item is inserted into or removed from the map.

### Syntax

```cpp
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;
```

### Property Value/Return Value

A [MapChangedEventHandler\<K,V>](/uwp/api/windows.foundation.collections.mapchangedeventhandler-2) that contains information about the object that raised the event, and the kind of change that occurred. See also [IMapChangedEventArgs\<K>](/uwp/api/windows.foundation.collections.imapchangedeventargs-1) and [CollectionChange Enumeration](/uwp/api/windows.foundation.collections.collectionchange).

## .NET Framework Equivalent

Windows Runtime apps that use C# or Visual Basic project IMap\<K,V> as IDictionary\<K,V>.

## <a name="remove"></a> Map::Remove Method

Deletes the specified key-value pair from the current Map object.

### Syntax

```cpp
virtual void Remove(K key);
```

### Parameters

*key*<br/>
The key portion of the key-value pair. The type of *key* is typename *K*.

## <a name="size"></a> Map::Size Method

Returns the number of [Windows::Foundation::Collections::IKeyValuePair\<K,V>](/uwp/api/windows.foundation.collections.ikeyvaluepair-2) elements in the Map.

### Syntax

```cpp
virtual property unsigned int Size;
```

### Return Value

The number of elements in the Map.

## See also

[Collections (C++/CX)](collections-c-cx.md)<br/>
[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
