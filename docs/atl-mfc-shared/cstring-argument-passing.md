---
description: "Learn more about: CString Argument Passing"
title: "CString Argument Passing"
ms.date: "11/04/2016"
helpviewer_keywords: ["strings [C++], as function input/output", "argument passing [C++]", "arguments [C++], passing", "functions [C++], strings as input/output", "argument passing [C++], C strings", "passing arguments, C strings", "CString objects, passing arguments", "string arguments"]
---
# `CString` Argument Passing

This article explains how to pass [`CString`](../atl-mfc-shared/reference/cstringt-class.md) objects to functions and how to return `CString` objects from functions.

## <a name="_core_cstring_argument.2d.passing_conventions"></a> `CString` Argument-Passing Conventions

When you define a class interface, you must determine the argument-passing convention for your member functions. There are some standard rules for passing and returning `CString` objects. If you follow the rules described in [Strings as Function Inputs](#_core_strings_as_function_inputs) and [Strings as Function Outputs](#_core_strings_as_function_outputs), you'll have efficient, correct code.

## <a name="_core_strings_as_function_inputs"></a> Strings as Function Inputs

The most efficient and secure way to use a `CString` object in called functions is to pass a `CString` object to the function. Despite the name, a `CString` object doesn't store a string internally as a C-style string that has a `NULL` terminator. Instead, a `CString` object keeps careful track of the number of characters it has. Having `CString` provide a `LPCTSTR` pointer to a `NULL`-terminated string is a small amount of work that can become significant if your code has to do it constantly. The result is temporary because any change to the `CString` contents invalidates old copies of the `LPCTSTR` pointer.

It does make sense in some cases to provide a C-style string. For example, there can be a situation where a called function is written in C and doesn't support objects. In this case, coerce the `CString` parameter to `LPCTSTR`, and the function will get a C-style `NULL`-terminated string. You can also go the other direction and create a `CString` object by using the `CString` constructor that accepts a C-style string parameter.

If the string contents are to be changed by a function, declare the parameter as a nonconstant `CString` reference (`CString&`).

## <a name="_core_strings_as_function_outputs"></a> Strings as Function Outputs

Typically you can return `CString` objects from functions because `CString` objects follow value semantics like primitive types. To return a read-only string, use a constant `CString` reference (`const CString&`). The following example illustrates the use of `CString` parameters and return types:

[!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_1.cpp)]
&nbsp;
[!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/cpp/cstring-argument-passing_2.cpp)]

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)
