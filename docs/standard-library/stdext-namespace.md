---
description: "Learn more about: stdext Namespace"
title: "stdext Namespace"
ms.date: "09/06/2017"
f1_keywords: ["stdext"]
helpviewer_keywords: ["_DEFINE_DEPRECATED_HASH_CLASSES symbol", "stdext namespace"]
ms.assetid: 3e94fc89-0584-424f-bc09-081b73379545
---
# stdext Namespace

Members of the [\<hash_map>](../standard-library/hash-map.md) and [\<hash_set>](../standard-library/hash-set.md) header files are not currently part of the ISO C++ standard. Therefore, these types and members have been moved from the `std` namespace to namespace `stdext`, to remain conformant with the C++ standard.

When compiling with [/Ze](../build/reference/za-ze-disable-language-extensions.md), which is the default, the compiler warns on the use of `std` for members of the \<hash_map> and \<hash_set> header files. To disable the warning, use the [warning](../preprocessor/warning.md) pragma.

To have the compiler generate an error for the use of `std` for members of the \<hash_map> and \<hash_set> header files with **/Ze**, add the following directive before you `#include` any C++ Standard Library header files.

```cpp
#define _DEFINE_DEPRECATED_HASH_CLASSES 0
```

When compiling with **/Za**, the compiler generates an error.

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)
