---
title: "<array> functions"
description: "Learn more about: <array> functions"
ms.date: 11/04/2016
f1_keywords: ["array/std::array::get", "array/std::get", "array/std::swap"]
helpviewer_keywords: ["std::array [C++], get", "std::get [C++]", "std::swap [C++]"]
---
# `<array>` functions

The `<array>` header includes two non-member functions, `get` and `swap`, that operate on **array** objects.

## <a name="get"></a> `get`

Returns a reference to the specified element of the array.

```cpp
template <std::size_t Index, class Type, std::size_t Size>
constexpr T& get(std::array<Type, Size>& arr) noexcept;

template <std::size_t Index, class Type, std::size_t Size>
constexpr const T& get(const std::array<Type, Size>& arr) noexcept;

template <std::size_t Index, class Type, std::size_t Size>
constexpr T&& get(std::array<Type, Size>&& arr) noexcept;

template <std::size_t Index, class Type, std::size_t Size>
constexpr const T&& get(const std::array<Type, Size>&& arr) noexcept;
```

### Template parameters

*`Index`*\
The element offset.

*`Type`*\
The type of an element.

*`Size`*\
The number of elements in the array.

### Parameters

*`arr`*\
The array to select from.

### Example

```cpp
#include <array>
#include <iostream>

using namespace std;

typedef array<int, 4> MyArray;

int main()
{
    MyArray c0 { 0, 1, 2, 3 };

    // display contents " 0 1 2 3"
    for (const auto& e : c0)
    {
        cout << " " << e;
    }
    cout << endl;

    // display odd elements " 1 3"
    cout << " " << get<1>(c0);
    cout << " " << get<3>(c0) << endl;
}
```

```Output
0 1 2 3
1 3
```

## <a name="swap"></a> `swap`

A non-member template specialization of `std::swap` that swaps two **array** objects.

```cpp
template <class Type, std::size_t Size>
void swap(std::array<Type, Size>& left, std::array<Type, Size>& right);
```

### Template parameters

*`Type`*\
The type of an element.

*`Size`*\
The size of the array.

### Parameters

*`left`*\
The first array to swap.

*`right`*\
The second array to swap.

### Remarks

The template function executes `left.swap(right)`.

### Example

```cpp
// std__array__swap.cpp
// compile with: /EHsc
#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
{
    Myarray c0 = { 0, 1, 2, 3 };

    // display contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    Myarray c1 = { 4, 5, 6, 7 };
    c0.swap(c1);

    // display swapped contents " 4 5 6 7"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    swap(c0, c1);

    // display swapped contents " 0 1 2 3"
    for (Myarray::const_iterator it = c0.begin();
        it != c0.end(); ++it)
        std::cout << " " << *it;
    std::cout << std::endl;

    return (0);
}
```

```Output
0 1 2 3
4 5 6 7
0 1 2 3
```

## See also

[`<array>`](../standard-library/array.md)
