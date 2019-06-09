---
title: "&lt;ctgmath&gt;"
ms.date: "11/04/2016"
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
---
# &lt;ctgmath&gt;

In effect, includes the C++ Standard Library headers \<complex> and \<cmath>, which provide type-generic math macros equivalent to \<tgmath.h>.

## Requirements

**Header:** \<ctgmath>

**Namespace:** std

## Remarks

The functionality of the Standard C library header \<tgmath.h> is provided by overloads in \<complex> and \<cmath>.

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

[\<ccomplex>](../standard-library/ccomplex.md)<br/>
[\<cmath>](../standard-library/cmath.md)<br/>
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
