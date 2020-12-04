---
description: "Learn more about: Overview of Marshaling in C++/CLI"
title: "Overview of Marshaling in C++"
ms.date: "07/12/2019"
ms.topic: "reference"
f1_keywords: ["marshaling", "marshalling"]
helpviewer_keywords: ["Visual C++, marshaling", "C++ Support Library, marshaling", "marshaling, about marshaling"]
ms.assetid: 997dd4bc-5f98-408f-b890-f35de9ce3bb8
---
# Overview of Marshaling in C++/CLI

In mixed mode, you sometimes must marshal your data between native and managed types. The *marshaling library* helps you marshal and convert data in a simple way.  The marshaling library consists of a set of functions and a `marshal_context` class that perform marshaling for common types. The library is defined in these headers in the **include/msclr** directory for your Visual Studio edition:

|Header|Description|
|---------------|-----------------|
|marshal.h|`marshal_context` class and context-free marshaling functions|
|marshal_atl.h| Functions for marshaling ATL types|
|marshal_cppstd.h|Functions for marshaling standard C++ types|
|marshal_windows.h|Functions for marshaling Windows types|

The default path for **msclr** folder is something like this depending on which edition you have and the build number:

```cmd
C:\\Program Files (x86)\\Microsoft Visual Studio\\Preview\\Enterprise\\VC\\Tools\\MSVC\\14.15.26528\\include\\msclr
```

You can use the marshaling library with or without a [marshal_context Class](../dotnet/marshal-context-class.md). Some conversions require a context. Other conversions can be implemented using the [marshal_as](../dotnet/marshal-as.md) function. The following table lists the current conversions supported, whether they require a context, and what marshal file you have to include:

|From type|To type|Marshal method|Include file|
|---------------|-------------|--------------------|------------------|
|System::String^|const char \*|marshal_context|marshal.h|
|const char \*|System::String^|marshal_as|marshal.h|
|char \*|System::String^|marshal_as|marshal.h|
|System::String^|const wchar_t\*|marshal_context|marshal.h|
|const wchar_t \*|System::String^|marshal_as|marshal.h|
|wchar_t \*|System::String^|marshal_as|marshal.h|
|System::IntPtr|HANDLE|marshal_as|marshal_windows.h|
|HANDLE|System::IntPtr|marshal_as|marshal_windows.h|
|System::String^|BSTR|marshal_context|marshal_windows.h|
|BSTR|System::String^|marshal_as|marshal.h|
|System::String^|bstr_t|marshal_as|marshal_windows.h|
|bstr_t|System::String^|marshal_as|marshal_windows.h|
|System::String^|std::string|marshal_as|marshal_cppstd.h|
|std::string|System::String^|marshal_as|marshal_cppstd.h|
|System::String^|std::wstring|marshal_as|marshal_cppstd.h|
|std::wstring|System::String^|marshal_as|marshal_cppstd.h|
|System::String^|CStringT\<char>|marshal_as|marshal_atl.h|
|CStringT\<char>|System::String^|marshal_as|marshal_atl.h|
|System::String^|CStringT<wchar_t>|marshal_as|marshal_atl.h|
|CStringT<wchar_t>|System::String^|marshal_as|marshal_atl.h|
|System::String^|CComBSTR|marshal_as|marshal_atl.h|
|CComBSTR|System::String^|marshal_as|marshal_atl.h|

Marshaling requires a context only when you marshal from managed to native data types and the native type you are converting to does not have a destructor for automatic clean up. The marshaling context destroys the allocated native data type in its destructor. Therefore, conversions that require a context will be valid only until the context is deleted. To save any marshaled values, you must copy the values to your own variables.

> [!NOTE]
> If you have embedded `NULL`s in your string, the result of marshaling the string is not guaranteed. The embedded `NULL`s can cause the string to be truncated or they might be preserved.

This example shows how to include the msclr directory in an include header declaration:

`#include "msclr\marshal_cppstd.h"`

The marshaling library is extensible so that you can add your own marshaling types. For more information about extending the marshaling library, see [How to: Extend the Marshaling Library](../dotnet/how-to-extend-the-marshaling-library.md).

## See also

[C++ Support Library](../dotnet/cpp-support-library.md)<br/>
[How to: Extend the Marshaling Library](../dotnet/how-to-extend-the-marshaling-library.md)
