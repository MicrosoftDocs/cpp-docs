---
title: "Using CString"
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
ms.assetid: ed018aaf-8b10-46f9-828c-f9c092dc7609
caps.latest.revision: 9
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
# Using CString
The topics in this section describe how to program with `CString`. For reference documentation about the `CString` class, see the documentation for [CStringT](../VS_visualcpp/CStringT-Class.md).  
  
 To use `CString`, include the `atlstr.h` header.  
  
 The `CString`, `CStringA`, and `CStringW` classes are specializations of a class template called [CStringT](../VS_visualcpp/CStringT-Class.md) based on the type of character data they support.  
  
 A `CStringW` object contains the `wchar_t` type and supports Unicode strings. A `CStringA` object contains the `char` type, and supports single-byte and multi-byte (MBCS) strings. A `CString` object supports either the `char` type or the `wchar_t` type, depending on whether the `MBCS` symbol or the `UNICODE` symbol is defined at compile time.  
  
 A `CString` object keeps character data in a `CStringData` object. `CString` accepts `null`-terminated C-style strings, but does not retain the `null` character in the stored character data. Instead, `CString` tracks string length. `CString` does provide a null terminator when it exports a C-style string. You can insert a `null` in a `CString`, but it may produce unexpected results.  
  
 The following set of string classes can be used without linking an MFC library, with or without CRT support: `CAtlString`, `CAtlStringA`, and `CAtlStringW`.  
  
 `CString` is used in native projects. For managed-code (C++/CLI) projects, use `System::String`.  
  
 To add more capabilities than `CString`, `CStringA`, or `CStringW` currently offer, you should create a subclass of `CStringT` that contains the additional features.  
  
 The following code shows how to create a `CString` and print it to standard output:  
  
```cpp  
#include <atlstr.h>  
  
int main() {  
    CString aCString = CString(_T("A string"));  
    _tprintf(_T("%s"), (LPCTSTR) aCString);  
}  
```  
  
## In This Section  
 [Basic CString Operations](../VS_visualcpp/Basic-CString-Operations.md)  
 Describes basic `CString` operations, including creating objects from C literal strings, accessing individual characters in a `CString`, concatenating two objects, and comparing `CString` objects.  
  
 [String Data Management](../VS_visualcpp/String-Data-Management.md)  
 Discusses using Unicode and MBCS with `CString`.  
  
 [CString Semantics](../VS_visualcpp/CString-Semantics.md)  
 Explains how `CString` objects are used.  
  
 [CString Operations Relating to C-Style Strings](../VS_visualcpp/CString-Operations-Relating-to-C-Style-Strings.md)  
 Describes manipulating the contents of a `CString` object like a C-style null-terminated string.  
  
 [Allocating and Releasing Memory for a BSTR](../VS_visualcpp/Allocating-and-Releasing-Memory-for-a-BSTR.md)  
 Discusses using memory for a `BSTR` and COM objects.  
  
 [CString Exception Cleanup](../VS_visualcpp/CString-Exception-Cleanup.md)  
 Explains that explicit cleanup in MFC 3.0 and later is no longer necessary.  
  
 [CString Argument Passing](../VS_visualcpp/CString-Argument-Passing.md)  
 Explains how to pass CString objects to functions and how to return `CString` objects from functions.  
  
 [Unicode and Multibyte Character Set (MBCS) Support](../VS_visualcpp/Unicode-and-Multibyte-Character-Set--MBCS--Support.md)  
 Discusses how MFC is enabled for Unicode and MBCS support.  
  
## Reference  
 [CStringT](../VS_visualcpp/CStringT-Class.md)  
 Provides reference information about the `CStringT` class.  
  
 [CSimpleStringT Class](../VS_visualcpp/CSimpleStringT-Class.md)  
 Provides reference information about the `CSimpleStringT` class.  
  
## Related Sections  
 [Strings (ATL/MFC)](../VS_visualcpp/Strings--ATL-MFC-.md)  
 Contains links to topics that describe several ways to manage string data.  
  
 [Class Template Instantiation](../Topic/Class%20Template%20Instantiation.md)  
 `CString` is a `typedef` based on `CStringT`, an instance of a specialization of a class template.  
  
 [Strings (ATL/MFC)](../VS_visualcpp/Strings--ATL-MFC-.md)