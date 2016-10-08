---
title: "Text and Strings in Visual C++"
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
ms.topic: article
ms.assetid: a1bb27ac-abe5-4c6b-867d-f761d4b93205
caps.latest.revision: 12
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
# Text and Strings in Visual C++
An important aspect of developing applications for international markets is the adequate representation of local character sets. The ASCII character set defines characters in the range 0x00 to 0x7F. There are other character sets, primarily European, that define the characters within the range 0x00 to 0x7F identically to the ASCII character set and also define an extended character set from 0x80 to 0xFF. Thus, an 8-bit, single-byte-character set (SBCS) is sufficient to represent the ASCII character set, as well as the character sets for many European languages. However, some non-European character sets, such as Japanese Kanji, include many more characters than a single-byte coding scheme can represent, and therefore require multibyte-character set (MBCS) encoding.  
  
## In This Section  
 [Unicode and MBCS](../VS_visualcpp/Unicode-and-MBCS.md)  
 Discusses Visual C++ support for Unicode and MBCS programming.  
  
 [Support for Unicode](../VS_visualcpp/Support-for-Unicode.md)  
 Describes Unicode, a specification for supporting all character sets, including character sets that cannot be represented in a single byte.  
  
 [Support for Multibyte Character Sets (MBCS)](../VS_visualcpp/Support-for-Multibyte-Character-Sets--MBCSs-.md)  
 Discusses MBCS, an alternative to Unicode for supporting character sets, like Japanese and Chinese, that cannot be represented in a single byte.  
  
 [Generic-Text Mappings in Tchar.h](../VS_visualcpp/Generic-Text-Mappings-in-Tchar.h.md)  
 Provides Microsoft-specific generic-text mappings for many data types, routines, and other objects.  
  
 [How to: Convert Between Various String Types](../VS_visualcpp/How-to--Convert-Between-Various-String-Types.md)  
 Demonstrates how to convert various Visual C++ string types into other strings.  
  
## Related Sections  
 [Internationalization](../VS_visualcpp/Internationalization.md)  
 Discusses international support in the C run-time library.  
  
 [International Samples](assetId:///aa8d390c-cf4c-4dd8-9dea-74d81f93f2f8)  
 Provides links to samples demonstrating internationalization in Visual C++.  
  
 [Language and Country/Region Strings](../VS_visualcpp/Locale-Names--Languages--and-Country-Region-Strings.md)  
 Provides the language and country/region strings in the C run-time library.