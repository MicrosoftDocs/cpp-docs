---
title: "Support for Unicode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "globalization [C++], character sets"
  - "portable data types [MFC]"
  - "Unicode [C++]"
  - "wide characters [C++], about wide characters"
  - "character sets [C++], Unicode"
  - "localization [C++], character sets"
  - "Unicode [C++], installing support"
ms.assetid: 180f1d10-8543-4f79-85ce-293d3cb443bb
caps.latest.revision: 10
author: "ghogen"
ms.author: "ghogen"
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
# Support for Unicode
Unicode is a specification for supporting all character sets, including those that cannot be represented in just one byte. If you are programming for an international market, we recommend that you use either Unicode or [multibyte character sets](../text/support-for-multibyte-character-sets-mbcss.md) (MBCSs), or enable your program so you can build it for either by changing a switch.  
  
 A wide character is a 2-byte multilingual character code. Most characters used in modern computing worldwide, including technical symbols and special publishing characters, can be represented according to the Unicode specification as a wide character. Characters that cannot be represented in just one wide character can be represented in a Unicode pair by using the Unicode surrogate feature. Because every wide character is represented in a fixed size of 16 bits, using wide characters simplifies programming with international character sets.  
  
 A wide-character string is represented as a **wchar_t[]** array and is pointed to by a `wchar_t*` pointer. Any ASCII character can be represented as a wide character by prefixing the letter L to the character. For example, L'\0' is the terminating wide (16-bit) **NULL** character. Similarly, any ASCII string literal can be represented as a wide-character string literal by prefixing the letter L to the ASCII literal (L"Hello").  
  
 Generally, wide characters take more space in memory than multibyte characters but are faster to process. In addition, only one locale can be represented at a time in multibyte encoding, whereas all character sets in the world are represented simultaneously by the Unicode representation.  
  
 The MFC framework is Unicode-enabled throughout, and MFC accomplishes Unicode enabling by using portable macros, as shown in the following table.  
  
### Portable Data Types in MFC  
  
|Non-portable data type|Replaced by this macro|  
|-----------------------------|----------------------------|  
|`char`|_**TCHAR**|  
|**char\***, **LPSTR (Win32 data type)**|`LPTSTR`|  
|**const char\*, LPCSTR (Win32 data type)**|`LPCTSTR`|  
  
 Class `CString` uses **_TCHAR** as its base and provides constructors and operators for easy conversions. Most string operations for Unicode can be written by using the same logic used for handling the Windows ANSI character set, except that the basic unit of operation is a 16-bit character instead of an 8-bit byte. Unlike working with multibyte character sets, you do not have to (and should not) treat a Unicode character as if it were two distinct bytes.  
  
## What do you want to do?  
  
-   [Install Unicode support via MFC](../mfc/unicode-in-mfc.md)  
  
-   [Enable Unicode in my program](../text/international-enabling.md)  
  
-   [Enable both Unicode and MBCS in my program](../text/internationalization-strategies.md)  
  
-   [Use Unicode to create an internationalized program](../text/unicode-programming-summary.md)  
  
-   [Learn the benefits of Unicode, including how using Unicode makes my program more efficient on Windows 2000](../text/benefits-of-character-set-portability.md)  
  
-   [Use wmain so I can pass wide-character arguments to my program](../text/support-for-using-wmain.md)  
  
-   [See a summary of Unicode programming](../text/unicode-programming-summary.md)  
  
-   [Learn about generic-text mappings for byte-width portability](../text/generic-text-mappings-in-tchar-h.md)  
  
## See Also  
 [Text and Strings](../text/text-and-strings-in-visual-cpp.md)   
 [Support for Using wmain](../text/support-for-using-wmain.md)