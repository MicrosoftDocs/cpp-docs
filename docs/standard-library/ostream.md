---
title: "&lt;ostream&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["<ostream>", "ostream/std::<ostream>", "std::<ostream>"]
dev_langs: ["C++"]
helpviewer_keywords: ["ostream header"]
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# &lt;ostream&gt;

Defines the template class [basic_ostream](../standard-library/basic-ostream-class.md), which mediates insertions for the iostreams. The header also defines several related manipulators. (This header is typically included for you by another of the iostreams headers. You rarely need to include it directly.)

## Syntax

```cpp
#include <ostream>

```

### Typedefs

|Type name|Description|
|-|-|
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Creates a type from `basic_ostream` that is specialized on **char** and `char_traits` specialized on **char**.|
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Creates a type from `basic_ostream` that is specialized on **wchar_t** and `char_traits` specialized on **wchar_t**.|

### Manipulators

|||
|-|-|
|[endl](../standard-library/ostream-functions.md#endl)|Terminates a line and flushes the buffer.|
|[ends](../standard-library/ostream-functions.md#ends)|Terminates a string.|
|[flush](../standard-library/ostream-functions.md#flush)|Flushes the buffer.|
|[swap](../standard-library/ostream-functions.md#swap)|Exchanges the values of the left `basic_ostream` object parameter for those of the right `basic_ostream` object parameter.|

### Operators

|Operator|Description|
|-|-|
|[operator<<](../standard-library/ostream-operators.md#op_lt_lt)|Writes various types to the stream.|

### Classes

|Class|Description|
|-|-|
|[basic_ostream](../standard-library/basic-ostream-class.md)|The template class describes an object that controls insertion of elements and encoded objects into a stream buffer.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[iostream Programming](../standard-library/iostream-programming.md)<br/>
[iostreams Conventions](../standard-library/iostreams-conventions.md)<br/>
