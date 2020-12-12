---
description: "Learn more about: Platform::Collections::VectorIterator Class"
title: "Platform::Collections::VectorIterator Class"
ms.date: "03/27/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::VectorIterator::VectorIterator"]
helpviewer_keywords: ["VectorIterator Class"]
ms.assetid: d531cb42-27e0-48a6-bf5e-c265891a18ff
---
# Platform::Collections::VectorIterator Class

Provides a Standard Template Library iterator for objects derived from the Windows Runtime IVector interface.

VectorIterator is a proxy iterator that stores elements of type VectorProxy\<T>. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

## Syntax

```
template <typename T>
class VectorIterator;
```

#### Parameters

*T*<br/>
The typename of the VectorIterator template class.

### Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`difference_type`|A pointer difference (ptrdiff_t).|
|`iterator_category`|The category of a random access iterator (::std::random_access_iterator_tag).|
|`pointer`|A pointer to an internal type, Platform::Collections::Details::VectorProxy\<T>, that is required for the implementation of VectorIterator.|
|`reference`|A reference to an internal type, Platform::Collections::Details::VectorProxy\<T>,, that is required for the implementation of VectorIterator.|
|`value_type`|The `T` typename.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[VectorIterator::VectorIterator](#ctor)|Initializes a new instance of the VectorIterator class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[VectorIterator::operator- Operator](#operator-minus)|Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.|
|[VectorIterator::operator-- Operator](#operator-decrement)|Decrements the current VectorIterator.|
|[VectorIterator::operator!= Operator](#operator-inequality)|Indicates whether the current VectorIterator is not equal to a specified VectorIterator.|
|[VectorIterator::operator* Operator](#operator-dereference)|Retrieves a reference to the element specified by the current VectorIterator.|
|[VectorIterator::operator\[\]](#operator-at)|Retrieves a reference to the element that is a specified displacement from the current VectorIterator.|
|[VectorIterator::operator+ Operator](#operator-plus)|Returns a VectorIterator that references the element at the specified displacement from the specified VectorIterator.|
|[VectorIterator::operator++ Operator](#operator-increment)|Increments the current VectorIterator.|
|[VectorIterator::operator+= Operator](#operator-plus-assign)|Increments the current VectorIterator by the specified displacement.|
|[VectorIterator::operator< Operator](#operator-less-than)|Indicates whether the current VectorIterator is less than a specified VectorIterator.|
|[VectorIterator::operator\<= Operator](#operator-less-than-or-equals)|Indicates whether the current VectorIterator is less than or equal to a specified VectorIterator.|
|[VectorIterator::operator-= Operator](#operator-minus-equals)|Decrements the current VectorIterator by the specified displacement.|
|[VectorIterator::operator== Operator](#operator-equality)|Indicates whether the current VectorIterator is equal to a specified VectorIterator.|
|[VectorIterator::operator> Operator](#operator-greater-than)|Indicates whether the current VectorIterator is greater than a specified VectorIterator.|
|[VectorIterator::operator-> Operator](#operator-arrow)|Retrieves the address of the element referenced by the current VectorIterator.|
|[VectorIterator::operator>= Operator](#operator-greater-than-or-equals)|Indicates whether the current VectorIterator is greater than or equal to a specified VectorIterator.|

## Inheritance Hierarchy

`VectorIterator`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="operator-arrow"></a> VectorIterator::operator-&gt; Operator

Retrieves the address of the element referenced by the current VectorIterator.

### Syntax

```
Detail::ArrowProxy<T> operator->() const;
```

### Return Value

The value of the element that is referenced by the current VectorIterator.

The type of the return value is an unspecified internal type that is required for the implementation of this operator.

## <a name="operator-decrement"></a> VectorIterator::operator-- Operator

Decrements the current VectorIterator.

### Syntax

```

VectorIterator& operator--();
VectorIterator operator--(int);
```

### Return Value

The first syntax decrements and then returns the current VectorIterator. The second syntax returns a copy of the current VectorIterator and then decrements the current VectorIterator.

### Remarks

The first VectorIterator syntax pre-decrements the current VectorIterator.

The second syntax post-decrements the current VectorIterator. The **`int`** type in the second syntax indicates a post-decrement operation, not an actual integer operand.

## <a name="operator-dereference"></a> VectorIterator::operator\* Operator

Retrieves the address of the element specified by the current VectorIterator.

### Syntax

```
reference operator*() const;
```

### Return Value

The element specified by the current VectorIterator.

## <a name="operator-equality"></a> VectorIterator::operator== Operator

Indicates whether the current VectorIterator is equal to a specified VectorIterator.

### Syntax

```
bool operator==(const VectorIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is equal to *other*; otherwise, **`false`**.

## <a name="operator-greater-than"></a> VectorIterator::operator&gt; Operator

Indicates whether the current VectorIterator is greater than a specified VectorIterator.

### Syntax

```cpp
bool operator>(const VectorIterator& other) const
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is greater than *other*; otherwise, **`false`**.

## <a name="operator-greater-than-or-equals"></a> VectorIterator::operator&gt;= Operator

Indicates whether the current VectorIterator is greater than or equal to the specified VectorIterator.

### Syntax

```cpp
bool operator>=(const VectorIterator& other) const
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is greater than or equal to *other*; otherwise, **`false`**.

## <a name="operator-increment"></a> VectorIterator::operator++ Operator

Increments the current VectorIterator.

### Syntax

```
VectorIterator& operator++();
VectorIterator operator++(int);
```

### Return Value

The first syntax increments and then returns the current VectorIterator. The second syntax returns a copy of the current VectorIterator and then increments the current VectorIterator.

### Remarks

The first VectorIterator syntax pre-increments the current VectorIterator.

The second syntax post-increments the current VectorIterator. The **`int`** type in the second syntax indicates a post-increment operation, not an actual integer operand.

## <a name="operator-inequality"></a> VectorIterator::operator!= Operator

Indicates whether the current VectorIterator is not equal to a specified VectorIterator.

### Syntax

```
bool operator!=(const VectorIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is not equal to *other*; otherwise, **`false`**.

## <a name="operator-less-than"></a> VectorIterator::operator&lt; Operator

Indicates whether the current VectorIterator is less than a specified VectorIterator.

### Syntax

```cpp
bool operator<(const VectorIterator& other) const
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is less than *other*; otherwise, **`false`**.

## <a name="operator-less-than-or-equals"></a> VectorIterator::operator&lt;= Operator

Indicates whether the current VectorIterator is less than or equal to a specified VectorIterator.

### Syntax

```cpp
bool operator<=(const VectorIterator& other) const
```

### Parameters

*other*<br/>
Another VectorIterator.

### Return Value

**`true`** if the current VectorIterator is less than or equal to *other*; otherwise, **`false`**.

## <a name="operator-minus"></a> VectorIterator::operator- Operator

Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.

### Syntax

```

VectorIterator operator-(difference_type n) const;

difference_type operator-(const VectorIterator& other) const;
```

### Parameters

*n*<br/>
A number of elements.

*other*<br/>
Another VectorIterator.

### Return Value

The first operator syntax returns a VectorIterator object that is `n` elements less than the current VectorIterator. The second operator syntax returns the number of elements between the current and the `other` VectorIterator.

## <a name="operator-plus-assign"></a> VectorIterator::operator+= Operator

Increments the current VectorIterator by the specified displacement.

### Syntax

```
VectorIterator& operator+=(difference_type n);
```

### Parameters

*n*<br/>
A integer displacement.

### Return Value

The updated VectorIterator.

## <a name="operator-plus"></a> VectorIterator::operator+ Operator

Returns a VectorIterator that references the element at the specified displacement from the specified VectorIterator.

### Syntax

```

VectorIterator operator+(difference_type n);

template <typename T>
inline VectorIterator<T> operator+(
  ptrdiff_t n,
  const VectorIterator<T>& i);
```

### Parameters

*T*<br/>
In the second syntax, the typename of the VectorIterator.

*n*<br/>
An integer displacement.

*i*<br/>
In the second syntax, a VectorIterator.

### Return Value

In the first syntax, a VectorIterator that references the element at the specified displacement from the current VectorIterator.

In the second syntax, a VectorIterator that references the element at the specified displacement from the beginning of parameter `i`.

### Remarks

The first syntax example

## <a name="operator-minus-equals"></a> VectorIterator::operator-= Operator

Decrements the current VectorIterator by the specified displacement.

### Syntax

```
VectorIterator& operator-=(difference_type n);
```

### Parameters

*n*<br/>
An integer displacement.

### Return Value

The updated VectorIterator.

## <a name="operator-at"></a> VectorIterator::operator\[\]

Retrieves a reference to the element that is a specified displacement from the current VectorIterator.

### Syntax

```
reference operator[](difference_type n) const;
```

### Parameters

*n*<br/>
An integer displacement.

### Return Value

The element that is displaced by `n` elements from the current VectorIterator.

## <a name="ctor"></a> VectorIterator::VectorIterator Constructor

Initializes a new instance of the VectorIterator class.

### Syntax

```
VectorIterator();

explicit VectorIterator(
   Windows::Foundation::Collections::IVector<T>^ v);
```

### Parameters

*v*<br/>
An IVector\<T> object.

### Remarks

The first syntax example is the default constructor. The second syntax example is an explicit constructor that is used to construct a VectorIterator from an IVector\<T> object.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
