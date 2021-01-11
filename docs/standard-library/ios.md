---
description: "Learn more about: &lt;ios&gt;"
title: "&lt;ios&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<ios>", "ios/std::<ios>"]
helpviewer_keywords: ["ios header"]
ms.assetid: d3d4c161-2f37-4f04-93cc-0a2a89984a9c
---
# &lt;ios&gt;

Defines several types and functions basic to the operation of iostreams. This header is typically included for you by another iostream headers; you rarely include it directly.

## Requirements

**Header**: \<ios>

**Namespace:** std

> [!NOTE]
> The \<ios> library uses the `#include <iosfwd>` statement.

## Remarks

A large group of functions are manipulators. A manipulator declared in \<ios> alters the values stored in its argument object of class [ios_base](../standard-library/ios-base-class.md). Other manipulators perform actions on streams controlled by objects of a type derived from this class, such as a specialization of one of the class templates [basic_istream](../standard-library/basic-istream-class.md) or [basic_ostream](../standard-library/basic-ostream-class.md). For example, [noskipws](../standard-library/ios-functions.md#noskipws)(**str**) clears the format flag `ios_base::skipws` in the object `str`, which can be of one of these types.

You can also call a manipulator by inserting it into an output stream or extracting it from an input stream, because of special insertion and extraction operations supplied for the classes derived from `ios_base`. For example:

```cpp
istr>> noskipws;
```

calls [noskipws](../standard-library/ios-functions.md#noskipws)(**istr**).

## Members

### Typedefs

|Name|Description|
|-|-|
|[ios](../standard-library/ios-typedefs.md#ios)|Supports the ios class from the old iostream library.|
|[streamoff](../standard-library/ios-typedefs.md#streamoff)|Supports internal operations.|
|[streampos](../standard-library/ios-typedefs.md#streampos)|Holds the current position of the buffer pointer or file pointer.|
|[streamsize](../standard-library/ios-typedefs.md#streamsize)|Specifies the size of the stream.|
|[wios](../standard-library/ios-typedefs.md#wios)|Supports the wios class from the old iostream library.|
|[wstreampos](../standard-library/ios-typedefs.md#wstreampos)|Holds the current position of the buffer pointer or file pointer.|

### Manipulators

|Name|Description|
|-|-|
|[boolalpha](../standard-library/ios-functions.md#boolalpha)|Specifies that variables of type [bool](../cpp/bool-cpp.md) appear as **`true`** or **`false`** in the stream.|
|[dec](../standard-library/ios-functions.md#dec)|Specifies that integer variables appear in base 10 notation.|
|[defaultfloat](../standard-library/ios-functions.md#ios_defaultfloat)|Configures the flags of an `ios_base` object to use a default display format for float values.|
|[fixed](../standard-library/ios-functions.md#fixed)|Specifies that a floating-point number is displayed in fixed-decimal notation.|
|[hex](../standard-library/ios-functions.md#hex)|Specifies that integer variables appear in base 16 notation.|
|[hexfloat](../standard-library/ios-functions.md#hexfloat)|
|[internal](../standard-library/ios-functions.md#internal)|Causes a number's sign to be left justified and the number to be right justified.|
|[left](../standard-library/ios-functions.md#left)|Causes text that is not as wide as the output width to appear in the stream flush with the left margin.|
|[noboolalpha](../standard-library/ios-functions.md#noboolalpha)|Specifies that variables of type [bool](../cpp/bool-cpp.md) appear as 1 or 0 in the stream.|
|[noshowbase](../standard-library/ios-functions.md#noshowbase)|Turns off indicating the notational base in which a number is displayed.|
|[noshowpoint](../standard-library/ios-functions.md#noshowpoint)|Displays only the whole-number part of floating-point numbers whose fractional part is zero.|
|[noshowpos](../standard-library/ios-functions.md#noshowpos)|Causes positive numbers to not be explicitly signed.|
|[noskipws](../standard-library/ios-functions.md#noskipws)|Cause spaces to be read by the input stream.|
|[nounitbuf](../standard-library/ios-functions.md#nounitbuf)|Causes output to be buffered and processed when the buffer is full.|
|[nouppercase](../standard-library/ios-functions.md#nouppercase)|Specifies that hexadecimal digits and the exponent in scientific notation appear in lowercase.|
|[oct](../standard-library/ios-functions.md#oct)|Specifies that integer variables appear in base 8 notation.|
|[right](../standard-library/ios-functions.md#right)|Causes text that is not as wide as the output width to appear in the stream flush with the right margin.|
|[scientific](../standard-library/ios-functions.md#scientific)|Causes floating point numbers to be displayed using scientific notation.|
|[showbase](../standard-library/ios-functions.md#showbase)|Indicates the notational base in which a number is displayed.|
|[showpoint](../standard-library/ios-functions.md#showpoint)|Displays the whole-number part of a floating-point number and digits to the right of the decimal point even when the fractional part is zero.|
|[showpos](../standard-library/ios-functions.md#showpos)|Causes positive numbers to be explicitly signed.|
|[skipws](../standard-library/ios-functions.md#skipws)|Cause spaces to not be read by the input stream.|
|[unitbuf](../standard-library/ios-functions.md#unitbuf)|Causes output to be processed when the buffer is not empty.|
|[uppercase](../standard-library/ios-functions.md#uppercase)|Specifies that hexadecimal digits and the exponent in scientific notation appear in uppercase.|

### Error Reporting

|Name|Description|
|-|-|
|[io_errc](../standard-library/ios-functions.md#io_errc)||
|[is_error_code_enum](../standard-library/ios-functions.md#is_error_code_enum)||
|[iostream_category](../standard-library/ios-functions.md#iostream_category)||
|[make_error_code](../standard-library/ios-functions.md#make_error_code)||
|[make_error_condition](../standard-library/ios-functions.md#make_error_condition)||

### Classes

|Name|Description|
|-|-|
|[basic_ios](../standard-library/basic-ios-class.md)|The class template describes the storage and member functions common to both input streams (of class template [basic_istream](../standard-library/basic-istream-class.md)) and output streams (of class template [basic_ostream](../standard-library/basic-ostream-class.md)) that depend on the template parameters.|
|[fpos](../standard-library/fpos-class.md)|The class template describes an object that can store all the information needed to restore an arbitrary file-position indicator within any stream.|
|[ios_base](../standard-library/ios-base-class.md)|The class describes the storage and member functions common to both input and output streams that do not depend on the template parameters.|

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[iostream Programming](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md)
