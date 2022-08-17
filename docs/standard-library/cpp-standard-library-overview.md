---
description: "Learn more about: C++ Standard Library (STL) Overview"
title: "C++ Standard Library Overview (STL)"
ms.date: "08/17/2022"
helpviewer_keywords: ["headers, C++ library", "C++ Standard Library", "libraries, Standard C++", "C++ Standard Library, headers", "STL", "Standard template library, headers"]
---
# C++ Standard Library (STL) overview

All C++ library entities are declared or defined in one or more standard headers. This implementation includes two additional headers, `<hash_map>` and `<hash_set>`, that are not required by the C++ Standard. For a complete list of headers that this implementation supports, see [Header Files Reference](../standard-library/cpp-standard-library-header-files.md).

A freestanding implementation of the C++ library provides only a subset of these headers:

[`<cstdarg>`](../standard-library/cstdarg.md)\
[`<cstddef>`](../standard-library/cstddef.md)\
[`<cstdlib>`](../standard-library/cstdlib.md) (declaring at least the functions `abort`, `atexit`, and `exit`)\
[`<exception>`](../standard-library/exception.md)\
[`<limits>`](../standard-library/limits.md)\
[`<new>`](../standard-library/new.md)

The C++ library headers have two broader subdivisions:

- [iostreams](../standard-library/iostreams-conventions.md) conventions.

- [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md) conventions.

This section contains the following sections:

- [Using C++ Library Headers](../standard-library/using-cpp-library-headers.md)

- [C++ Library Conventions](../standard-library/cpp-library-conventions.md)

- [iostreams Conventions](../standard-library/iostreams-conventions.md)

- [C++ Program Startup and Termination](../standard-library/cpp-program-startup-and-termination.md)

- [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)

- [Checked Iterators](../standard-library/checked-iterators.md)

- [Debug Iterator Support](../standard-library/debug-iterator-support.md)

- [C++ Standard Library Reference](../standard-library/cpp-standard-library-reference.md)

- [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

- [stdext Namespace](../standard-library/stdext-namespace.md)

- [Regular Expressions (C++)](../standard-library/regular-expressions-cpp.md)

For more information about Visual C++ run-time libraries, see [CRT Library Features](../c-runtime-library/crt-library-features.md).

> [!NOTE]
> Microsoft's implementation of the C++ Standard Library is often referred to as the *STL* or *Standard Template Library*. Although *C++ Standard Library* is the official name of the library as defined in ISO 14882, due to the popular use of "STL" and "Standard Template Library" in search engines, we occasionally use those names to make it easier to find our documentation.
From a historical perspective, "STL" originally referred to the Standard Template Library written by Alexander Stepanov. Parts of that library were standardized in the C++ Standard Library, along with the ISO C runtime library, parts of the Boost library, and other functionality. Sometimes "STL" is also used to refer to the containers and algorithms parts of the C++ Standard Library adapted from Stepanov's STL. In this documentation, Standard Template Library (STL) refers to the C++ Standard Library as a whole.


## See also

[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
