---
title: "&lt;string&gt;"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std::<string>"
  - "string/std::<string>"
  - "std.<string>"
  - "<string>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "string header"
ms.assetid: a2fb9d00-d7ae-4170-bfea-2dc337aa37cf
caps.latest.revision: 22
ms.author: "corob"
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
# &lt;string&gt;
Defines the container template class `basic_string` and various supporting templates.  
  
 For more information about `basic_string`, see [basic_string Class](../stdcpplib/basic_string-class.md)  
  
## Syntax  
  
```  
#include <string>  
```  
  
## Remarks  
 The C++ language and the Standard C++ Library support two types of strings:  
  
-   Null-terminated character arrays often referred to as C strings.  
  
-   Template class objects, of type `basic_string`, that handle all `char`-like template arguments.  
  
### Typedefs  
  
|||  
|-|-|  
|[string](../stdcpplib/-string--typedefs.md#string)|A type that describes a specialization of the template class `basic_string` with elements of type `char` as a `string`.|  
|[wstring](../stdcpplib/-string--typedefs.md#wstring)|A type that describes a specialization of the template class `basic_string` with elements of type `wchar_t` as a `wstring`.|  
|[u16string](../stdcpplib/-string--typedefs.md#u16string)|A type that describes a specialization of the template class `basic_string` based on elements of type `char16_t`.|  
|[u32string](../stdcpplib/-string--typedefs.md#u32string)|A type that describes a specialization of the template class `basic_string` based on elements of type `char32_t`.|  
  
### Operators  
  
|||  
|-|-|  
|[operator+](../stdcpplib/-string--operators.md#operator_add)|Concatenates two string objects.|  
|[operator!=](../stdcpplib/-string--operators.md#operator_neq)|Tests if the string object on the left side of the operator is not equal to the string object on the right side.|  
|[operator==](../stdcpplib/-string--operators.md#operator_eq_eq)|Tests if the string object on the left side of the operator is equal to the string object on the right side.|  
|[operator<](../stdcpplib/-string--operators.md#operator_lt_)|Tests if the string object on the left side of the operator is less than to the string object on the right side.|  
|[operator<=](../stdcpplib/-string--operators.md#operator_lt__eq)|Tests if the string object on the left side of the operator is less than or equal to the string object on the right side.|  
|[operator<\<](../stdcpplib/-string--operators.md#operator_lt__lt_)|A template function that inserts a string into the output stream.|  
|[operator>](../stdcpplib/-string--operators.md#operator_gt_)|Tests if the string object on the left side of the operator is greater than to the string object on the right side.|  
|[operator>=](../stdcpplib/-string--operators.md#operator_gt__eq)|Tests if the string object on the left side of the operator is greater than or equal to the string object on the right side.|  
|[operator>>](../stdcpplib/-string--operators.md#operator_gt__gt_)|A template function that extracts a string from the input stream.|  
  
### Specialized Template Functions  
  
|||  
|-|-|  
|[swap](../stdcpplib/-string--functions.md#swap)|Exchanges the arrays of characters of two strings.|  
|[stod](../stdcpplib/-string--functions.md#stod)|Converts a character sequence to a `double.`|  
|[stof](../stdcpplib/-string--functions.md#stof)|Converts a character sequence to a `float`.|  
|[stoi](../stdcpplib/-string--functions.md#stoi)|Converts a character sequence to an integer.|  
|[stold](../stdcpplib/-string--functions.md#stold)|Converts a character sequence to a `long double`.|  
|[stoll](../stdcpplib/-string--functions.md#stoll)|Converts a character sequence to a `long long`.|  
|[stoul](../stdcpplib/-string--functions.md#stoul)|Converts a character sequence to an `unsigned long`.|  
|[stoull](../stdcpplib/-string--functions.md#stoull)|Converts a character sequence to an `unsigned long long`.|  
|[to_string](../stdcpplib/-string--functions.md#to_string)|Converts a value to a `string`.|  
|[to_wstring](../stdcpplib/-string--functions.md#to_wstring)|Converts a value to a wide `string`.|  
  
### Functions  
  
|||  
|-|-|  
|[getline Template Function](../stdcpplib/-string--functions.md#getline_template_function)|Extract strings from the input stream line by line.|  
  
### Classes  
  
|||  
|-|-|  
|[basic_string Class](../stdcpplib/basic_string-class.md)|A template class that describes objects that can store a sequence of arbitrary character-like objects.|  
|[char_traits Struct](../stdcpplib/char_traits-struct.md)|A template class that describes attributes associated with a character of type CharType|  
  
### Specializations  
  
|||  
|-|-|  
|[char_traits\<char> Struct](../stdcpplib/char_traits-char--struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type `char`.|  
|[char_traits<wchar_t> Struct](../stdcpplib/char_traits-wchar_t--struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type `wchar_t`.|  
|[char_traits<char16_t> Struct](../stdcpplib/char_traits-char16_t--struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type `char16_t`.|  
|[char_traits<char32_t> Struct](../stdcpplib/char_traits-char32_t--struct.md)|A struct that is a specialization of the template struct `char_traits`\<CharType> to an element of type `char32_t`.|  
  
## Requirements  
  
- **Header:** \<string>  
  
- **Namespace:** std  
  
## See Also  
 [Header Files Reference](../stdcpplib/c---standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)

