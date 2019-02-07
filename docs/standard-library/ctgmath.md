---
title: "&lt;ctgmath&gt;"
ms.date: "11/04/2016"
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
---
# &lt;ctgmath&gt;

In effect, includes the C++ Standard Library headers \<ccomplex> and \<cmath>, which provide type-generic math macros equivalent to \<tgmath.h>.

## Syntax

```cpp
#include <ctgmath>
```

## Remarks

The functionality of the Standard C library header \<tgmath.h> is provided by overloads in \<ccomplex> and \<cmath>.

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

- [\<ccomplex>](../standard-library/ccomplex.md)
- [\<cmath>](../standard-library/cmath.md)
- [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
- [C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)
- [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
