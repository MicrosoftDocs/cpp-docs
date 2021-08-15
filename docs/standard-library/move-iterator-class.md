---
description: "Learn more about: move_iterator Class"
title: "move_iterator Class"
ms.date: "03/27/2019"
f1_keywords: ["iterator/std::move_iterator", "iterator/std::move_iterator::iterator_type", "iterator/std::move_iterator::iterator_category", "iterator/std::move_iterator::value_type", "iterator/std::move_iterator::difference_type", "iterator/std::move_iterator::pointer", "iterator/std::move_iterator::reference", "iterator/std::move_iterator::base"]
helpviewer_keywords: ["std::move_iterator [C++]", "std::move_iterator [C++], iterator_type", "std::move_iterator [C++], iterator_category", "std::move_iterator [C++], value_type", "std::move_iterator [C++], difference_type", "std::move_iterator [C++], pointer", "std::move_iterator [C++], reference", "std::move_iterator [C++], base"]
ms.assetid: a5e5cdd8-a264-4c6b-9f9c-68b0e8edaab7
---
# move_iterator Class

Class template `move_iterator` is a wrapper for an iterator. The move_iterator provides the same behavior as the iterator it wraps (stores), except it turns the stored iterator’s dereference operator into an rvalue reference, turning a copy into a move. For more information about rvalues, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## Syntax

```cpp
class move_iterator;
```

## Remarks

The class template describes an object that behaves like an iterator except when dereferenced. It stores a random-access iterator of type `Iterator`, accessed by way of the member function `base()`. All operations on a `move_iterator` are performed directly on the stored iterator, except that the result of `operator*` is implicitly cast to `value_type&&` to make an rvalue reference.

A `move_iterator` might be capable of operations that are not defined by the wrapped iterator. These operations should not be used.

### Constructors

|Constructor|Description|
|-|-|
|[move_iterator](#move_iterator)|The constructor for objects of type `move_iterator`.|

### Typedefs

|Type name|Description|
|-|-|
|[iterator_type](#iterator_type)|A synonym for the template parameter `RandomIterator`.|
|[iterator_category](#iterator_category)|A synonym for a longer **`typename`** expression of the same name, `iterator_category` identifies the general abilities of the iterator.|
|[value_type](#value_type)|A synonym for a longer **`typename`** expression of the same name, `value_type` describes what type the iterator elements are.|
|[difference_type](#difference_type)|A synonym for a longer **`typename`** expression of the same name, `difference_type` describes the integral type required to express difference values between elements.|
|[pointer](#pointer)|A synonym for template parameter `RandomIterator`.|
|[reference](#reference)|A synonym for the `rvalue` reference `value_type&&`.|

### Member functions

|Member function|Description|
|-|-|
|[base](#base)|The member function returns the stored iterator wrapped by this `move_iterator`.|

### Operators

|Operator|Description|
|-|-|
|[move_iterator::operator*](#op_star)|Returns `(reference)*base().`|
|[move_iterator::operator++](#op_add_add)|Increments the stored iterator. Exact behavior depends on whether it is a preincrement or a postincrement operation.|
|[move_iterator::operator--](#operator--)|Decrements the stored iterator. Exact behavior depends on whether it is a predecrement or a postdecrement operation.|
|[move_iterator::operator-&gt;](#op_arrow)|Returns `&**this`.|
|[move_iterator::operator-](#operator-)|Returns `move_iterator(*this) -=` by first subtracting the right-hand value from the current position.|
|[move_iterator::operator[]](#op_at)|Returns `(reference)*(*this + off)`. Allows you to specify an offset from the current base to obtain the value at that location.|
|[move_iterator::operator+](#op_add)|Returns `move_iterator(*this) +=` the value. Allows you to add an offset to the base to obtain the value at that location.|
|[move_iterator::operator+=](#op_add_eq)|Adds the right-hand value to the stored iterator, and returns **`*this`**.|
|[move_iterator::operator-=](#operator-_eq)|Subtracts the right-hand value from the stored iterator, and returns **`*this`**.|

## Requirements

**Header:** \<iterator>

**Namespace:** std

## <a name="base"></a> move_iterator::base

Returns the stored iterator for this `move_iterator`.

```cpp
RandomIterator base() const;
```

### Remarks

The member function returns the stored iterator.

## <a name="difference_type"></a> move_iterator::difference_type

The type `difference_type` is a `move_iterator` **`typedef`** based on the iterator trait `difference_type`, and can be used interchangeably with it.

```cpp
typedef typename iterator_traits<RandomIterator>::difference_type difference_type;
```

### Remarks

The type is a synonym for the iterator trait `typename iterator_traits<RandomIterator>::pointer`.

## <a name="iterator_category"></a> move_iterator::iterator_category

The type `iterator_category` is a `move_iterator` **`typedef`** based on the iterator trait `iterator_category`, and can be used interchangeably with it.

```cpp
typedef typename iterator_traits<RandomIterator>::iterator_category  iterator_category;
```

### Remarks

The type is a synonym for the iterator trait `typename iterator_traits<RandomIterator>::iterator_category`.

## <a name="iterator_type"></a> move_iterator::iterator_type

The type `iterator_type` is based on the template parameter `RandomIterator` for the class template `move_iterator`, and can be used interchangeably in its place.

```cpp
typedef RandomIterator iterator_type;
```

### Remarks

The type is a synonym for the template parameter `RandomIterator`.

## <a name="move_iterator"></a> move_iterator::move_iterator

Constructs a move iterator. Uses the parameter as the stored iterator.

```cpp
move_iterator();
explicit move_iterator(RandomIterator right);
template <class Type>
move_iterator(const move_iterator<Type>& right);
```

### Parameters

*right*\
The iterator to use as the stored iterator.

### Remarks

The first constructor initializes the stored iterator with its default constructor. The remaining constructors initialize the stored iterator with `base.base()`.

## <a name="op_add_eq"></a> move_iterator::operator+=

Adds an offset to the stored iterator, so that the stored iterator points to the element at the new current location. The operator then moves the new current element.

```cpp
move_iterator& operator+=(difference_type _Off);
```

### Parameters

*_Off*\
An offset to add to the current position to determine the new current position.

### Return Value

Returns the new current element.

### Remarks

The operator adds *_Off* to the stored iterator. Then returns **`*this`**.

## <a name="operator-_eq"></a> move_iterator::operator-=

Moves across a specified number of previous elements. This operator subtracts an offset from the stored iterator.

```cpp
move_iterator& operator-=(difference_type _Off);
```

### Parameters

### Remarks

The operator evaluates `*this += -_Off`. Then returns **`*this`**.

## <a name="op_add_add"></a> move_iterator::operator++

Increments the stored iterator that belongs to this `move_iterator.` The current element is accessed by the postincrement operator. The next element is accessed by the preincrement operator.

```cpp
move_iterator& operator++();
move_iterator operator++(int);
```

### Parameters

### Remarks

The first (preincrement) operator increments the stored iterator. Then returns **`*this`**.

The second (postincrement) operator makes a copy of **`*this`**, evaluates `++*this`. Then returns the copy.

## <a name="op_add"></a> move_iterator::operator+

Returns the iterator position advanced by any number of elements.

```cpp
move_iterator operator+(difference_type _Off) const;
```

### Parameters

### Remarks

The operator returns `move_iterator(*this) +=` `_Off`.

## <a name="op_at"></a> move_iterator::operator[]

Allows array index access to elements across the range of the `move iterator`.

```cpp
reference operator[](difference_type _Off) const;
```

### Parameters

### Remarks

The operator returns `(reference)*(*this + _Off)`.

## <a name="operator--"></a> move_iterator::operator--

Pre- and postdecrement member operators perform a decrement on the stored iterator.

```cpp
move_iterator& operator--();
move_iterator operator--();
```

### Parameters

### Remarks

The first member operator (predecrement) decrements the stored iterator. Then returns **`*this`**.

The second (postdecrement) operator makes a copy of **`*this`**, evaluates `--*this`. Then returns the copy.

## <a name="operator-"></a> move_iterator::operator-

Decrements the stored iterator and returns the indicated value.

```cpp
move_iterator operator-(difference_type _Off) const;
```

### Parameters

### Remarks

The operator returns `move_iterator(*this) -= _Off`.

## <a name="op_star"></a> move_iterator::operator*

Dereferences the stored iterator and returns the value. This behaves like an `rvalue reference` and performs a move assignment. The operator transfers the current element out of the base iterator. The element that follows becomes the new current element.

```cpp
reference operator*() const;
```

### Remarks

The operator returns `(reference)*base()`.

## <a name="op_arrow"></a> move_iterator::operator-&gt;

Like a normal `RandomIterator` `operator->`, it provides access to the fields that belong to the current element.

```cpp
pointer operator->() const;
```

### Remarks

The operator returns `&**this`.

## <a name="pointer"></a> move_iterator::pointer

The type `pointer` is a **`typedef`** based on the random iterator `RandomIterator` for `move_iterator`, and can be used interchangeably.

```cpp
typedef RandomIterator  pointer;
```

### Remarks

The type is a synonym for `RandomIterator`.

## <a name="reference"></a> move_iterator::reference

The type `reference` is a **`typedef`** based on `value_type&&` for `move_iterator`, and can be used interchangeably with `value_type&&`.

```cpp
typedef value_type&& reference;
```

### Remarks

The type is a synonym for `value_type&&`, which is an rvalue reference.

## <a name="value_type"></a> move_iterator::value_type

The type `value_type` is a `move_iterator` **`typedef`** based on the iterator trait `value_type`, and can be used interchangeably with it.

```cpp
typedef typename iterator_traits<RandomIterator>::value_type   value_type;
```

### Remarks

The type is a synonym for the iterator trait `typename iterator_traits<RandomIterator>::value_type`.

## See also

[\<iterator>](../standard-library/iterator.md)\
[Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)\
[Move Constructors and Move Assignment Operators (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md)\
[C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
