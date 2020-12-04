---
description: "Learn more about: Programming with CComBSTR (ATL)"
title: "Programming with CComBSTR (ATL)"
ms.date: "11/04/2016"
helpviewer_keywords: ["CComBSTR class, programming with", "Unicode, using CComBSTR [ATL]"]
ms.assetid: d3bd0851-d132-4be9-9c4c-6ccba17acb2b
---
# Programming with CComBSTR (ATL)

The ATL class [CComBSTR](../atl/reference/ccombstr-class.md) provides a wrapper around the BSTR data type. While `CComBSTR` is a useful tool, there are several situations that require caution.

- [Conversion Issues](#programmingwithccombstr_conversionissues)

- [Scope Issues](#programmingwithccombstr_scopeissues)

- [Explicitly Freeing the CComBSTR Object](#programmingwithccombstr_explicitlyfreeing)

- [Using CComBSTR Objects in Loops](#programmingwithccombstr_usingloops)

- [Memory Leak Issues](#programmingwithccombstr_memoryleaks)

## <a name="programmingwithccombstr_conversionissues"></a> Conversion Issues

Although several `CComBSTR` methods will automatically convert an ANSI string argument into Unicode, the methods will always return Unicode format strings. To convert the output string back to ANSI, use an ATL conversion class. For more information on the ATL conversion classes, see [ATL and MFC String Conversion Macros](reference/string-conversion-macros.md).

### Example

[!code-cpp[NVC_ATL_Utilities#114](../atl/codesnippet/cpp/programming-with-ccombstr-atl_1.cpp)]

If you are using a string literal to modify a `CComBSTR` object, use wide character strings. This will reduce unnecessary conversions.

### Example

[!code-cpp[NVC_ATL_Utilities#115](../atl/codesnippet/cpp/programming-with-ccombstr-atl_2.cpp)]

## <a name="programmingwithccombstr_scopeissues"></a> Scope Issues

As with any well-behaved class, `CComBSTR` will free its resources when it goes out of scope. If a function returns a pointer to the `CComBSTR` string, this can cause problems, as the pointer will reference memory that has already been freed. In these cases, use the `Copy` method, as shown below.

### Example

[!code-cpp[NVC_ATL_Utilities#116](../atl/codesnippet/cpp/programming-with-ccombstr-atl_3.cpp)]

## <a name="programmingwithccombstr_explicitlyfreeing"></a> Explicitly Freeing the CComBSTR Object

It is possible to explicitly free the string contained in the `CComBSTR` object before the object goes out scope. If the string is freed, the `CComBSTR` object is invalid.

### Example

[!code-cpp[NVC_ATL_Utilities#117](../atl/codesnippet/cpp/programming-with-ccombstr-atl_4.cpp)]

## <a name="programmingwithccombstr_usingloops"></a> Using CComBSTR Objects in Loops

As the `CComBSTR` class allocates a buffer to perform certain operations, such as the `+=` operator or `Append` method, it is not recommended that you perform string manipulation inside a tight loop. In these situations, `CStringT` provides better performance.

### Example

[!code-cpp[NVC_ATL_Utilities#118](../atl/codesnippet/cpp/programming-with-ccombstr-atl_5.cpp)]

## <a name="programmingwithccombstr_memoryleaks"></a> Memory Leak Issues

Passing the address of an initialized `CComBSTR` to a function as an **[out]** parameter causes a memory leak.

In the example below, the string allocated to hold the string `"Initialized"` is leaked when the function `MyGoodFunction` replaces the string.

[!code-cpp[NVC_ATL_Utilities#119](../atl/codesnippet/cpp/programming-with-ccombstr-atl_6.cpp)]

To avoid the leak, call the `Empty` method on existing `CComBSTR` objects before passing the address as an **[out]** parameter.

Note that the same code would not cause a leak if the function's parameter was **[in, out]**.

## See also

[Concepts](../atl/active-template-library-atl-concepts.md)<br/>
[CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)<br/>
[wstring](../standard-library/basic-string-class.md)<br/>
[String Conversion Macros](../atl/reference/string-conversion-macros.md)
