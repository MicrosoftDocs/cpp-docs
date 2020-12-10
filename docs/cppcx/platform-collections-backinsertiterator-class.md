---
description: "Learn more about: Platform::Collections::BackInsertIterator Class"
title: "Platform::Collections::BackInsertIterator Class"
ms.date: "03/27/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::BackInsertIterator::BackInsertIterator"]
helpviewer_keywords: ["BackInsertIterator Class"]
ms.assetid: aecee1ff-100d-4129-b84b-1966f0923dbf
---
# Platform::Collections::BackInsertIterator Class

Represents an iterator that inserts, rather than overwrites, elements into the back end of a sequential collection.

## Syntax

```
template <typename T>
class BackInsertIterator :
public ::std::iterator<::std::output_iterator_tag, void, void, void, void>;
```

#### Parameters

*T*<br/>
The type of item in the current collection.

### Remarks

The BackInsertIterator class implements the rules required by the [back_insert_iterator Class](../standard-library/back-insert-iterator-class.md).

### Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[BackInsertIterator::BackInsertIterator](#ctor)|Initializes a new instance of the BackInsertIterator class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[BackInsertIterator::operator* Operator](#operator-dereference)|Retrieves a reference to the current BackInsertIterator.|
|[BackInsertIterator::operator++ Operator](#operator-increment)|Returns a reference to the current BackInsertIterator. The iterator is unmodified.|
|[BackInsertIterator::operator= Operator](#operator-assign)|Appends the specified object to the end of the current sequential collection.|

## Inheritance Hierarchy

`BackInsertIterator`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="ctor"></a> BackInsertIterator::BackInsertIterator Constructor

Initializes a new instance of the `BackInsertIterator` class.

### Syntax

```
explicit BackInsertIterator(
   Windows::Foundation::Collections::IVector<T>^ v);
```

#### Parameters

*v*<br/>
An IVector\<T> object.

### Remarks

A `BackInsertIterator` inserts elements after the last element of the object specified by parameter `v`.

## <a name="operator-assign"></a> BackInsertIterator::operator= Operator

Appends the specified object to the end of the current sequential collection.

### Syntax

```
BackInsertIterator& operator=( const T& t);
```

#### Parameters

*t*<br/>
The object to append to the current collection.

### Return Value

A reference to the current BackInsertIterator.

## <a name="operator-dereference"></a> BackInsertIterator::operator* Operator

Retrieves a reference to the current BackInsertIterator.

### Syntax

```
BackInsertIterator& operator*();
```

### Return Value

A reference to the current BackInsertIterator.

### Remarks

This operator returns a reference to the current BackInsertIterator; not to any element in the current collection.

## <a name="operator-increment"></a> BackInsertIterator::operator++ Operator

Returns a reference to the current BackInsertIterator. The iterator is unmodified.

### Syntax

```
BackInsertIterator& operator++();

BackInsertIterator operator++(int);
```

### Return Value

A reference to the current BackInsertIterator.

### Remarks

By design, the first syntax example pre-increments the current BackInsertIterator, and the second syntax post-increments the current BackInsertIterator. The **`int`** type in the second syntax indicates a post-increment operation, not an actual integer operand.

However, this operator does not actually modify the BackInsertIterator. Instead, this operator returns a reference to the unmodified, current iterator. This is the same behavior as [operator*](#operator-dereference).

## See also

[Platform Namespace](platform-namespace-c-cx.md)
