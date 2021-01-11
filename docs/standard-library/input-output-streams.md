---
description: "Learn more about: Input/Output Streams"
title: "Input-Output Streams"
ms.date: "11/04/2016"
helpviewer_keywords: ["I/O [C++], stream", "stream I/O"]
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
---
# Input/Output Streams

`basic_iostream`, which is defined in the header file \<istream>, is the class template for objects that handle both input and output character-based I/O streams.

There are two typedefs that define character-specific specializations of `basic_iostream` and can help make code easier to read: `iostream` (not to be confused with the header file \<iostream>) is an I/O stream that is based on `basic_iostream<char>`; `wiostream` is an I/O stream that is based on `basic_iostream<wchar_t>`.

For more information, see [basic_iostream Class](../standard-library/basic-iostream-class.md), [iostream](../standard-library/basic-iostream-class.md), and [wiostream](../standard-library/basic-iostream-class.md).

Deriving from `basic_iostream` is the class template `basic_fstream`, which is used to stream character data to and from files.

There also are typedefs that provide character-specific specializations of `basic_fstream`. They are `fstream`, which is a file I/O stream that is based on **`char`**, and `wfstream`, which is a file I/O stream that is based on **`wchar_t`**. For more information, see [basic_fstream Class](../standard-library/basic-fstream-class.md), [fstream](../standard-library/basic-fstream-class.md), and [wfstream](../standard-library/basic-fstream-class.md). Using these typedefs requires the inclusion of the header file \<fstream>.

> [!NOTE]
> When a `basic_fstream` object is used to perform file I/O, although the underlying buffer contains separately designated positions for reading and writing, the current input and current output positions are tied together, and therefore, reading some data moves the output position.

The class template `basic_stringstream` and its common specialization, `stringstream`, are often used to work with I/O stream objects to insert and extract character data. For more information, see [basic_stringstream Class](../standard-library/basic-stringstream-class.md).

## See also

[stringstream](../standard-library/basic-stringstream-class.md)\
[basic_stringstream Class](../standard-library/basic-stringstream-class.md)\
[\<sstream>](../standard-library/sstream.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[C++ Standard Library](../standard-library/cpp-standard-library-reference.md)
