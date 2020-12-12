---
description: "Learn more about: CString Operations Relating to C-Style Strings"
title: "CString Operations Relating to C-Style Strings"
ms.date: "11/04/2016"
helpviewer_keywords: ["CString objects, basic operations", "MFC [C++], string handling class", "string conversion [C++], C-style strings", "strings [C++], string operations", "standard run-time library string functions", "null values, Null-terminated string conversion", "string functions", "strings [C++], in C", "string arguments", "C-style strings", "strings [C++], class CString", "casting CString objects"]
ms.assetid: 5048de8a-5298-4891-b8a0-c554b5a3ac1b
---
# CString Operations Relating to C-Style Strings

A [CString](../atl-mfc-shared/using-cstring.md) object contains character string data. `CString` inherits the set of the [methods and operators](../atl-mfc-shared/reference/cstringt-class.md) that are defined in the class template [CStringT](../atl-mfc-shared/reference/cstringt-class.md) to work with string data. (`CString` is a **`typedef`** that specializes `CStringT` to work with the kind of character data that `CString` supports.)

`CString` does not store character data internally as a C-style null-terminated string. Instead, `CString` tracks the length of character data so that it can more securely watch the data and the space it requires.

`CString` does accept C-style strings, and provides ways to access character data as a C-style string. This topic contains the following sections that explain how to use a `CString` object as if it were a C-style null-terminated string.

- [Converting to C-style null-terminated strings](#_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string)

- [Working with standard run-time library string functions](#_core_working_with_standard_run.2d.time_library_string_functions)

- [Modifying CString contents directly](#_core_modifying_cstring_contents_directly)

- [Using CString objects with variable argument functions](#_core_using_cstring_objects_with_variable_argument_functions)

- [Specifying CString formal parameters](#_core_specifying_cstring_formal_parameters)

## <a name="_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string"></a> Using CString as a C-Style Null-Terminated String

To use a `CString` object as a C-style string, cast the object to LPCTSTR. In the following example, the `CString` returns a pointer to a read-only C-style null-terminated string. The `strcpy` function puts a copy of the C-style string in the variable `myString`.

```cpp
CString aCString = "A string";
char myString[256];
strcpy(myString, (LPCTSTR)aCString);
```

You can use `CString` methods, for example, `SetAt`, to modify individual characters in the string object. However, the LPCTSTR pointer is temporary and becomes invalid when any change is made to `CString`. The `CString` can also go out of scope and be automatically deleted. We recommend that you get a fresh LPCTSTR pointer of a `CString` object every time that you use one.

Sometimes you may require a copy of `CString` data to modify directly. Use the more secured function `strcpy_s` (or the Unicode/MBCS-portable `_tcscpy_s`) to copy the `CString` object into a separate buffer. This is where characters can be safely modified, as shown by the following example.

[!code-cpp[NVC_ATLMFC_Utilities#189](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_1.cpp)]

> [!NOTE]
> The third argument to `strcpy_s` (or the Unicode/MBCS-portable `_tcscpy_s`) is either a `const wchar_t*` (Unicode) or a `const char*` (ANSI). The example above passes a `CString` for this argument. The C++ compiler automatically applies the conversion function defined for the `CString` class that converts a `CString` to an `LPCTSTR`. The ability to define casting operations from one type to another is one of the most useful features of C++.

## <a name="_core_working_with_standard_run.2d.time_library_string_functions"></a> Working with Standard Run-Time Library String Functions

You should be able to find a `CString` method to perform any string operation for which you might consider using the standard C run-time library string functions such as `strcmp` (or the Unicode/MBCS-portable `_tcscmp`).

If you must use the C run-time string functions, you can use the techniques described in _core_using_cstring_as_a_c.2d.style_null.2d.terminated_string. You can copy the `CString` object to an equivalent C-style string buffer, perform your operations on the buffer, and then assign the resulting C-style string back to a `CString` object.

## <a name="_core_modifying_cstring_contents_directly"></a> Modifying CString Contents Directly

In most situations, you should use `CString` member functions to modify the contents of a `CString` object or to convert the `CString` to a C-style character string.

There are some situations where it makes sense to directly modify the `CString` contents, for example, when you work with operating-system functions that require a character buffer.

The `GetBuffer` and `ReleaseBuffer` methods offer access to the internal character buffer of a `CString` object and let you modify it directly. The following steps show how to use these functions for this purpose.

### To use GetBuffer and ReleaseBuffer to access the internal character buffer of a CString object

1. Call `GetBuffer` for a `CString` object and specify the length of the buffer you require.

1. Use the pointer returned by `GetBuffer` to write characters directly into the `CString` object.

1. Call `ReleaseBuffer` for the `CString` object to update all the internal `CString` state information, for example, the length of the string. After you modify the contents of a `CString` object directly, you must call `ReleaseBuffer` before you call any other `CString` member functions.

## <a name="_core_using_cstring_objects_with_variable_argument_functions"></a> Using CString Objects with Variable Argument Functions

Some C functions take a variable number of arguments. A notable example is `printf_s`. Because of the way this kind of function is declared, the compiler cannot be sure of the type of the arguments and cannot determine which conversion operation to perform on each argument. Therefore, it is essential that you use an explicit type cast when passing a `CString` object to a function that takes a variable number of arguments.

To use a `CString` object in a variable argument function, explicitly cast the `CString` to an LPCTSTR string, as shown in the following example.

[!code-cpp[NVC_ATLMFC_Utilities#190](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_2.cpp)]

## <a name="_core_specifying_cstring_formal_parameters"></a> Specifying CString Formal Parameters

For most functions that need a string argument, it is best to specify the formal parameter in the function prototype as a **`const`** pointer to a character (`LPCTSTR`) instead of a `CString`. When a formal parameter is specified as a **`const`** pointer to a character, you can pass either a pointer to a TCHAR array, a literal string [`"hi there"`], or a `CString` object. The `CString` object will be automatically converted to an LPCTSTR. Any place you can use an LPCTSTR, you can also use a `CString` object.

You can also specify a formal parameter as a constant string reference (that is, `const CString&`) if the argument will not be modified. Drop the **`const`** modifier if the string will be modified by the function. If a default null value is desired, initialize it to the null string [`""`], as shown below:

[!code-cpp[NVC_ATLMFC_Utilities#191](../atl-mfc-shared/codesnippet/cpp/cstring-operations-relating-to-c-style-strings_3.cpp)]

For most function results, you can simply return a `CString` object by value.

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CString Argument Passing](../atl-mfc-shared/cstring-argument-passing.md)
