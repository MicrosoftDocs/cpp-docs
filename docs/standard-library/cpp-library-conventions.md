---
description: "Learn more about: C++ Library Conventions"
title: "C++ Library Conventions"
ms.date: "11/04/2016"
helpviewer_keywords: ["C++ Standard Library, conventions", "classes [C++]", "functions [C++], library naming conventions", "naming conventions [C++], C++ Standard Library", "conventions [C++], C++ Standard Library", "function names [C++]", "coding conventions, C++ Standard Library", "naming conventions [C++], C++ library"]
ms.assetid: bf41b79a-2d53-4f46-8d05-779358335146
---
# C++ Library Conventions

The C++ library obeys much the same conventions as the Standard C Library, plus a few more outlined here.

An implementation has certain latitude in how it declares types and functions in the C++ library:

- Names of functions in the Standard C library may have either extern "C++" or extern "C" linkage. Include the appropriate Standard C header rather than declare a library entity inline.

- A member function name in a library class may have additional function signatures over those listed in this document. You can be sure that a function call described here behaves as expected, but you cannot reliably take the address of a library member function. (The type may not be what you expect.)

- A library class may have undocumented (nonvirtual) base classes. A class documented as derived from another class may, in fact, be derived from that class through other undocumented classes.

- A type defined as a synonym for some integer type may be the same as one of several different integer types.

- A bitmask type can be implemented as either an integer type or an enumeration. In either case, you can perform bitwise operations (such as `AND` and `OR`) on values of the same bitmask type. The elements `A` and `B` of a bitmask type are nonzero values such that `A` & `B` is zero.

- A library function that has no exception specification can throw an arbitrary exception, unless its definition clearly restricts such a possibility.

On the other hand, there are some restrictions:

- The Standard C Library uses no masking macros. Only specific function signatures are reserved, not the names of the functions themselves.

- A library function name outside a class will not have additional, undocumented, function signatures. You can reliably take its address.

- Base classes and member functions described as virtual are assuredly virtual, while those described as nonvirtual are assuredly nonvirtual.

- Two types defined by the C++ library are always different unless this document explicitly suggests otherwise.

- Functions supplied by the library, including the default versions of replaceable functions, can throw *at most* those exceptions listed in any exception specification. No destructors supplied by the library throw exceptions. Functions in the Standard C Library may propagate an exception, as when `qsort` calls a comparison function that throws an exception, but they do not otherwise throw exceptions.

## See also

[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
