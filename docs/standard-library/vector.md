---
title: "&lt;vector&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<vector>"]
helpviewer_keywords: ["vector header"]
ms.assetid: c1431ad8-c0b6-4dbb-89c4-5f651e432d7f
---
# &lt;vector&gt;

Defines the container template class vector and several supporting templates.

The `vector` is a container that organizes elements of a given type in a linear sequence. It enables fast random access to any element, and dynamic additions and removals to and from the sequence. The `vector` is the preferred container for a sequence when random-access performance is at a premium.

For more information about the class `vector`, see [vector Class](../standard-library/vector-class.md). For information about the specialization `vector<bool>`, see [vector\<bool> Class](../standard-library/vector-bool-class.md).

## Syntax

```cpp
namespace std {
template <class Type, class Allocator>
class vector;
template <class Allocator>
class vector<bool>;

template <class Allocator>
struct hash<vector<bool, Allocator>>;

// TEMPLATE FUNCTIONS
template <class Type, class Allocator>
bool operator== (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator!= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator<(
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator> (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator<= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
bool operator>= (
    const vector<Type, Allocator>& left,
    const vector<Type, Allocator>& right);

template <class Type, class Allocator>
void swap (
    vector<Type, Allocator>& left,
    vector<Type, Allocator>& right);

}  // namespace std
```

### Parameters

*Type*<br/>
The template parameter for the type of data stored in the vector.

*Allocator*<br/>
The template parameter for the stored allocator object responsible for memory allocation and deallocation.

*left*<br/>
The first (left) vector in a compare operation

*right*<br/>
The second (right) vector in a compare operation.

### Operators

|Operator|Description|
|-|-|
|[operator! =](../standard-library/vector-operators.md#op_neq)|Tests if the vector object on the left side of the operator is not equal to the vector object on the right side.|
|[operator<](../standard-library/vector-operators.md#op_lt)|Tests if the vector object on the left side of the operator is less than the vector object on the right side.|
|[operator\<=](../standard-library/vector-operators.md#op_gt_eq)|Tests if the vector object on the left side of the operator is less than or equal to the vector object on the right side.|
|[operator==](../standard-library/vector-operators.md#op_eq_eq)|Tests if the vector object on the left side of the operator is equal to the vector object on the right side.|
|[operator>](../standard-library/vector-operators.md#op_gt)|Tests if the vector object on the left side of the operator is greater than the vector object on the right side.|
|[operator>=](../standard-library/vector-operators.md#op_gt_eq)|Tests if the vector object on the left side of the operator is greater than or equal to the vector object on the right side.|

### Classes

|Class|Description|
|-|-|
|[vector Class](../standard-library/vector-class.md)|A template class of sequence containers that arrange elements of a given type in a linear arrangement and allow fast random access to any element.|

### Specializations

|||
|-|-|
|[vector\<bool> Class](../standard-library/vector-bool-class.md)|A full specialization of the template class vector for elements of type `bool` with an allocator for the underlying type used by the specialization.|

## Requirements

**Header:** \<vector>

**Namespace:** std

## See also

- [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
- [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
- [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)
