---
description: "Learn more about: Platform::Collections::Vector Class"
title: "Platform::Collections::Vector Class"
ms.date: "12/04/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::Vector::Vector", "COLLECTION/Platform::Collections::Vector::Append", "COLLECTION/Platform::Collections::Vector::Clear", "COLLECTION/Platform::Collections::Vector::First", "COLLECTION/Platform::Collections::Vector::GetAt", "COLLECTION/Platform::Collections::Vector::GetMany", "COLLECTION/Platform::Collections::Vector::GetView", "COLLECTION/Platform::Collections::Vector::IndexOf", "COLLECTION/Platform::Collections::Vector::InsertAt", "COLLECTION/Platform::Collections::Vector::ReplaceAll", "COLLECTION/Platform::Collections::Vector::RemoveAt", "COLLECTION/Platform::Collections::Vector::RemoveAtEnd", "COLLECTION/Platform::Collections::Vector::SetAt", "COLLECTION/Platform::Collections::Vector::Size", "COLLECTION/Platform::Collections::Vector::VectorChanged"]
helpviewer_keywords: ["Vector Class (C++/Cx)"]
ms.assetid: aee8c076-9700-47c3-99b6-799fd3edb0ca
---
# Platform::Collections::Vector Class

Represents a sequential collection of objects that can be individually accessed by index. Implements [Windows::Foundation::Collections::IObservableVector](/uwp/api/windows.foundation.collections.iobservablevector-1) to help with XAML [data binding](/windows/uwp/data-binding/data-binding-in-depth).

## Syntax

```
template <typename T, typename E>
   ref class Vector sealed;
```

### Parameters

*T*<br/>
The type of the elements contained in the Vector object.

*E*<br/>
Specifies a binary predicate for testing equality with values of type *T*. The default value is `std::equal_to<T>`.

### Remarks

Allowed types are:

1. integers

1. interface class^

1. public ref class^

1. value struct

1. public enum class

The **Vector** class is the C++ concrete implementation of the [Windows::Foundation::Collections::IVector](/uwp/api/windows.foundation.collections.ivector-1) interface.

If you attempt to use a **Vector** type in a public return value or parameter, compiler error C3986 is raised. You can fix the error by changing the parameter or return value type to [Windows::Foundation::Collections::IVector](/uwp/api/windows.foundation.collections.ivector-1). For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Vector::Vector](#ctor)|Initializes a new instance of the Vector class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Vector::Append](#append)|Inserts the specified item after the last item in the current Vector.|
|[Vector::Clear](#clear)|Deletes all the elements in the current Vector.|
|[Vector::First](#first)|Returns an iterator that specifies the first element in the Vector.|
|[Vector::GetAt](#getat)|Retrieves the element of the current Vector that is identifed by the specified index.|
|[Vector::GetMany](#getmany)|Retrieves a sequence of items from the current Vector, starting at the specified index.|
|[Vector::GetView](#getview)|Returns a read-only view of a Vector; that is, a [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|
|[Vector::IndexOf](#indexof)|Searches for the specified item in the current Vector, and if found, returns the index of the item.|
|[Vector::InsertAt](#insertat)|Inserts the specified item into the current Vector at the element identified by the specified index.|
|[Vector::ReplaceAll](#replaceall)|Deletes the elements in the current Vector and then inserts the elements from the specified array.|
|[Vector::RemoveAt](#removeat)|Deletes the element identified by the specified index from the current Vector.|
|[Vector::RemoveAtEnd](#removeatend)|Deletes the element at the end of the current Vector.|
|[Vector::SetAt](#setat)|Assigns the specified value to the element in the current Vector that is identified by the specified index.|
|[Vector::Size](#size)|Returns the number of elements in the current Vector object.|

### Events

| Name | Description |
|--|--|
| event [Windows::Foundation::Collection::VectorChangedEventHandler\<T>^ VectorChanged](/uwp/api/windows.foundation.collections.vectorchangedeventhandler-1) | Occurs when the Vector changes. |

## Inheritance Hierarchy

`Vector`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="append"></a> Vector::Append Method

Inserts the specified item after the last item in the current Vector.

### Syntax

```cpp
virtual void Append(T item);
```

### Parameters

*index*<br/>
The item to insert into the Vector. The type of *item* is defined by the *T* typename.

## <a name="clear"></a> Vector::Clear Method

Deletes all the elements in the current Vector.

### Syntax

```cpp
virtual void Clear();
```

## <a name="first"></a> Vector::First Method

Returns an iterator that points to the first element in the Vector.

### Syntax

```cpp
virtual Windows::Foundation::Collections::IIterator <T>^ First();
```

### Return Value

An iterator that points to the first element in the Vector.

### Remarks

A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **`auto`** type deduction keyword. For example, `auto x = myVector->First();`. This iterator knows the length of the collection.

When you need a pair of iterators to pass to an STL function, use the free functions [Windows::Foundation::Collections::begin](../cppcx/begin-function.md) and [Windows::Foundation::Collections::end](../cppcx/end-function.md)

## <a name="getat"></a> Vector::GetAt Method

Retrieves the element of the current Vector that is identifed by the specified index.

### Syntax

```cpp
virtual T GetAt(unsigned int index);
```

### Parameters

*index*<br/>
A zero-based, unsigned integer that specifies a particular element in the Vector object.

### Return Value

The element specified by the *index* parameter. The element type is defined by the *T* typename.

## <a name="getmany"></a> Vector::GetMany Method

Retrieves a sequence of items from the current Vector, starting at the specified index, and copies them into the caller-allocated array.

### Syntax

```cpp
virtual unsigned int GetMany(
    unsigned int startIndex,
    Platform::WriteOnlyArray<T>^ dest);
```

### Parameters

*startIndex*<br/>
The zero-based index of the start of the items to retrieve.

*dest*<br/>
A caller-allocated array of items that begin at the element specified by *startIndex* and end at the last element in the Vector.

### Return Value

The number of items retrieved.

### Remarks

This function is not intended for use directly by client code. It is used internally in the [to_vector Function](../cppcx/to-vector-function.md) to enable efficient conversion of Platform::Vector intances to std::vector instances.

## <a name="getview"></a> Vector::GetView Method

Returns a read-only view of a Vector; that is, an IVectorView.

### Syntax

```cpp
Windows::Foundation::Collections::IVectorView<T>^ GetView();
```

### Return Value

An IVectorView object.

## <a name="indexof"></a> Vector::IndexOf Method

Searches for the specified item in the current Vector, and if found, returns the index of the item.

### Syntax

```cpp
virtual bool IndexOf(T value, unsigned int* index);
```

### Parameters

*value*<br/>
The item to find.

*index*<br/>
The zero-based index of the item if parameter *value* is found; otherwise, 0.

The *index* parameter is 0 if either the item is the first element of the Vector or the item was not found. If the return value is **`true`**, the item was found and it is the first element; otherwise, the item was not found.

### Return Value

**`true`** if the specified item is found; otherwise, **`false`**.

### Remarks

IndexOf uses std::find_if to find the item. Custom element types should therefore overload the == and != operator in order to enable the equality comparisons that find_if requires.

## <a name="insertat"></a> Vector::InsertAt Method

Inserts the specified item into the current Vector at the element identified by the specified index.

### Syntax

```cpp
virtual void InsertAt(unsigned int index, T item)
```

### Parameters

*index*<br/>
A zero-based, unsigned integer that specifies a particular element in the Vector object.

*item*<br/>
An item to insert into the Vector at the element specified by *index*. The type of *item* is defined by the *T* typename.

## <a name="removeat"></a> Vector::RemoveAt Method

Deletes the element identified by the specified index from the current Vector.

### Syntax

```cpp
virtual void RemoveAt(unsigned int index);
```

### Parameters

*index*<br/>
A zero-based, unsigned integer that specifies a particular element in the Vector object.

## <a name="removeatend"></a> Vector::RemoveAtEnd Method

Deletes the element at the end of the current Vector.

### Syntax

```cpp
virtual void RemoveAtEnd();
```

## <a name="replaceall"></a> Vector::ReplaceAll Method

Deletes the elements in the current Vector and then inserts the elements from the specified array.

### Syntax

```cpp
virtual void ReplaceAll(const ::Platform::Array<T>^ arr);
```

### Parameters

*arr*<br/>
An array of objects whose type is defined by the *T* typename.

## <a name="setat"></a> Vector::SetAt Method

Assigns the specified value to the element in the current Vector that is identified by the specified index.

### Syntax

```cpp
virtual void SetAt(unsigned int index, T item);
```

### Parameters

*index*<br/>
A zero-based, unsigned integer that specifies a particular element in the Vector object.

*item*<br/>
The value to assign to the specified element. The type of *item* is defined by the *T* typename.

## <a name="size"></a> Vector::Size Method

Returns the number of elements in the current Vector object.

### Syntax

```cpp
virtual property unsigned int Size;
```

### Return Value

The number of elements in the current Vector.

## <a name="ctor"></a> Vector::Vector Constructor

Initializes a new instance of the Vector class.

### Syntax

```cpp
Vector();

explicit Vector(unsigned int size);
Vector( unsigned int size, T value);
template <typename U> explicit Vector( const ::std::vector<U>& v);
template <typename U> explicit Vector( std::vector<U>&& v);

Vector( const T * ptr, unsigned int size);
template <size_t N> explicit Vector(const T(&arr)[N]);
template <size_t N> explicit Vector(const std::array<T, N>& a);
explicit Vector(const Array<T>^ arr);

template <typename InIt> Vector(InIt first, InIt last);
Vector(std::initializer_list<T> il);
```

### Parameters

*a*<br/>
A [std::array](../standard-library/array-class-stl.md) that will be used to initialize the Vector.

*arr*<br/>
A [Platform::Array](../cppcx/platform-array-class.md) that will be used to initialize the Vector.

*InIt*<br/>
The type of a collection of objects that is used to initialize the current Vector.

*il*<br/>
A [std::initializer_list](../standard-library/initializer-list-class.md) of objects of type *T* that will be used to initialize the Vector.

*N*<br/>
The number of elements in a collection of objects that is used to initialize the current Vector.

*size*<br/>
The number of elements in the Vector.

*value*<br/>
A value that is used to initialize each element in the current Vector.

*v*<br/>
An [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::vector](../standard-library/vector-class.md) that is used to initialize the current Vector.

*ptr*<br/>
Pointer to a `std::vector` that is used to initialize the current Vector.

*first*<br/>
The first element in a sequence of objects that are used to initialize the current Vector. The type of *first* is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*last*<br/>
The last element in a sequence of objects that are used to initialize the current Vector. The type of *last* is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## See also

[Collections (C++/CX)](collections-c-cx.md)<br/>
[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creating Windows Runtime Components in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
