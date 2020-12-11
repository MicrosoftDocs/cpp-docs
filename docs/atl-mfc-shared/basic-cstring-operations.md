---
description: "Learn more about: Basic CString Operations"
title: "Basic CString Operations"
ms.date: "11/04/2016"
helpviewer_keywords: ["CString objects, basic operations", "string literals, CString operations", "literal strings, CString operations", "CString objects", "string comparison, CString operations", "characters, accessing in CStrings"]
ms.assetid: 41db66b2-9427-4bb3-845a-9b6869159a6c
---
# Basic CString Operations

This topic explains the following basic [CString](../atl-mfc-shared/reference/cstringt-class.md) operations:

- [Creating CString objects from standard C literal strings](#_core_creating_cstring_objects_from_standard_c_literal_strings)

- [Accessing individual characters in a CString](#_core_accessing_individual_characters_in_a_cstring)

- [Concatenating two CString objects](#_core_concatenating_two_cstring_objects)

- [Comparing CString objects](#_core_comparing_cstring_objects)

- [Converting CString objects](#_core_converting_cstring_objects)

`Class CString` is based on class template [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md). `CString` is a **`typedef`** of `CStringT`. More exactly, `CString` is a **`typedef`** of an *explicit specialization* of `CStringT`, which is a common way to use a class template to define a class. Similarly defined classes are `CStringA` and `CStringW`.

`CString`, `CStringA`, and `CStringW` are defined in atlstr.h. `CStringT` is defined in cstringt.h.

`CString`, `CStringA`, and `CStringW` each get a set of the methods and operators defined by `CStringT` for use with the string data they support. Some of the methods duplicate and, in some cases, surpass the string services of the C run-time libraries.

Note: `CString` is a native class. For a string class that is for use in a C++/CLI managed project, use `System.String`.

## <a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a> Creating CString Objects from Standard C Literal Strings

You can assign C-style literal strings to a `CString` just as you can assign one `CString` object to another.

- Assign the value of a C literal string to a `CString` object.

   [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_1.cpp)]

- Assign the value of one `CString` to another `CString` object.

   [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_2.cpp)]

   The contents of a `CString` object are copied when one `CString` object is assigned to another. Therefore, the two strings do not share a reference to the actual characters that make up the string. For more information about how to use `CString` objects as values, see [CString Semantics](../atl-mfc-shared/cstring-semantics.md).

   > [!NOTE]
   > To write your application so that it can be compiled for Unicode or for ANSI, code literal strings by using the _T macro. For more information, see [Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).

## <a name="_core_accessing_individual_characters_in_a_cstring"></a> Accessing Individual Characters in a CString

You can access individual characters in a `CString` object by using the `GetAt` and `SetAt` methods. You can also use the array element, or subscript, operator ( [ ] ) instead of `GetAt` to get individual characters. (This resembles accessing array elements by index, as in standard C-style strings.) Index values for `CString` characters are zero-based.

## <a name="_core_concatenating_two_cstring_objects"></a> Concatenating Two CString Objects

To concatenate two `CString` objects, use the concatenation operators (+ or +=), as follows.

[!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_3.cpp)]

At least one argument to the concatenation operators (+ or +=) must be a `CString` object, but you can use a constant character string (for example, `"big"`) or a **`char`** (for example, 'x') for the other argument.

## <a name="_core_comparing_cstring_objects"></a> Comparing CString Objects

The `Compare` method and the == operator for `CString` are equivalent. `Compare`, **operator==**, and `CompareNoCase` are MBCS and Unicode aware; `CompareNoCase` is also case-insensitive. The `Collate` method of `CString` is locale-sensitive and is often slower than `Compare`. Use `Collate` only where you must abide by the sorting rules as specified by the current locale.

The following table shows the available [CString](../atl-mfc-shared/reference/cstringt-class.md) comparison functions and their equivalent Unicode/MBCS-portable functions in the C run-time library.

|CString function|MBCS function|Unicode function|
|----------------------|-------------------|----------------------|
|`Compare`|`_mbscmp`|`wcscmp`|
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|
|`Collate`|`_mbscoll`|`wcscoll`|

The `CStringT` class template defines the relational operators (<, \<=, >=, >, ==, and !=), which are available for use by `CString`. You can compare two `CStrings` by using these operators, as shown in the following example.

[!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_4.cpp)]

## <a name="_core_converting_cstring_objects"></a> Converting CString Objects

For information about converting CString objects to other string types, see [How to: Convert Between Various String Types](../text/how-to-convert-between-various-string-types.md).

## Using CString with wcout

To use a CString with `wcout` you must explicitly cast the object to a `const wchar_t*` as shown in the following example:

```cpp
CString cs("meow");

wcout << (const wchar_t*) cs << endl;
```

Without the cast, `cs` is treated as a **`void*`** and `wcout` prints the address of the object. This behavior is caused by subtle interactions between template argument deduction and overload resolution which are in themselves correct and conformant with the C++ standard.

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[Template Specialization](../cpp/template-specialization-cpp.md)<br/>
[How to: Convert Between Various String Types](../text/how-to-convert-between-various-string-types.md)
