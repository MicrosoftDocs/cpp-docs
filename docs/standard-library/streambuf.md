---
description: "Learn more about: &lt;streambuf&gt;"
title: "&lt;streambuf&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<streambuf>"]
helpviewer_keywords: ["streambuf header"]
ms.assetid: 4365b25c-5831-488b-b9c2-867bfe961b89
---
# &lt;streambuf&gt;

Include the iostreams standard header \<streambuf> to define the class template [basic_streambuf](../standard-library/basic-streambuf-class.md), which is basic to the operation of the iostreams classes. This header is typically included for you by another of the iostreams headers; you rarely need to include it directly.

## Syntax

```cpp
#include <streambuf>
```

### Typedefs

|Type name|Description|
|-|-|
|[streambuf](../standard-library/streambuf-typedefs.md#streambuf)|A specialization of `basic_streambuf` that uses **`char`** as the template parameters.|
|[wstreambuf](../standard-library/streambuf-typedefs.md#wstreambuf)|A specialization of `basic_streambuf` that uses **`wchar_t`** as the template parameters.|

### Classes

|Class|Description|
|-|-|
|[basic_streambuf Class](basic-streambuf-class.md)|The class template describes an abstract base class for deriving a stream buffer, which controls the transmission of elements to and from a specific representation of a stream.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
