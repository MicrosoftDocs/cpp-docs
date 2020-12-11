---
description: "Learn more about: Fundamental types (C++/CX)"
title: "Fundamental types (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: c9f82907-25f2-440b-91d6-afb8dbd46ea6
---
# Fundamental types (C++/CX)

In addition to the standard C++ built-in types, C++/CX supports the type system that's defined by the Windows Runtime architecture by providing typedefs for the Windows Runtime fundamental types that map to standard C++ types.. C++/CX implements Boolean, character, and numeric fundamental types. These typedefs are defined in the `default` namespace, which never needs to be specified explicitly. In addition, C++/CX provides wrappers and concrete implementations for certain Windows Runtime types and interfaces.

## Boolean and Character Types

The following table lists the built-in Boolean and character types, and their standard C++ equivalents.

|Namespace|C++/CX name|Definition|Standard C++ name|Range of Values|
|---------------|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|Platform|Boolean|An 8-bit Boolean value.|bool|**`true`** (nonzero) and **`false`** (zero)|
|default|char16|A 16-bit non-numeric value that represents a Unicode (UTF-16) code point.|wchar_t<br /><br /> -or-<br /><br /> L'c'|(Specified by the Unicode standard)|

## Numeric types

The following table lists the built-in numeric types. The numeric types are declared in the `default` namespace and are typedefs for the corresponding C++ built-in type. Not all C++ built-in types (long, for example) are supported in the Windows Runtime. For consistency and clarity, we recommend that you use the C++/CX name.

|C++/CX name|Definition|Standard C++ name|Range of Values|
|-----------------------------------------------------------------------|----------------|-------------------------|---------------------|
|int8|An 8-bit signed numeric value.|signed char|-128 through 127|
|uint8|An 8-bit unsigned numeric value.|unsigned char|0 through 255|
|int16|A 16-bit signed integer.|short|-32,768 through 32,767|
|uint16|A 16-bit unsigned integer.|unsigned short|0 through 65,535|
|int32|A 32-bit signed integer.|int|-2,147,483,648 through 2,147,483,647|
|uint32|A 32-bit unsigned integer.|unsigned int|0 through 4,294,967,295|
|int64|A 64-bit signed integer.|long long  -or- __int64|-9,223,372,036,854, 775,808 through  9,223,372,036,854,775,807|
|uint64|A 64-bit unsigned integer.|unsigned long long  -or- unsigned __int64|0 through 18,446,744,073,709,551,615|
|float32|A 32-bit IEEE 754 floating-point number.|float|3.4E +/- 38 (7 digits)|
|float64|A 64-bit IEEE 754 floating-point number.|double|1.7E +/- 308 (15 digits)|

## Windows Runtime Types

The following table lists some additional types that are defined by the Windows Runtime architecture and are built into C++/CX. Object and String are reference types. The others are value types. All of these types are declared in the `Platform` namespace. For a full list, see [Platform namespace](../cppcx/platform-namespace-c-cx.md).

|Name|Definition|
|----------|----------------|
|Object|Represents any Windows Runtime type.|
|String|A series of characters that represent text.|
|Rect|A set of four floating-point numbers that represent the location and size of a rectangle.|
|SizeT|An ordered pair of floating-point numbers that specify a height and width.|
|Point|An ordered pair of floating-point x-coordinates and y-coordinates that define a point in a two-dimensional plane.|
|Guid|A 128-bit non-numeric value that is used as a unique identifier.|
|UIntPtr|(For internal use only.) An unsigned 64-bit value that is used as a pointer.|
|IntPtr|(For internal use only.)  A signed 64-bit value that is used as a pointer.|

## See also

[Type System](../cppcx/type-system-c-cx.md)
