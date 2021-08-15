---
description: "Learn more about: &lt;cassert&gt;"
title: "&lt;cassert&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cassert>"]
helpviewer_keywords: ["cassert header"]
ms.assetid: 6ead15a3-ac45-4075-be8e-350bca995c26
---
# &lt;cassert&gt;

Includes the C Standard library header \<assert.h> and adds the associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C Standard library header are declared in the `std` namespace.

> [!NOTE]
> \<assert.h> doesn't define the **`static_assert`** macro.

## Syntax

```cpp
#include <cassert>
```

## Macros

```cpp
#define assert(E)
```

### Remarks

`assert(E)` is only constant, if NDEBUG is defined where `assert` is last defined or redefined, or *E* converted to bool evaluates to **`true`**.

## See also

[assert Macro, _assert, _wassert](../c-runtime-library/reference/assert-macro-assert-wassert.md)\
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
