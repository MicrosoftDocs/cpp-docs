---
title: "General MBCS Programming Advice | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MBCS [C++], dialog box fonts"
  - "MS Shell Dlg"
  - "MBCS [C++], programming"
  - "dialog boxes [C++], fonts"
ms.assetid: 7b541235-f3e5-4af0-b2c2-a0112cd5fbfb
caps.latest.revision: 9
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
# General MBCS Programming Advice
Use the following tips:  
  
-   For flexibility, use run-time macros such as `_tcschr` and `_tcscpy` when possible. For more information, see [Generic-Text Mappings in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   Use the C run-time `_getmbcp` function to get information about the current code page.  
  
-   Do not reuse string resources. Depending on the target language, a given string might have a different meaning when translated. For example, "File" on the application's main menu might translate differently from the string "File" in a dialog box. If you need to use more than one string with the same name, use different string IDs for each.  
  
-   You might want to find out whether your application is running on an MBCS-enabled operating system. To do so, set a flag at program startup; do not rely on API calls.  
  
-   When designing dialog boxes, allow approximately 30% extra space at the end of static text controls for MBCS translation.  
  
-   Be careful when selecting fonts for your application, because some fonts are not available on all systems. For example, the Japanese version of Windows 2000 does not support the Helvetica font.  
  
-   When selecting the font for dialog boxes, use [MS Shell Dlg](http://msdn.microsoft.com/library/windows/desktop/dd374112) instead of MS Sans Serif or Helvetica. MS Shell Dlg is replaced with the correct font by the system before creating the dialog box. Using MS Shell Dlg ensures that any changes in the operating system to deal with this font will automatically be available. (MFC replaces MS Shell Dlg with the DEFAULT_GUI_FONT or the System font on Windows 95, Windows 98, and Windows NT 4 because those systems do not handle MS Shell Dlg correctly.)  
  
-   When designing your application, decide which strings can be localized. If in doubt, assume that any given string will be localized. As such, do not mix strings that can be localized with those that cannot.  
  
## See Also  
 [MBCS Programming Tips](../text/mbcs-programming-tips.md)   
 [Incrementing and Decrementing Pointers](../text/incrementing-and-decrementing-pointers.md)