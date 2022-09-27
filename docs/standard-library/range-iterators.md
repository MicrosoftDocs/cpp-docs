JTW - stub topic to convert to range-iterators.


---
description: "Learn more about range concepts and range iterator concepts."
title: "Concepts for ranges and range iterators"
ms.date: 09/22/2022
f1_keywords: ["ranges/std::ranges::range"]
helpviewer_keywords: ["std::ranges [C++], range"]
---
# Concepts for <ranges>

Concepts are are C++20 language feature used to constrain template parameters at compile time. They help prevent incorrect template instantiations, convey template argument requirements in a readable form, and provide more succinct template related compiler errors.

Consider the following example, which defines a concept to prevent instantiating a template with types that can't be divided:

```cpp
// requires /std:c++20 or later

// Definition of the concept "dividable" that requires 
// that arguments a & b can be divided
template <typename T>
concept dividable = requires (T a, T b)
{
    a / b;
};

// Apply the concept to a template
// The template will only be instantiated if the argument T can do division
// This prevents the template from being instantiated with types that can't be divided
// This could have been applied to the parameter of a template function, but because
// most of the concepts in the <ranges> library are applied to classes, this form is used
template <class T> requires dividable<T>
class DivideEmUp
{
public:
    T Divide(T x, T y)
    {
        return x / y;
    }
};

void main()
{
    DivideEmUp<int> dividerOfInts;
    std::cout << dividerOfInts.Divide(6, 3); // outputs: 2
    // The following line will not compile because the template can't be instantiated 
    // with char* because char* can be divided
    DivideEmUp<char*> dividerOfCharPtrs; // compiler error: cannot deduce template arguments 
}
```

The following concepts are defined in `std::ranges` and are declared in the `<ranges>` header file. They are used in the declarations of [range adaptors](range-adaptors.md), [views](views.md), and so on.

| **Range concept ** | **Description** |
|--|--|
| [`range`](#range)<sup>C++20</sup> | A `range` is a type that can be iterated. |
| [`borrowed_range`](#borrowed_range)<sup>C++20</sup> | The validity of the iterators for a `borrowed_range` are not tied to the object's lifetime. |
| [`sized_range`](#sized_range)<sup>C++20</sup> | A `range` that can provide the number of its elements in amortized constant time via `ranges::size` |

## `borrowed_range`

A type models `borrowed_range` if the validity of iterators you get from the object can outlive the lifetime of the object.

```cpp
template<class T>
concept borrowed_range =
    range<T> &&
    (is_lvalue_reference_v<T> || enable_borrowed_range<remove_cvref_t<T>>);
```

### Parameters

*`T`*\
The type to test to see if it is a `borrowed_range`.

## `range`

Defines the requirements a type must meet to be a `range`. A `range` provides an iterator and a sentinel for iterating over the elements in the `range`.

```cpp
template<class R>
concept range = requires(T& rg)
{
  ranges::begin(rg);
  ranges::end(rg);
};
```

### Parameters

*`T`*\
The type to test to see if it is a `range`.

*`rg`*\
An instance of `R` to test.

### Remarks

The requirements of a `range` are:
- it can be iterated using `std::ranges::begin()` and `std::ranges::end()`
- `ranges::begin(rg)` and `ranges::end(rg)` run in amortized constant time and don't modify the `range`. Amortized constant time doesn't mean O(1), but that the average cost over a series of calls, even in the worst case, is O(n) rather than O(n^2) or worse.
- \[`ranges::begin(rg)`, `ranges::end(rg)`) denotes a valid range.


## `sized_range`

A `sized_range` can provide the number of its elements in amortized constant time via `ranges::size`.

```cpp
template<class T>
    concept sized_range = range<T> &&
    requires(T& t) { ranges::size(t); };
```

### Parameters

*`T`*\
The type to test to see if it is a `sized_range`.

*`t`*\
An instance of `T` to test.

### Remarks

The requirements of a `sized_range` are that calling `ranges::size` on it:
- Doesn't modify the `range`.
- Returns the number of elements in amortized constant time. Amortized constant time doesn't mean O(1), but that the average cost over a series of calls, even in the worst case, is O(n) rather than O(n^2) or worse.

### Example `sized_range`

The following example demonstrates that a vector of ints satisfies the requirements of a `sized_range`:

```cpp
// requires /std:c++20 or later
#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    std::cout << boolalpha << std::ranges::sized_range<std::vector<int>> << '\n'; // outputs: true
}    
```


## See also

[`<ranges>`](ranges.md)\
[Range adaptors](range-adaptors.md)\
[View classes](view-classes.md)