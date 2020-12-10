---
description: "Learn more about: &lt;type_traits&gt; typedefs"
title: "&lt;type_traits&gt; typedefs"
ms.date: "11/04/2016"
f1_keywords: ["type_traits/std::false_type", "xtr1common/std::false_type", "type_traits/std::true_type", "xtr1common/std::true_type"]
ms.assetid: 8ac040ca-ed2d-4570-adc9-cb5626530053
---
# &lt;type_traits&gt; typedefs

[false_type](#false_type)\
[true_type](#true_type)

## <a name="false_type"></a> false_type Typedef

Holds integral constant with false value.

```cpp
typedef integral_constant<bool, false> false_type;
```

### Remarks

The type is a synonym for a specialization of the template `integral_constant`.

### Example

```cpp
#include <type_traits>
#include <iostream>

int main() {
    std::cout << "false_type == " << std::boolalpha
        << std::false_type::value << std::endl;
    std::cout << "true_type == " << std::boolalpha
        << std::true_type::value << std::endl;

    return (0);
}
```

```Output
false_type == false
true_type == true
```

## <a name="true_type"></a> true_type Typedef

Holds integral constant with true value.

```cpp
typedef integral_constant<bool, true> true_type;
```

### Remarks

The type is a synonym for a specialization of the template `integral_constant`.

### Example

```cpp
// std__type_traits__true_type.cpp
// compile with: /EHsc
#include <type_traits>
#include <iostream>

int main() {
    std::cout << "false_type == " << std::boolalpha
        << std::false_type::value << std::endl;
    std::cout << "true_type == " << std::boolalpha
        << std::true_type::value << std::endl;

    return (0);
}
```

```Output
false_type == false
true_type == true
```

## See also

[<type_traits>](../standard-library/type-traits.md)
