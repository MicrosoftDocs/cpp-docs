---
title: "initializer_list class"
description: "A reference for the initializer_list class in the C++ Standard library, as implemented by Microsoft in Visual Studio."
ms.date: "01/28/2020"
f1_keywords: ["initializer_list/std::initializer_list::initializer_list", "initializer_list/std::initializer_list::begin", "initializer_list/std::initializer_list::end", "initializer_list/std::initializer_list::size"]
ms.assetid: 1f2c0ff4-5636-4f79-b008-e75426e3d2ab
helpviewer_keywords: ["std::initializer_list::initializer_list", "std::initializer_list::begin", "std::initializer_list::end", "std::initializer_list::size"]
---
# initializer_list class

Provides access to an array of elements in which each member is of the specified type.

## Syntax

```cpp
template <class Type>
class initializer_list
```

### Parameters

*Type*\
The element data type to be stored in the `initializer_list`.

## Remarks

An `initializer_list` can be constructed using a braced initializer list:

```cpp
initializer_list<int> i1{ 1, 2, 3, 4 };
```

The compiler transforms braced initializer lists with homogeneous elements into an `initializer_list` whenever the function signature requires an `initializer_list`. For more information about using `initializer_list`, see [Uniform initialization and delegating constructors](../cpp/initializing-classes-and-structs-without-constructors-cpp.md)

### Constructors

|Constructor|Description|
|-|-|
|[initializer_list](#initializer_list)|Constructs an object of type `initializer_list`.|

### Typedefs

|Type name|Description|
|-|-|
|`value_type`|The type of the elements in the `initializer_list`.|
|`reference`|A type that provides a reference to an element in the `initializer_list`.|
|`const_reference`|A type that provides a constant reference to an element in the `initializer_list`.|
|`size_type`|A type that represents the number of elements in the `initializer_list`.|
|`iterator`|A type that provides an iterator for the `initializer_list`.|
|`const_iterator`|A type that provides a constant iterator for the `initializer_list`.|

### Member functions

|Member function|Description|
|-|-|
|[begin](#begin)|Returns a pointer to the first element in an `initializer_list`.|
|[end](#end)|Returns a pointer to one past the last element in an `initializer_list`.|
|[size](#size)|Returns the number of elements in the `initializer_list`.|

## Requirements

**Header:** \<initializer_list>

**Namespace:** std

## <a name="begin"></a> initializer_list::begin

Returns a pointer to the first element in an `initializer_list`.

```cpp
constexpr const InputIterator* begin() const noexcept;
```

### Return value

A pointer to the first element of the `initializer_list`. If the list is empty, the pointer is the same for the beginning and end of the list.

## <a name="end"></a> initializer_list::end

Returns a pointer to one past the last element in an `initializer list`.

```cpp
constexpr const InputIterator* end() const noexcept;
```

### Return value

A pointer to one past the last element in the list. If the list is empty, it's the same as the pointer to the first element in the list.

## <a name="initializer_list"></a> initializer_list::initializer_list

Constructs an object of type `initializer_list`.

```cpp
constexpr initializer_list() noexcept;
initializer_list(const InputIterator First, const InputIterator Last);
```

### Parameters

*First*\
The position of the first element in the range of elements to be copied.

*Last*\
The position of the first element beyond the range of elements to be copied.

### Remarks

An `initializer_list` is based on an array of objects of the specified type. Copying an `initializer_list` creates a second instance of a list pointing to the same objects; the underlying objects aren't copied.

### Example

```cpp
// initializer_list_class.cpp
// compile with: /EHsc
#include <initializer_list>
#include <iostream>

int main()
{
    using namespace std;
    // Create an empty initializer_list c0
    initializer_list <int> c0;

    // Create an initializer_list c1 with 1 element
    initializer_list <int> c1{ 3 };

    // Create an initializer_list c2 with 5 elements
    initializer_list <int> c2{ 5, 4, 3, 2, 1 };

    // Create a copy, initializer_list c3, of initializer_list c2
    initializer_list <int> c3(c2);

    // Create a initializer_list c4 by copying the range c3[ first,  last)
    const int* c3_ptr = c3.begin();
    c3_ptr++;
    c3_ptr++;
    initializer_list <int> c4(c3.begin(), c3_ptr);

    // Move initializer_list c4 to initializer_list c5
    initializer_list <int> c5(move(c4));

    cout << "c1 =";
    for (auto c : c1)
        cout << " " << c;
    cout << endl;

    cout << "c2 =";
    for (auto c : c2)
        cout << " " << c;
    cout << endl;

    cout << "c3 =";
    for (auto c : c3)
        cout << " " << c;
    cout << endl;

    cout << "c5 =";
    for (auto c : c5)
        cout << " " << c;
    cout << endl;
}
```

```Output
c1 = 3
c2 = 5 4 3 2 1
c3 = 5 4 3 2 1
c5 = 5 4
```

## <a name="size"></a> initializer_list::size

Returns the number of elements in the list.

```cpp
constexpr size_t size() const noexcept;
```

### Return value

The number of elements in the list.

## See also

[<forward_list>](../standard-library/forward-list.md)
