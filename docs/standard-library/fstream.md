---
description: "Learn more about: &lt;fstream&gt;"
title: "&lt;fstream&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<fstream>"]
helpviewer_keywords: ["fstream header"]
ms.assetid: 660de351-0489-41df-b239-40e0cdcab46b
---
# &lt;fstream&gt;

Defines several classes that support iostreams operations on sequences stored in external files.

## Syntax

```cpp
#include <fstream>
```

### Typedefs

|Type name|Description|
|-|-|
|[filebuf](../standard-library/fstream-typedefs.md#filebuf)|A type `basic_filebuf` specialized on **`char`** template parameters.|
|[fstream](../standard-library/fstream-typedefs.md#fstream)|A type `basic_fstream` specialized on **`char`** template parameters.|
|[ifstream](../standard-library/fstream-typedefs.md#ifstream)|A type `basic_ifstream` specialized on **`char`** template parameters.|
|[ofstream](../standard-library/fstream-typedefs.md#ofstream)|A type `basic_ofstream` specialized on **`char`** template parameters.|
|[wfstream](../standard-library/fstream-typedefs.md#wfstream)|A type `basic_fstream` specialized on **`wchar_t`** template parameters.|
|[wifstream](../standard-library/fstream-typedefs.md#wifstream)|A type `basic_ifstream` specialized on **`wchar_t`** template parameters.|
|[wofstream](../standard-library/fstream-typedefs.md#wofstream)|A type `basic_ofstream` specialized on **`wchar_t`** template parameters.|
|[wfilebuf](../standard-library/fstream-typedefs.md#wfilebuf)|A type `basic_filebuf` specialized on **`wchar_t`** template parameters.|

### Classes

|Class|Description|
|-|-|
|[basic_filebuf](../standard-library/basic-filebuf-class.md)|The class template describes a stream buffer that controls the transmission of elements of type `Elem`, whose character traits are determined by the class `Tr`, to and from a sequence of elements stored in an external file.|
|[basic_fstream](../standard-library/basic-fstream-class.md)|The class template describes an object that controls insertion and extraction of elements and encoded objects using a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.|
|[basic_ifstream](../standard-library/basic-ifstream-class.md)|The class template describes an object that controls extraction of elements and encoded objects from a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.|
|[basic_ofstream](../standard-library/basic-ofstream-class.md)|The class template describes an object that controls insertion of elements and encoded objects into a stream buffer of class [basic_filebuf](../standard-library/basic-filebuf-class.md)\<**Elem**, **Tr**>, with elements of type `Elem`, whose character traits are determined by the class `Tr`.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
