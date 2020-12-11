---
description: "Learn more about: Platform::Collections::VectorViewIterator Class"
title: "Platform::Collections::VectorViewIterator Class"
ms.date: "03/27/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::VectorViewIterator::VectorViewIterator"]
helpviewer_keywords: ["VectorViewIterator Class"]
ms.assetid: be3aa1ae-e6ba-4a06-8d6b-86d8128026f7
---
# Platform::Collections::VectorViewIterator Class

Provides a Standard Template Library iterator for objects derived from the Windows Runtime`IVectorView` interface.

`ViewVectorIterator` is a proxy iterator that stores elements of type `VectorProxy<T>`. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).

## Syntax

```
template <typename T>
class VectorViewIterator;
```

#### Parameters

*T*<br/>
The typename of the VectorViewIterator template class.

### Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`difference_type`|A pointer difference (ptrdiff_t).|
|`iterator_category`|The category of a random access iterator (::std::random_access_iterator_tag).|
|`pointer`|A pointer to an internal type that is required for the implementation of VectorViewIterator.|
|`reference`|A reference to an internal type that is required for the implementation of VectorViewIterator.|
|`value_type`|The `T` typename.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[VectorViewIterator::VectorViewIterator](#ctor)|Initializes a new instance of the VectorViewIterator class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[VectorViewIterator::operator- Operator](#operator-minus)|Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.|
|[VectorViewIterator::operator-- Operator](#operator-decrement)|Decrements the current VectorViewIterator.|
|[VectorViewIterator::operator!= Operator](#operator-inequality)|Indicates whether the current VectorViewIterator is not equal to a specified VectorViewIterator.|
|[VectorViewIterator::operator* Operator](#operator-dereference)|Retrieves a reference to the element specified by the current VectorViewIterator.|
|[VectorViewIterator::operator\[\]](#operator-at)|Retrieves a reference to the element that is a specified displacement from the current VectorViewIterator.|
|[VectorViewIterator::operator+ Operator](#operator-plus)|Returns a VectorViewIterator that references the element at the specified displacement from the specified VectorViewIterator.|
|[VectorViewIterator::operator++ Operator](#operator-increment)|Increments the current VectorViewIterator.|
|[VectorViewIterator::operator+= Operator](#operator-plus-equals)|Increments the current VectorViewIterator by the specified displacement.|
|[VectorViewIterator::operator< Operator](#operator-less-than)|Indicates whether the current VectorViewIterator is less than a specified VectorViewIterator.|
|[VectorViewIterator::operator\<= Operator](#operator-less-than-or-equals)|Indicates whether the current VectorViewIterator is less than or equal to a specified VectorViewIterator.|
|[VectorViewIterator::operator-= Operator](#operator-minus-assign)|Decrements the current VectorViewIterator by the specified displacement.|
|[VectorViewIterator::operator== Operator](#operator-equality)|Indicates whether the current VectorViewIterator is equal to a specified VectorViewIterator.|
|[VectorViewIterator::operator> Operator](#operator-greater-than)|Indicates whether the current VectorViewIterator is greater than a specified VectorViewIterator.|
|[VectorViewIterator::operator-> Operator](#operator-arrow)|Retrieves the address of the element referenced by the current VectorViewIterator.|
|[VectorViewIterator::operator>= Operator](#operator-greater-than-or-equals)|Indicates whether the current VectorViewIterator is greater than or equal to a specified VectorViewIterator.|

## Inheritance Hierarchy

`VectorViewIterator`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="operator-arrow"></a> VectorViewIterator::operator-&gt; Operator

Retrieves the address of the element referenced by the current VectorViewIterator.

### Syntax

```
Detail::ArrowProxy<T> operator->() const;
```

### Return Value

The value of the element that is referenced by the current VectorViewIterator.

The type of the return value is an unspecified internal type that is required for the implementation of this operator.

## <a name="operator-decrement"></a> VectorViewIterator::operator-- Operator

Decrements the current VectorViewIterator.

### Syntax

```
VectorViewIterator& operator--();
VectorViewIterator operator--(int);
```

### Return Value

The first syntax decrements and then returns the current VectorViewIterator. The second syntax returns a copy of the current VectorViewIterator and then decrements the current VectorViewIterator.

### Remarks

The first VectorViewIterator syntax pre-decrements the current VectorViewIterator.

The second syntax post-decrements the current VectorViewIterator. The **`int`** type in the second syntax indicates a post-decrement operation, not an actual integer operand.

## <a name="operator-dereference"></a> VectorViewIterator::operator\* Operator

Retrieves a reference to the element specified by the current VectorViewIterator.

### Syntax

```
reference operator*() const;
```

### Return Value

The element specified by the current VectorViewIterator.

## <a name="operator-equality"></a> VectorViewIterator::operator== Operator

Indicates whether the current VectorViewIterator is equal to a specified VectorViewIterator.

### Syntax

```
bool operator==(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorViewIterator.

### Return Value

**`true`** if the current `VectorViewIterator` is equal to *other*; otherwise, **`false`**.

## <a name="operator-greater-than"></a> VectorViewIterator::operator&gt; Operator

Indicates whether the current VectorViewIterator is greater than a specified VectorViewIterator.

### Syntax

```

bool operator>(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorViewIterator.

### Return Value

**`true`** if the current VectorViewIterator is greater than *other*; otherwise, **`false`**.

## <a name="operator-greater-than-or-equals"></a> VectorViewIterator::operator&gt;= Operator

Indicates whether the current `VectorViewIterator` is greater than or equal to the specified `VectorViewIterator`.

### Syntax

```

bool operator>=(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorViewIterator.

### Return Value

**`true`** if the current `VectorViewIterator` is greater than or equal to *other*; otherwise, **`false`**.

## <a name="operator-increment"></a> VectorViewIterator::operator++ Operator

Increments the current VectorViewIterator.

### Syntax

```

VectorViewIterator& operator++();
VectorViewIterator operator++(int);
```

### Return Value

The first syntax increments and then returns the current VectorViewIterator. The second syntax returns a copy of the current VectorViewIterator and then increments the current VectorViewIterator.

### Remarks

The first VectorViewIterator syntax pre-increments the current VectorViewIterator.

The second syntax post-increments the current VectorViewIterator. The **`int`** type in the second syntax indicates a post-increment operation, not an actual integer operand.

## <a name="operator-inequality"></a> VectorViewIterator::operator!= Operator

Indicates whether the current VectorViewIterator is not equal to a specified VectorViewIterator.

### Syntax

```
bool operator!=(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another VectorViewIterator.

### Return Value

**`true`** if the current `VectorViewIterator` is not equal to *other*; otherwise, **`false`**.

## <a name="operator-less-than"></a> VectorViewIterator::operator&lt; Operator

Indicates whether the current VectorIterator is less than a specified VectorIterator.

### Syntax

```
bool operator<(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another `VectorIterator`.

### Return Value

**`true`** if the current `VectorIterator` is less than *other*; otherwise, **`false`**.

## <a name="operator-less-than-or-equals"></a> VectorViewIterator::operator&lt;= Operator

Indicates whether the current `VectorIterator` is less than or equal to a specified `VectorIterator`.

### Syntax

```

bool operator<=(const VectorViewIterator& other) const;
```

### Parameters

*other*<br/>
Another `VectorIterator`.

### Return Value

**`true`** if the current `VectorIterator` is less than or equal to *other*; otherwise, **`false`**.

## <a name="operator-minus"></a> VectorViewIterator::operator- Operator

Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.

### Syntax

```

VectorViewIterator operator-(difference_type n) const;

difference_type operator-(const VectorViewIterator& other) const;
```

### Parameters

*n*<br/>
A number of elements.

*other*<br/>
Another VectorViewIterator.

### Return Value

The first operator syntax returns a VectorViewIterator object that is `n` elements less than the current VectorViewIterator. The second operator syntax returns the number of elements between the current and the `other` VectorViewIterator.

## <a name="operator-plus-equals"></a> VectorViewIterator::operator+= Operator

Increments the current VectorViewIterator by the specified displacement.

### Syntax

```
VectorViewIterator& operator+=(difference_type n);
```

### Parameters

*n*<br/>
A integer displacement.

### Return Value

The updated VectorViewIterator.

## <a name="operator-plus"></a> VectorViewIterator::operator+ Operator

Returns a VectorViewIterator that references the element at the specified displacement from the specified VectorViewIterator.

### Syntax

```

VectorViewIterator operator+(difference_type n) const;

template <typename T>
inline VectorViewIterator<T> operator+
   (ptrdiff_t n,
   const VectorViewIterator<T>& i);
```

### Parameters

*T*<br/>
In the second syntax, the typename of the VectorViewIterator.

*n*<br/>
An integer displacement.

*i*<br/>
In the second syntax, a VectorViewIterator.

### Return Value

In the first syntax, a VectorViewIterator that references the element at the specified displacement from the current VectorViewIterator.

In the second syntax, a VectorViewIterator that references the element at the specified displacement from the beginning of parameter `i`.

## <a name="operator-minus-assign"></a> VectorViewIterator::operator-= Operator

Decrements the current VectorIterator by the specified displacement.

### Syntax

```
VectorViewIterator& operator-=(difference_type n);
```

### Parameters

*n*<br/>
An integer displacement.

### Return Value

The updated VectorIterator.

## <a name="operator-at"></a> VectorViewIterator::operator\[\]

Retrieves a reference to the element that is a specified displacement from the current VectorViewIterator.

### Syntax

```
reference operator[](difference_type n) const;
```

### Parameters

*n*<br/>
An integer displacement.

### Return Value

The element that is displaced by `n` elements from the current VectorViewIterator.

## <a name="ctor"></a> VectorViewIterator::VectorViewIterator Constructor

Initializes a new instance of the VectorViewIterator class.

### Syntax

```

VectorViewIterator();

explicit VectorViewIterator(
   Windows::Foundation::Collections::IVectorView<T>^ v
);
```

### Parameters

*v*<br/>
An IVectorView\<T> object.

### Remarks

The first syntax example is the default constructor. The second syntax example is an explicit constructor that is used to construct a VectorViewIterator from an IVectorView\<T> object.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
