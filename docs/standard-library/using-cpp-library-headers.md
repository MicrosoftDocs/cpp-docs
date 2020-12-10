---
description: "Learn more about: Using C++ Library Headers"
title: "Using C++ Library Headers"
ms.date: "11/04/2016"
helpviewer_keywords: ["headers, naming in C++ include directive", "standard header in C++", "headers", "INCLUDE directive", "headers, C++ Standard Library", "library headers", "C++ Standard Library, headers"]
ms.assetid: a36e889e-1af2-4cd9-a211-bfc7a3fd8e85
---
# Using C++ Library Headers

You include the contents of a standard header by naming it in an include directive.

```cpp
#include <iostream>// include I/O facilities
```

You can include the standard headers in any order, a standard header more than once, or two or more standard headers that define the same macro or the same type. Do not include a standard header within a declaration. Do not define macros that have the same names as keywords before you include a standard header.

A C++ library header includes any other C++ library headers it needs to define needed types. (Always include explicitly any C++ library headers needed in a translation unit, however, lest you guess wrong about its actual dependencies.) A Standard C header never includes another standard header. A standard header declares or defines only the entities described for it in this document.

Every function in the library is declared in a standard header. Unlike in Standard C, the standard header never provides a masking macro with the same name as the function that masks the function declaration and achieves the same effect. For more information on masking macros, see [C++ Library Conventions](../standard-library/cpp-library-conventions.md).

All names other than **operator delete** and **operator new** in the C++ library headers are defined in the `std` namespace, or in a namespace nested within the `std` namespace. You refer to the name `cin`, for example, as `std::cin`. Note, however, that macro names are not subject to namespace qualification, so you always write `__STD_COMPLEX` without a namespace qualifier.

In some translation environments, including a C++ library header may hoist external names declared in the `std` namespace into the global namespace as well, with individual **`using`** declarations for each of the names. Otherwise, the header does *not* introduce any library names into the current namespace.

The C++ Standard requires that the C Standard headers declare all external names in namespace `std`, then hoist them into the global namespace with individual **`using`** declarations for each of the names. But in some translation environments the C Standard headers include no namespace declarations, declaring all names directly in the global namespace. Thus, the most portable way to deal with namespaces is to follow two rules:

- To assuredly declare in namespace `std` an external name that is traditionally declared in \<stdlib.h>, for example, include the header \<cstdlib>. Know that the name might also be declared in the global namespace.

- To assuredly declare in the global namespace an external name declared in \<stdlib.h>, include the header \<stdlib.h> directly. Know that the name might also be declared in namespace `std`.

Thus, if you want to call `std::abort` to cause abnormal termination, you should include \<cstdlib>. If you want to call `abort`, you should include \<stdlib.h>.

Alternatively, you can write the declaration:

```cpp
using namespace std;
```

which brings all library names into the current namespace. If you write this declaration immediately after all include directives, you hoist the names into the global namespace. You can subsequently ignore namespace considerations in the remainder of the translation unit. You also avoid most differences across different translation environments.

Unless specifically indicated otherwise, you may not define names in the `std` namespace, or in a namespace nested within the `std` namespace, within your program.

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
