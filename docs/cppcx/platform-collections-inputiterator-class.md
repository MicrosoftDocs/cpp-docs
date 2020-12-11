---
description: "Learn more about: Platform::Collections::InputIterator Class"
title: "Platform::Collections::InputIterator Class"
ms.date: "03/27/2019"
ms.topic: "reference"
f1_keywords: ["COLLECTION/Platform::Collections::InputIterator::InputIterator"]
helpviewer_keywords: ["InputIterator Class"]
ms.assetid: ef72eea4-32a9-42b9-8119-ce87dbdcd3be
---
# Platform::Collections::InputIterator Class

Provides a Standard Template Library InputIterator for collections derived from the Windows Runtime.

## Syntax

```
template <typename X>
class InputIterator;
```

#### Parameters

*X*<br/>
The typename of the InputIterator template class.

### Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`difference_type`|A pointer difference (ptrdiff_t).|
|`iterator_category`|The category of a input iterator (::std::input_iterator_tag).|
|`pointer`|A pointer to a `const X`|
|`reference`|A reference to a `const X`|
|`value_type`|The `X` typename.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[InputIterator::InputIterator](#ctor)|Initializes a new instance of the InputIterator class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[InputIterator::operator!= Operator](#operator-inequality)|Indicates whether the current InputIterator is not equal to a specified InputIterator.|
|[InputIterator::operator* Operator](#operator-dereference)|Retrieves a reference to the element specified by the current InputIterator.|
|[InputIterator::operator++ Operator](#operator-increment)|Increments the current InputIterator.|
|[InputIterator::operator== Operator](#operator-equality)|Indicates whether the current InputIterator is equal to a specified InputIterator.|
|[InputIterator::operator-> Operator](#operator-arrow)|Retrieves the address of the element referenced by the current InputIterator.|

## Inheritance Hierarchy

`InputIterator`

### Requirements

**Header:** collection.h

**Namespace:** Platform::Collections

## <a name="ctor"></a> InputIterator::InputIterator Constructor

Initializes a new instance of the InputIterator class.

### Syntax

```
InputIterator();
explicit InputIterator(Windows::Foundation::Collections<X>^ iterator);
```

### Parameters

*iterator*<br/>
An iterator object.

## <a name="operator-arrow"></a> InputIterator::operator-&gt; Operator

Retrieves the address of the element specified by the current InputIterator.

### Syntax

```
pointer operator->() const;
```

### Return Value

The address of the element specified by the current InputIterator.

## <a name="operator-dereference"></a> InputIterator::operator\* Operator

Retrieves a reference to the element specified by the current InputIterator.

### Syntax

```
reference operator*() const;
```

### Return Value

The element specified by the current InputIterator.

## <a name="operator-equality"></a> InputIterator::operator== Operator

Indicates whether the current InputIterator is equal to a specified InputIterator.

### Syntax

```
bool operator== (const InputIterator& other) const;
```

### Parameters

*other*<br/>
Another InputIterator.

### Return Value

**`true`** if the current InputIterator is equal to *other*; otherwise, **`false`**.

## <a name="operator-increment"></a> InputIterator::operator++ Operator

Increments the current InputIterator.

### Syntax

```
InputIterator& operator++();
InputIterator operator++(int);
```

### Return Value

The first syntax increments and then returns the current InputIterator. The second syntax returns a copy of the current InputIterator and then increments the current InputIterator.

### Remarks

The first InputIterator syntax pre-increments the current InputIterator.

The second syntax post-increments the current InputIterator. The **`int`** type in the second syntax indicates a post-increment operation, not an actual integer operand.

## <a name="operator-inequality"></a> InputIterator::operator!= Operator

Indicates whether the current InputIterator is not equal to a specified InputIterator.

### Syntax

```
bool operator!=(const InputIterator& other) const;
```

### Parameters

*other*<br/>
Another InputIterator.

### Return Value

**`true`** if the current InputIterator is not equal to *other*; otherwise, **`false`**.

## See also

[Platform Namespace](platform-namespace-c-cx.md)
