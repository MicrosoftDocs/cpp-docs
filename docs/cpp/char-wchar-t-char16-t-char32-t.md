---
title: "char, wchar_t, char16_t, char32_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["char_cpp", "char16_t_cpp", "wchar_t_cpp", "char32_t_cpp"]
dev_langs: ["C++"]
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# char, wchar_t, char16_t, char32_t
The types **char**, **wchar_t**, **char16_t** and **char32_t** are built-in types that represent alphanumeric characters as well as non-alphanumeric glyphs and non-printing characters.

## Syntax

```cpp  
char     ch1{ 'a' };  // or { u8'a' }   
wchar_t  ch2{ L'a' };    
char16_t ch3{ u'a' };    
char32_t ch4{ U'a' };  
```  
  
## Remarks

The **char** type was the original character type in C and C++. The type **unsigned char** is often used to represent a *byte*, which is not a built-in type in C++. The **char** type can be used to store characters from the ASCII character set or any of the ISO-8859 character sets, and individual bytes of multi-byte characters such as Shift-JIS or the UTF-8 encoding of the Unicode character set. Strings of **char** type are referred to as *narrow* strings, even when used to encode multi-byte characters. In the Microsoft compiler, **char** is an 8-bit type.

The **wchar_t** type is an implementation-defined wide character type. In the Microsoft compiler, it represents a 16-bit wide character used to store Unicode encoded as UTF-16LE, the native character type on Windows operating systems. The wide character versions of the Universal C Runtime (UCRT) library functions use **wchar_t** and **wchar_t \*** types as parameters and return values, as do the wide character versions of the native Windows API.

The **char16_t** and **char32_t** types represent 16-bit and 32-bit wide characters, respectively. Unicode encoded as UTF-16 can be stored in the **char16_t** type, and Unicode encoded as UTF-32 can be stored in the **char32_t** type. Strings of these types and **wchar_t** are all referred to as *wide* strings, though the term often refers specifically to strings of **wchar_t** type.

In the C++ standard library, the `basic_string` type is specialized for both narrow and wide strings. Use `std::string` when the characters are of type **char**, `std::u16string` when the characters are of type **char16_t**, `std::u32string` when the characters are of type **char32_t**, and `std::wstring` when the characters are of type **wchar_t**. Other types that represent text, including `std::stringstream` and `std::cout` have specializations for narrow and wide strings.  
  
