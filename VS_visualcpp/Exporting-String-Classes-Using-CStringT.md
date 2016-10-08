---
title: "Exporting String Classes Using CStringT"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Exporting String Classes Using CStringT
In the past, MFC developers have derived from `CString` to specialize their own string classes. In Microsoft Visual C++.NET (MFC 8.0), the [CString](../VS_visualcpp/Using-CString.md) class was superseded by a template class called [CStringT](../VS_visualcpp/CStringT-Class.md). This provided several benefits:  
  
-   It allowed the MFC `CString` class to be used in ATL projects without linking in the larger MFC static library or DLL.  
  
-   With the new `CStringT` template class, you can customize `CString` behavior using template parameters that specify character traits, similar to the templates in the Standard Template Library (STL).  
  
-   When you export your own string class from a DLL using `CStringT`, the compiler also automatically exports the `CString` base class. Since `CString` is itself a template class, it may be instantiated by the compiler when used, unless the compiler is aware that `CString` is imported from a DLL. If you have migrated projects from Visual C++ 6.0 to Visual C++.NET, you might have seen linker symbol errors for a multiply-defined `CString` because of the collision of the `CString` imported from a DLL and the locally instantiated version. The proper way to do this is described below. For more information on this issue, see the Knowledge Base article, "Linking Errors When you Import CString-derived Classes" (Q309801) on the MSDN Library CD-ROM or at [http://support.microsoft.com/default.aspx](http://support.microsoft.com/default.aspx).  
  
 The following scenario will cause the linker to produce symbol errors for multiply defined classes. Assume that you are exporting a `CString`-derived class (`CMyString`) from an MFC extension DLL:  
  
 [!CODE [NVC_MFC_DLL#6](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_DLL#6)]  
  
 The consumer code uses a mixture of `CString` and `CMyString`. "MyString.h" is not included in the precompiled header, and some usage of `CString` does not have `CMyString` visible.  
  
 Assume that you use the `CString` and `CMyString` classes in separate source files, Source1.cpp and Source2.cpp. In Source1.cpp, you use `CMyString` and #include MyString.h. In Source2.cpp, you use `CString`, but do not #include MyString.h. In this case, the linker will complain about `CStringT` being multiply defined. This is caused by `CString` being both imported from the DLL that exports `CMyString`, and instantiated locally by the compiler through the `CStringT` template.  
  
 To resolve this problem, do the following:  
  
 Export `CStringA` and `CStringW` (and the necessary base classes) from MFC90.DLL. Projects that include MFC will always use the MFC DLL exported `CStringA` and `CStringW`, as in previous MFC implementations.  
  
 Then create a exportable derived class using the `CStringT` template, as `CStringT_Exported` is below, for example:  
  
 [!CODE [NVC_MFC_DLL#7](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_DLL#7)]  
  
 In AfxStr.h, replace the previous `CString`, `CStringA`, and `CStringW` typedefs as follows:  
  
 [!CODE [NVC_MFC_DLL#8](../CodeSnippet/VS_Snippets_Cpp/NVC_MFC_DLL#8)]  
  
 There are several caveats:  
  
-   You should not export `CStringT` itself because this will cause ATL-only projects to export a specialized `CStringT` class.  
  
-   Using an exportable derived class from `CStringT` minimizes having to re-implement `CStringT` functionality. Additional code is limited to forwarding constructors to the `CStringT` base class.  
  
-   `CString`, `CStringA`, and `CStringW` should only be marked `__declspec(dllexport/dllimport)` when you are building with an MFC shared DLL. If linking with an MFC static library, you should not mark these classes as exported; otherwise, internal use of `CString`, `CStringA`, and `CStringW` inside user DLLs will mark `CString` as exported as well.  
  
## Related Topics  
 [CStringT Class](../VS_visualcpp/CStringT-Class.md)  
  
## See Also  
 [Using CStringT](../VS_visualcpp/Using-CStringT.md)   
 [Using CString](../VS_visualcpp/Using-CString.md)