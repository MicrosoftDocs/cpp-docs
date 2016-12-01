---
title: "Using CString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CString objects, C++ string manipulation"
  - "CString objects, reference counting"
  - "CString class (Visual C++)"
ms.assetid: ed018aaf-8b10-46f9-828c-f9c092dc7609
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Using CString
The topics in this section describe how to program with `CString`. For reference documentation about the `CString` class, see the documentation for [CStringT](../atl-mfc-shared/reference/cstringt-class.md).  
  
 To use `CString`, include the `atlstr.h` header.  
  
 The `CString`, `CStringA`, and `CStringW` classes are specializations of a class template called [CStringT](../atl-mfc-shared/reference/cstringt-class.md) based on the type of character data they support.  
  
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
 [Basic CString Operations](../atl-mfc-shared/basic-cstring-operations.md)  
 Describes basic `CString` operations, including creating objects from C literal strings, accessing individual characters in a `CString`, concatenating two objects, and comparing `CString` objects.  
  
 [String Data Management](../atl-mfc-shared/string-data-management.md)  
 Discusses using Unicode and MBCS with `CString`.  
  
 [CString Semantics](../atl-mfc-shared/cstring-semantics.md)  
 Explains how `CString` objects are used.  
  
 [CString Operations Relating to C-Style Strings](../atl-mfc-shared/cstring-operations-relating-to-c-style-strings.md)  
 Describes manipulating the contents of a `CString` object like a C-style null-terminated string.  
  
 [Allocating and Releasing Memory for a BSTR](../atl-mfc-shared/allocating-and-releasing-memory-for-a-bstr.md)  
 Discusses using memory for a `BSTR` and COM objects.  
  
 [CString Exception Cleanup](../atl-mfc-shared/cstring-exception-cleanup.md)  
 Explains that explicit cleanup in MFC 3.0 and later is no longer necessary.  
  
 [CString Argument Passing](../atl-mfc-shared/cstring-argument-passing.md)  
 Explains how to pass CString objects to functions and how to return `CString` objects from functions.  
  
 [Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)  
 Discusses how MFC is enabled for Unicode and MBCS support.  
  
## Reference  
 [CStringT](../atl-mfc-shared/reference/cstringt-class.md)  
 Provides reference information about the `CStringT` class.  
  
 [CSimpleStringT Class](../atl-mfc-shared/reference/csimplestringt-class.md)  
 Provides reference information about the `CSimpleStringT` class.  
  
## Related Sections  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)  
 Contains links to topics that describe several ways to manage string data.  
  
 [Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)

