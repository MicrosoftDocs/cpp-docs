---
title: "<array> functions"
description: "Learn more about: <array> functions"
ms.date: 11/04/2016
f1_keywords: ["array/std::array::get", "array/std::get", "array/std::swap", "array/std::to_array"]
helpviewer_keywords: ["std::array [C++], get", "std::get [C++]", "std::swap [C++]", "std::to_array [C++]"]
---
# `<array>` functions

The `<array>` header includes three non-member functions, `get`, `swap`, and `to_array` that operate on **array** objects.

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

## <a name="to_array"></a> `to_array`

Converts a built-in array to a `std::array` object.

```cpp
// C++20
template <class Type, std::size_t Size>
constexpr std::array<std::remove_cv_t<Type>, Size> to_array(Type (&arr)[Size]);

// C++20
template <class Type, std::size_t Size>
constexpr std::array<std::remove_cv_t<Type>, Size> to_array(Type (&&arr)[Size]);
```

### Template parameters

*`Type`*\
The type of an element.

*`Size`*\
The size of the input array.

### Parameters

*`arr`*\
The input array used for conversion.

### Example

```cpp
// std_to_array.cpp
// Requires /std:c++20 or later

#include <array>
#include <iostream>

int main()
{
    int arr1[]{ 1, 2, 3 };
    std::array<int, 3> arr2 = std::to_array(arr1);

    std::cout << "std::to_array(arr1):\n";
    for (const auto& i : arr2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // The size is 7 as it includes the null terminator
    std::array<char, 7> arr3 = std::to_array("string");

    std::cout << "\nstd::to_array(\"string\"):\n";
    for (const auto& i : arr3)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
```

```Output
std::to_array(arr1):
1 2 3 

std::to_array("string"):
s t r i n g 
```

## See also

[`<array>`](../standard-library/array.md)
