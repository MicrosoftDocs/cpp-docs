---
description: "Learn more about: C++ Standard Library (STL) Overview"
title: "C++ Standard Library Overview (STL)"
ms.date: "08/18/2022"
helpviewer_keywords: ["headers, C++ library", "C++ Standard Library", "libraries, Standard C++", "C++ Standard Library, headers", "STL", "Standard template library, headers"]
---
# C++ Standard Library (STL) overview

All C++ library entities are declared or defined in one or more standard headers. This implementation includes two other headers, `<hash_map>` and `<hash_set>`, that aren't required by the C++ Standard. For a complete list of headers that this implementation supports, see [Header files reference](../standard-library/cpp-standard-library-header-files.md).

The C++ standard defines two kinds of conforming libraries:
- A *hosted implementation*, which supports all of the required standard library headers described by the C++ ISO standard.
- A *freestanding implementation*, which requires only a subset of the standard library headers. The required subset is:

| Freestanding header subset | &emsp; | &emsp; |
|--|--|--|
| [`<atomic>`](../standard-library/atomic.md) (declaring at least `atomic_signed_lock_free` and `atomic_unsigned_lock_free`) | [`<cstdint>`](../standard-library/cstdint.md) | [`<ranges>`](../standard-library/ranges.md) |
| [`<bit>`](../standard-library/bit.md) | [`<cstdlib>`](../standard-library/cstdlib.md) (declaring at least `abort`, `atexit`, `at_quick_exit`, `exit`, `quick_exit`) | [`<ratio>`](../standard-library/ratio.md) |
| [`<cfloat>`](../standard-library/cfloat.md) | [`<exception>`](../standard-library/exception.md) | [`<tuple>`](../standard-library/tuple.md) |
| [`<climits>`](../standard-library/climits.md) | [`<functional>`](../standard-library/functional.md) | [`<typeinfo>`](../standard-library/typeinfo.md) |
| `<compare>` | [`<initializer_list>`](../standard-library/initializer-list.md) | `<source_location>` |
| `<concepts>` | [`<iterator>`](../standard-library/iterator.md) | [`<type_traits>`](../standard-library/type-traits.md) |
| `<coroutine>` | [`<limits>`](../standard-library/limits.md) | [`<utility>`](../standard-library/utility.md) |
| [`<cstdarg>`](../standard-library/cstdarg.md) | [`<memory>`](../standard-library/memory.md) | `<version>` |
| [`<cstddef>`](../standard-library/cstddef.md) | [`<new>`](../standard-library/new.md) |  |

The following headers are deprecated since C++11: [`<ciso646>`](../standard-library/ciso646.md), [`<cstdalign>`](../standard-library/cstdalign.md), and [`<cstdbool>`](../standard-library/cstdbool.md).

Other differences between freestanding and hosted implementations are:

- Hosted implementations require a global function named `main`. A freestanding implementation can define its own startup and termination functions.
- Hosted implementations must support more than one thread running at the same time. Implementors of freestanding implementations decide whether their library supports concurrent threads.

The Microsoft C++ standard library satisfies both freestanding and hosted requirements.

The C++ library headers have two broader subdivisions:

- [iostreams](../standard-library/iostreams-conventions.md) conventions.

- [C++ Standard library (STL) reference](../standard-library/cpp-standard-library-reference.md) conventions.

This section contains the following sections:

- [Using C++ library headers](../standard-library/using-cpp-library-headers.md)

- [C++ library conventions](../standard-library/cpp-library-conventions.md)

- [iostreams Conventions](../standard-library/iostreams-conventions.md)

- [C++ program startup and termination](../standard-library/cpp-program-startup-and-termination.md)

- [Safe libraries: C++ standard library](../standard-library/safe-libraries-cpp-standard-library.md)

- [Checked iterators](../standard-library/checked-iterators.md)

- [Debug iterator support](../standard-library/debug-iterator-support.md)

- [C++ standard library (STL) reference](../standard-library/cpp-standard-library-reference.md)

- [Thread safety in the C++ standard library](../standard-library/thread-safety-in-the-cpp-standard-library.md)

- [stdext namespace](../standard-library/stdext-namespace.md)

- [Regular expressions (C++)](../standard-library/regular-expressions-cpp.md)

For more information about Visual C++ run-time libraries, see [CRT Library Features](../c-runtime-library/crt-library-features.md).

> [!NOTE]
> Microsoft's implementation of the C++ Standard Library is often referred to as the *STL* or *Standard Template Library*. Although *C++ Standard Library* is the official name of the library as defined in ISO 14882, due to the popular use of "STL" and "Standard Template Library" in search engines, we occasionally use those names to make it easier to find our documentation.
From a historical perspective, "STL" originally referred to the Standard Template Library written by Alexander Stepanov. Parts of that library were standardized in the C++ Standard Library, along with the ISO C runtime library, parts of the Boost library, and other functionality. Sometimes "STL" is also used to refer to the containers and algorithms parts of the C++ Standard Library adapted from Stepanov's STL. In this documentation, Standard Template Library (STL) refers to the C++ Standard Library as a whole.

## See also

[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
