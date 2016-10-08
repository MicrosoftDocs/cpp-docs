---
title: "Basic CString Operations"
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
ms.assetid: 41db66b2-9427-4bb3-845a-9b6869159a6c
caps.latest.revision: 15
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
# Basic CString Operations
This topic explains the following basic [CString](../VS_visualcpp/CStringT-Class.md) operations:  
  
-   [Creating CString objects from standard C literal strings](#_core_creating_cstring_objects_from_standard_c_literal_strings)  
  
-   [Accessing individual characters in a CString](#_core_accessing_individual_characters_in_a_cstring)  
  
-   [Concatenating two CString objects](#_core_concatenating_two_cstring_objects)  
  
-   [Comparing CString objects](#_core_comparing_cstring_objects)  
  
-   [Converting CString objects](#_core_converting_cstring_objects)  
  
 `Class CString` is based on class template [CStringT Class](../VS_visualcpp/CStringT-Class.md). `CString` is a `typedef` of `CStringT`. More exactly, `CString` is a `typedef` of an *explicit specialization* of `CStringT`, which is a common way to use a class template to define a class. Similarly defined classes are `CStringA` and `CStringW`. For more information on explicit specialization, see [Class Template Instantiation](../Topic/Class%20Template%20Instantiation.md).  
  
 `CString`, `CStringA`, and `CStringW` are defined in atlstr.h. `CStringT` is defined in cstringt.h.  
  
 `CString`, `CStringA`, and `CStringW` each get a set of the methods and operators defined by `CStringT` for use with the string data they support. Some of the methods duplicate and, in some cases, surpass the string services of the C run-time libraries.  
  
 Note: `CString` is a native class. For a string class that is for use in a C++/CLI managed project, use `System.String`.  
  
##  <a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a> Creating CString Objects from Standard C Literal Strings  
 You can assign C-style literal strings to a `CString` just as you can assign one `CString` object to another.  
  
-   Assign the value of a C literal string to a `CString` object.  
  
     [!CODE [NVC_ATLMFC_Utilities#183](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#183)]  
  
-   Assign the value of one `CString` to another `CString` object.  
  
     [!CODE [NVC_ATLMFC_Utilities#184](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#184)]  
  
     The contents of a `CString` object are copied when one `CString` object is assigned to another. Therefore, the two strings do not share a reference to the actual characters that make up the string. For more information about how to use `CString` objects as values, see [CString Semantics](../VS_visualcpp/CString-Semantics.md).  
  
    > [!NOTE]
    >  To write your application so that it can be compiled for Unicode or for ANSI, code literal strings by using the _T macro. For more information, see [Unicode and Multibyte Character Set (MBCS) Support](../VS_visualcpp/Unicode-and-Multibyte-Character-Set--MBCS--Support.md).  
  
##  <a name="_core_accessing_individual_characters_in_a_cstring"></a> Accessing Individual Characters in a CString  
 You can access individual characters in a `CString` object by using the `GetAt` and `SetAt` methods. You can also use the array element, or subscript, operator ( [ ] ) instead of `GetAt` to get individual characters. (This resembles accessing array elements by index, as in standard C-style strings.) Index values for `CString` characters are zero-based.  
  
##  <a name="_core_concatenating_two_cstring_objects"></a> Concatenating Two CString Objects  
 To concatenate two `CString` objects, use the concatenation operators (+ or +=), as follows.  
  
 [!CODE [NVC_ATLMFC_Utilities#185](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#185)]  
  
 At least one argument to the concatenation operators (+ or +=) must be a `CString` object, but you can use a constant character string (for example, `"big"`) or a `char` (for example, 'x') for the other argument.  
  
##  <a name="_core_comparing_cstring_objects"></a> Comparing CString Objects  
 The `Compare` method and the == operator for `CString` are equivalent. `Compare`, `operator==`, and `CompareNoCase` are MBCS and Unicode aware; `CompareNoCase` is also case-insensitive. The `Collate` method of `CString` is locale-sensitive and is often slower than `Compare`. Use `Collate` only where you must abide by the sorting rules as specified by the current locale.  
  
 The following table shows the available [CString](../VS_visualcpp/CStringT-Class.md) comparison functions and their equivalent Unicode/MBCS-portable functions in the C run-time library.  
  
|CString function|MBCS function|Unicode function|  
|----------------------|-------------------|----------------------|  
|`Compare`|`_mbscmp`|`wcscmp`|  
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|  
|`Collate`|`_mbscoll`|`wcscoll`|  
  
 The `CStringT` class template defines the relational operators (<, <=, >=, >, ==, and !=), which are available for use by `CString`. You can compare two `CStrings` by using these operators, as shown in the following example.  
  
 [!CODE [NVC_ATLMFC_Utilities#186](../CodeSnippet/VS_Snippets_Cpp/NVC_ATLMFC_Utilities#186)]  
  
##  <a name="_core_converting_cstring_objects"></a> Converting CString Objects  
 For information about converting CString objects to other string types, see [How to: Convert Between Various String Types](../VS_visualcpp/How-to--Convert-Between-Various-String-Types.md).  
  
## Using CString with wcout  
 To use a CString with `wcout` you must explicitly cast the object to a `const wchar_t*` as shown in the following example:  
  
```  
CString cs("meow");  
  wcout << (const wchar_t*) cs << endl;  
  
```  
  
 Without the cast, `cs` is treated as a `void*` and `wcout` prints the address of the object. This behavior is caused by subtle interactions between template argument deduction and overload resolution which are in themselves correct and conformant with the C++ standard.  
  
## See Also  
 [Strings (ATL/MFC)](../VS_visualcpp/Strings--ATL-MFC-.md)   
 [CStringT Class](../VS_visualcpp/CStringT-Class.md)   
 [Class Template Instantiation](../Topic/Class%20Template%20Instantiation.md)   
 [Explicit Specialization of Class Templates](../Topic/Explicit%20Specialization%20of%20Class%20Templates.md)   
 [Template Specialization](../VS_visualcpp/Template-Specialization--C---.md)   
 [How to: Convert Between Various String Types](../VS_visualcpp/How-to--Convert-Between-Various-String-Types.md)