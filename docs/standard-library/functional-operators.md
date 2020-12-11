---
description: "Learn more about: &lt;functional&gt; operators"
title: "&lt;functional&gt; operators"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::operator!=", "functional/std::operator=="]
helpviewer_keywords: ["functional operators"]
ms.assetid: d4b3c760-f3e2-4b65-bdaa-d42e8dd6f5e1
---
# &lt;functional&gt; operators

## <a name="op_eq_eq"></a> operator==

Tests if callable object is empty.

```cpp
template <class Fty>
    bool operator==(const function<Fty>& f, null_ptr_type npc);

template <class Fty>
    bool operator==(null_ptr_type npc, const function<Fty>& f);
```

### Parameters

*Fty*\
The function type to wrap.

*f*\
The function object

*npc*\
A null pointer.

### Remarks

The operators both take an argument that is a reference to a `function` object and an argument that is a null pointer constant. Both return true only if the `function` object is empty.

### Example

```cpp
// std__functional__operator_eq.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
{
    return (-val);
}

int main()
{
    std::function<int(int)> fn0;
    std::cout << std::boolalpha << "empty == "
        << (fn0 == 0) << std::endl;

    std::function<int(int)> fn1(neg);
    std::cout << std::boolalpha << "empty == "
        << (fn1 == 0) << std::endl;

    return (0);
}
```

```Output
empty == true
empty == false
```

## <a name="op_neq"></a> operator!=

Tests if callable object is not empty.

```cpp
template <class Fty>
    bool operator!=(const function<Fty>& f, null_ptr_type npc);

template <class Fty>
    bool operator!=(null_ptr_type npc, const function<Fty>& f);
```

### Parameters

*Fty*\
The function type to wrap.

*f*\
The function object

*npc*\
A null pointer.

### Remarks

The operators both take an argument that is a reference to a `function` object and an argument that is a null pointer constant. Both return true only if the `function` object is not empty.

### Example

```cpp
// std__functional__operator_ne.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    std::function<int (int)> fn0;
    std::cout << std::boolalpha << "not empty == "
        << (fn0 != 0) << std::endl;

    std::function<int (int)> fn1(neg);
    std::cout << std::boolalpha << "not empty == "
        << (fn1 != 0) << std::endl;

    return (0);
    }
```

```Output
not empty == false
not empty == true
```
