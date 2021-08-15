---
description: "Learn more about: Exporting String Classes Using CStringT"
title: "Exporting String Classes Using CStringT"
ms.date: "11/04/2016"
helpviewer_keywords: ["CStringT class, exporting strings"]
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
---
# Exporting String Classes Using CStringT

In the past, MFC developers have derived from `CString` to specialize their own string classes. In Microsoft Visual C++.NET (MFC 8.0), the [CString](../atl-mfc-shared/using-cstring.md) class was superseded by a template class called [CStringT](../atl-mfc-shared/reference/cstringt-class.md). This provided several benefits:

- It allowed the MFC `CString` class to be used in ATL projects without linking in the larger MFC static library or DLL.

- With the new `CStringT` template class, you can customize `CString` behavior using template parameters that specify character traits, similar to the templates in the C++ Standard Library.

- When you export your own string class from a DLL using `CStringT`, the compiler also automatically exports the `CString` base class. Since `CString` is itself a template class, it may be instantiated by the compiler when used, unless the compiler is aware that `CString` is imported from a DLL. If you have migrated projects from Visual C++ 6.0 to Visual C++.NET, you might have seen linker symbol errors for a multiply-defined `CString` because of the collision of the `CString` imported from a DLL and the locally instantiated version. The proper way to do this is described below.

The following scenario will cause the linker to produce symbol errors for multiply defined classes. Assume that you are exporting a `CString`-derived class (`CMyString`) from an MFC extension DLL:

[!code-cpp[NVC_MFC_DLL#6](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_1.cpp)]

The consumer code uses a mixture of `CString` and `CMyString`. "MyString.h" is not included in the precompiled header, and some usage of `CString` does not have `CMyString` visible.

Assume that you use the `CString` and `CMyString` classes in separate source files, Source1.cpp and Source2.cpp. In Source1.cpp, you use `CMyString` and #include MyString.h. In Source2.cpp, you use `CString`, but do not #include MyString.h. In this case, the linker will complain about `CStringT` being multiply defined. This is caused by `CString` being both imported from the DLL that exports `CMyString`, and instantiated locally by the compiler through the `CStringT` template.

To resolve this problem, do the following:

Export `CStringA` and `CStringW` (and the necessary base classes) from MFC90.DLL. Projects that include MFC will always use the MFC DLL exported `CStringA` and `CStringW`, as in previous MFC implementations.

Then create a exportable derived class using the `CStringT` template, as `CStringT_Exported` is below, for example:

[!code-cpp[NVC_MFC_DLL#7](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_2.cpp)]

In AfxStr.h, replace the previous `CString`, `CStringA`, and `CStringW` typedefs as follows:

[!code-cpp[NVC_MFC_DLL#8](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_3.cpp)]

There are several caveats:

- You should not export `CStringT` itself because this will cause ATL-only projects to export a specialized `CStringT` class.

- Using an exportable derived class from `CStringT` minimizes having to re-implement `CStringT` functionality. Additional code is limited to forwarding constructors to the `CStringT` base class.

- `CString`, `CStringA`, and `CStringW` should only be marked `__declspec(dllexport/dllimport)` when you are building with an MFC shared DLL. If linking with an MFC static library, you should not mark these classes as exported; otherwise, internal use of `CString`, `CStringA`, and `CStringW` inside user DLLs will mark `CString` as exported as well.

## Related Topics

[CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)

## See also

[Using CStringT](../atl-mfc-shared/using-cstringt.md)<br/>
[Using CString](../atl-mfc-shared/using-cstring.md)
