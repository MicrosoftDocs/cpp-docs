---
title: "Internationalization Strategies | Microsoft Docs"
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
  - "language-portable code [C++]"
  - "MBCS [C++], internationalization strategies"
  - "Windows API [C++], international programming strategies"
  - "Win32 [C++], international programming strategies"
  - "Unicode [C++], globalizing applications"
  - "character sets [C++], international programming strategies"
  - "localization [C++], character sets"
ms.assetid: b09d9854-0709-4b9a-a00c-b0b8bc4199b1
caps.latest.revision: 8
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
# Internationalization Strategies
Depending on your target operating systems and markets, you have several internationalization strategies:  
  
-   Your application uses Unicode and therefore runs on Windows 2000 and Windows NT, but not on Windows 95 or Windows 98.  
  
     You use Unicode-specific functionality and all characters are 16 bits wide (although you can use ANSI characters in some parts of your program for special purposes). The C run-time library provides functions, macros, and data types for Unicode-only programming. MFC is fully Unicode-enabled.  
  
-   Your application uses MBCS and can be run on any Win32 platform.  
  
     You use MBCS-specific functionality. Strings can contain single-byte characters, double-byte characters, or both. The C run-time library provides functions, macros, and data types for MBCS-only programming. MFC is fully MBCS-enabled.  
  
-   The source code for your application is written for complete portability — by recompiling with the symbol **_UNICODE** or the symbol **_MBCS** defined, you can produce versions that use either. For more information, see [Generic-Text Mappings in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   Your application uses a wrapper library for missing Unicode functions on Windows 95, Windows 98, and Windows ME like the one described in [Design a Single Unicode App that Runs on Both Windows 98 and Windows 2000](http://go.microsoft.com/fwlink/p/?LinkId=250770). Wrapper libraries are also available commercially.  
  
     You use fully portable C run-time functions, macros, and data types. MFC's flexibility supports any of these strategies.  
  
 The remainder of these topics focus on writing completely portable code that you can build as Unicode or as MBCS.  
  
## See Also  
 [Unicode and MBCS](../text/unicode-and-mbcs.md)   
 [Locales and Code Pages](../text/locales-and-code-pages.md)