---
title: "char, wchar_t, char16_t, char32_t | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "char_cpp"
  - "char16_t_cpp"
  - "whchar_t_cpp"
  - "char32_t_cpp"
dev_langs: 
  - "C++"
ms.assetid: 6b33e9f5-455b-4e49-8f12-a150cbfe2e5b
caps.latest.revision: 2
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
# char, wchar_t, char16_t, char32_t
The types char, wchar_t, char16_t and char32_t are built in types that represent alphanumeric characters as well as non-alphanumeric glyphs and non-printing characters. char is eight bits in size, wchar_t and char16_t are 16 bits in size, and char32_t is 32 bits.  
  
## Syntax  
  
```cpp  
char     ch1{ 'a' };    wchar_t  ch2{ 'a' }; // or {L'a'}    char16_t ch3{ L'a' };// or {L'a'}    char32_t ch4{ L'a' };// or {L'a'}  
```  
  
## Remarks  
 The `char` type was the original character type in C and C++. It can be used to store characters from the ASCII character set or any of the ISO-8859 character sets, or the UTF-8 character set. The type `unsigned char` is often used to represent a *byte* which is not a built-in type in C++. The char type is not suitable for text in many languages. In general, modern programs should use one of the wide character types to represent text. Unicode is the  
  
 In the C++ standard library, the basic_string type is specialized for both narrow and wide strings. Use std::string when the characters are of type char, and std::wstring when the characters are of type wchar_t. Other types that represent text, including std::stringstream and std::cout have specializations for narrow and wide strings.  
  
## Requirements