---
description: "Learn more about: &lt;type_traits&gt; functions"
title: "&lt;type_traits&gt; functions"
ms.date: "11/04/2016"
ms.assetid: dce4492f-f3e4-4d5e-bdb4-5875321254ec
helpviewer_keywords: ["std::is_assignable", "std::is_copy_assignable", "std::is_copy_constructible", "std::is_default_constructible", "std::is_move_assignable", "std::is_move_constructible", "std::is_nothrow_move_assignable", "std::is_trivially_copy_assignable", "std::is_trivially_move_assignable", "std::is_trivially_move_constructible"]
---
# &lt;type_traits&gt; functions

[is_assignable](#is_assignable)\
[is_copy_assignable](#is_copy_assignable)\
[is_copy_constructible](#is_copy_constructible)\
[is_default_constructible](#is_default_constructible)\
[is_move_assignable](#is_move_assignable)\
[is_move_constructible](#is_move_constructible)\
[is_nothrow_move_assignable](#is_nothrow_move_assignable)\
[is_nothrow_swappable](#is_nothrow_swappable)\
[is_nothrow_swappable_with](#is_nothrow_swappable_with)\
[is_swappable](#is_swappable)\
[is_swappable_with](#is_swappable_with)\
[is_trivially_copy_assignable](#is_trivially_copy_assignable)\
[is_trivially_move_assignable](#is_trivially_move_assignable)\
[is_trivially_move_constructible](#is_trivially_move_constructible)

## <a name="is_assignable"></a> is_assignable

Tests whether a value of *From* type can be assigned to a *To* type.

```cpp
template <class To, class From>
struct is_assignable;
```

### Parameters

*To*\
The type of the object that receives the assignment.

*From*\
The type of the object that provides the value.

### Remarks

The unevaluated expression `declval<To>() = declval<From>()` must be well-formed. Both *From* and *To* must be complete types, **`void`**, or arrays of unknown bound.

## <a name="is_copy_assignable"></a> is_copy_assignable

Tests whether type has can be copied on assignment.

```cpp
template <class Ty>
struct is_copy_assignable;
```

### Parameters

*Ty*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a copy assignment operator, otherwise it holds false. Equivalent to is_assignable\<Ty&, const Ty&>.

## <a name="is_copy_constructible"></a> is_copy_constructible

Tests if type has a copy constructor.

```cpp
template <class Ty>
struct is_copy_constructible;
```

### Parameters

*Ty*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a copy constructor, otherwise it holds false.

### Example

```cpp
#include <type_traits>
#include <iostream>

struct Copyable
{
    int val;
};

struct NotCopyable
{
   NotCopyable(const NotCopyable&) = delete;
   int val;

};

int main()
{
    std::cout << "is_copy_constructible<Copyable> == " << std::boolalpha
        << std::is_copy_constructible<Copyable>::value << std::endl;
    std::cout << "is_copy_constructible<NotCopyable> == " << std::boolalpha
        << std::is_copy_constructible<NotCopyable>::value << std::endl;

    return (0);
}
```

```Output
is_copy_constructible<Copyable> == true
is_copy_constructible<NotCopyable > == false
```

## <a name="is_default_constructible"></a> is_default_constructible

Tests if a type has a default constructor.

```cpp
template <class Ty>
struct is_default_constructible;
```

### Parameters

*T*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *T* is a class type that has a default constructor, otherwise it holds false. This is equivalent to the predicate `is_constructible<T>`. Type *T* must be a complete type, **`void`**, or an array of unknown bound.

### Example

```cpp
#include <type_traits>
#include <iostream>

struct Simple
{
    Simple() : val(0) {}
    int val;
};

struct Simple2
{
    Simple2(int v) : val(v) {}
    int val;
};

int main()
{
    std::cout << "is_default_constructible<Simple> == " << std::boolalpha
        << std::is_default_constructible<Simple>::value << std::endl;
    std::cout << "is_default_constructible<Simple2> == " << std::boolalpha
        << std::is_default_constructible<Simple2>::value << std::endl;

    return (0);
}
```

```Output
is_default_constructible<Simple> == true
is_default_constructible<Simple2> == false
```

## <a name="is_move_assignable"></a> is_move_assignable

Tests if the type can be move assigned.

```cpp
template <class T>
struct is_move_assignable;
```

### Parameters

*T*\
The type to query.

### Remarks

A type is move assignable if an rvalue reference to the type can be assigned to a reference to the type. The type predicate is equivalent to `is_assignable<T&, T&&>`. Move assignable types include referenceable scalar types and class types that have either compiler-generated or user-defined move assignment operators.

## <a name="is_move_constructible"></a> is_move_constructible

Tests whether the type has a move constructor.

```cpp
template <class T>
struct is_move_constructible;
```

### Parameters

*T*\
The type to be evaluated

### Remarks

A type predicate that evaluates to true if the type *T* can be constructed by using a move operation. This predicate is equivalent to `is_constructible<T, T&&>`.

## <a name="is_nothrow_move_assignable"></a> is_nothrow_move_assignable

Tests whether type has a **`nothrow`** move assignment operator.

```cpp
template <class Ty>
struct is_nothrow_move_assignable;
```

### Parameters

*Ty*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *Ty* has a nothrow move assignment operator, otherwise it holds false.

## <a name="is_nothrow_swappable"></a> is_nothrow_swappable

```cpp
template <class T> struct is_nothrow_swappable;
```

## <a name="is_nothrow_swappable_with"></a> is_nothrow_swappable_with

```cpp
template <class T, class U> struct is_nothrow_swappable_with;
```

## <a name="is_swappable"></a> is_swappable

```cpp
template <class T> struct is_swappable;
```

## <a name="is_swappable_with"></a> is_swappable_with

```cpp
template <class T, class U> struct is_swappable_with;
```

## <a name="is_trivially_copy_assignable"></a> is_trivially_copy_assignable

Tests whether the type has a trivial copy assignment operator.

```cpp
template <class Ty>
struct is_trivially_copy_assignable;
```

### Parameters

*T*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *T* is a class that has a trivial copy assignment operator, otherwise it holds false.

An assignment constructor for a class *T* is trivial if it is implicitly provided, the class *T* has no virtual functions, the class *T* has no virtual bases, the classes of all the non-static data members of class type have trivial assignment operators, and the classes of all the non-static data members of type array of class have trivial assignment operators.

## <a name="is_trivially_move_assignable"></a> is_trivially_move_assignable

Tests whether the type has a trivial move assignment operator.

```cpp
template <class Ty>
struct is_trivially_move_assignable;
```

### Parameters

*Ty*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a trivial move assignment operator, otherwise it holds false.

A move assignment operator for a class *Ty* is trivial if:

it is implicitly provided

the class *Ty* has no virtual functions

the class *Ty* has no virtual bases

the classes of all the non-static data members of class type have trivial move assignment operators

the classes of all the non-static data members of type array of class have trivial move assignment operators

## <a name="is_trivially_move_constructible"></a> is_trivially_move_constructible

Tests if type has trivial move constructor.

```cpp
template <class Ty>
struct is_trivially_move_constructible;
```

### Parameters

*Ty*\
The type to query.

### Remarks

An instance of the type predicate holds true if the type *Ty* is a class that has a trivial move constructor, otherwise it holds false.

A move constructor for a class *Ty* is trivial if:

it is implicitly declared

its parameter types are equivalent to those of an implicit declaration

the class *Ty* has no virtual functions

the class *Ty* has no virtual bases

the class has no volatile non-static data members

all the direct bases of the class *Ty* have trivial move constructors

the classes of all the non-static data members of class type have trivial move constructors

the classes of all the non-static data members of type array of class have trivial move constructors

## See also

[<type_traits>](../standard-library/type-traits.md)
