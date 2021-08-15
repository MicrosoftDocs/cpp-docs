---
description: "Learn more about: reference_wrapper Class"
title: "reference_wrapper Class"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::reference_wrapper", "type_traits/std::reference_wrapper", "xrefwrap/std::reference_wrapper", "type_traits/std::reference_wrapper::get", "type_traits/std::reference_wrapper::operator()", "functional/std::reference_wrapper::result_type", "functional/std::reference_wrapper::type", "functional/std::reference_wrapper::get", "functional/std::reference_wrapper::operator()"]
helpviewer_keywords: ["std::reference_wrapper [C++]", "std::reference_wrapper [C++]", "std::reference_wrapper [C++], result_type", "std::reference_wrapper [C++], type", "std::reference_wrapper [C++], get"]
ms.assetid: 90b8ed62-e6f1-44ed-acc7-9619bd58865a
---
# reference_wrapper Class

Wraps a reference.

## Syntax

```cpp
template <class Ty>
class reference_wrapper
{
    typedef Ty type;

    reference_wrapper(Ty&) noexcept;
    operator Ty&() const noexcept;
    Ty& get() const noexcept;

    template <class... Types>
    auto operator()(Types&&... args) const ->
        decltype(std::invoke(get(), std::forward<Types>(args)...));
};
```

## Remarks

A `reference_wrapper<Ty>` is a copy constructible and copy assignable wrapper around a reference to an object or a function of type `Ty`, and holds a pointer that points to an object of that type. A `reference_wrapper` can be used to store references in standard containers, and to pass objects by reference to `std::bind`.

The type `Ty` must be an object type or a function type, or a static assert fails at compile time.

The helper functions [std::ref](functional-functions.md#ref) and [std::cref](functional-functions.md#cref) can be used to create `reference_wrapper` objects.

## Members

### Constructors

|Name|Description|
|-|-|
|[reference_wrapper](#reference_wrapper)|Constructs a `reference_wrapper`.|

### Typedefs

|Name|Description|
|-|-|
|[result_type](#result_type)|The weak result type of the wrapped reference.|
|[type](#type)|The type of the wrapped reference.|

### Functions

|Name|Description|
|-|-|
|[get](#get)|Obtains the wrapped reference.|

### Operators

|Name|Description|
|-|-|
|[operator Ty&amp;](#op_ty_amp)|Gets a pointer to the wrapped reference.|
|[operator()](#op_call)|Calls the wrapped reference.|

## <a name="get"></a> get

Obtains the wrapped reference.

```cpp
Ty& get() const noexcept;
```

### Remarks

The member function returns the wrapped reference.

### Example

```cpp
// std__functional__reference_wrapper_get.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << rwi << std::endl;
    rwi.get() = -1;
    std::cout << "i = " << i << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
i = -1
```

## <a name="op_ty_amp"></a> operator Ty&amp;

Gets the wrapped reference.

```cpp
operator Ty&() const noexcept;
```

### Remarks

The member operator returns `*ptr`.

### Example

```cpp
// std__functional__reference_wrapper_operator_cast.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "(int)rwi = " << (int)rwi << std::endl;

    return (0);
}
```

```Output
i = 1
(int)rwi = 1
```

## <a name="op_call"></a> operator()

Calls the wrapped reference.

```cpp
template <class... Types>
auto operator()(Types&&... args);
```

### Parameters

*Types*\
The argument list types.

*args*\
The argument list.

### Remarks

The template member `operator()` returns `std::invoke(get(), std::forward<Types>(args)...)`.

### Example

```cpp
// std__functional__reference_wrapper_operator_call.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    std::reference_wrapper<int (int)> rwi(neg);

    std::cout << "rwi(3) = " << rwi(3) << std::endl;

    return (0);
}
```

```Output
rwi(3) = -3
```

## <a name="reference_wrapper"></a> reference_wrapper

Constructs a `reference_wrapper`.

```cpp
reference_wrapper(Ty& val) noexcept;
```

### Parameters

*Ty*\
The type to wrap.

*val*\
The value to wrap.

### Remarks

The constructor sets the stored value `ptr` to `&val`.

### Example

```cpp
// std__functional__reference_wrapper_reference_wrapper.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    int i = 1;
    std::reference_wrapper<int> rwi(i);

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << rwi << std::endl;
    rwi.get() = -1;
    std::cout << "i = " << i << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
i = -1
```

## <a name="result_type"></a> result_type

The weak result type of the wrapped reference.

```cpp
typedef R result_type;
```

### Remarks

The `result_type` typedef is a synonym for the weak result type of a wrapped function. This typedef is only meaningful for function types.

### Example

```cpp
// std__functional__reference_wrapper_result_type.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    typedef std::reference_wrapper<int (int)> Mywrapper;
    Mywrapper rwi(neg);
    Mywrapper::result_type val = rwi(3);

    std::cout << "val = " << val << std::endl;

    return (0);
}
```

```Output
val = -3
```

## <a name="type"></a> type

The type of the wrapped reference.

```cpp
typedef Ty type;
```

### Remarks

The typedef is a synonym for the template argument `Ty`.

### Example

```cpp
// std__functional__reference_wrapper_type.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val) {
    return (-val);
}

int main() {
    int i = 1;
    typedef std::reference_wrapper<int> Mywrapper;
    Mywrapper rwi(i);
    Mywrapper::type val = rwi.get();

    std::cout << "i = " << i << std::endl;
    std::cout << "rwi = " << val << std::endl;

    return (0);
}
```

```Output
i = 1
rwi = 1
```
