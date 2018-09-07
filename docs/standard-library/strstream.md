---
title: "&lt;strstream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<strstream>"]
dev_langs: ["C++"]
helpviewer_keywords: ["strstream header"]
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;strstream&gt;

Defines several classes that support iostreams operations on sequences stored in an allocated array of **char** object. Such sequences are easily converted to and from C strings.

## Syntax

```cpp
#include <strstream>

```

## Remarks

Objects of type `strstream` work with `char` *, which are C strings. Use [\<sstream>](../standard-library/sstream.md) to work with objects of type [basic_string](../standard-library/basic-string-class.md).

> [!NOTE]
> The classes in \<strstream> are deprecated. Consider using the classes in \<sstream> instead.

### Classes

|Class|Description|
|-|-|
|[strstreambuf Class](../standard-library/strstreambuf-class.md)|The class describes a stream buffer that controls the transmission of elements to and from a sequence of elements stored in a **char** array object.|
|[istrstream Class](../standard-library/istrstream-class.md)|The class describes an object that controls extraction of elements and encoded objects from a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).|
|[ostrstream Class](../standard-library/ostrstream-class.md)|The class describes an object that controls insertion of elements and encoded objects into a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).|
|[strstream Class](../standard-library/strstream-class.md)|The class describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [strstreambuf](../standard-library/strstreambuf-class.md).|

## See also

[\<strstream>](../standard-library/strstream.md)<br/>
[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[iostream Programming](../standard-library/iostream-programming.md)<br/>
[iostreams Conventions](../standard-library/iostreams-conventions.md)<br/>
