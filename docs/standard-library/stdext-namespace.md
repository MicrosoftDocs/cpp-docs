---
description: "Learn more about: stdext Namespace"
title: "stdext Namespace"
ms.date: "09/06/2017"
f1_keywords: ["stdext"]
helpviewer_keywords: ["_DEFINE_DEPRECATED_HASH_CLASSES symbol", "stdext namespace"]
---
# stdext namespace

> [!NOTE]
> The `stdext` namespace and the `<hash_map>` and `<hash_set>` headers were removed in MSVC Build Tools version 14.51.

Members of the [`<hash_map>`](../standard-library/hash-map.md) and [`<hash_set>`](../standard-library/hash-set.md) header files aren't currently part of the ISO C++ standard. To stay conformant with the C++ standard, the compiler moved these types and members from the `std` namespace to the `stdext` namespace.

When you compile with [/Ze](../build/reference/za-ze-disable-language-extensions.md), which is the default, the compiler warns you if you use `std` for members of the `<hash_map>` and `<hash_set>` header files. To disable the warning, use the [warning](../preprocessor/warning.md) pragma.

To make the compiler generate an error for the use of `std` for members of the `<hash_map>` and `<hash_set>` header files with **/Ze**, add the following directive before you `#include` any C++ Standard Library header files.

```cpp
#define _DEFINE_DEPRECATED_HASH_CLASSES 0
```

When you compile with **/Za**, the compiler generates an error.

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)
