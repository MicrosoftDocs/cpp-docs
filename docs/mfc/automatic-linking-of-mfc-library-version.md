---
title: "Automatic Linking of MFC Library Version | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "defaultlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "defaultlib in MFC"
  - "automatic links [C++]"
  - "MFC libraries, linking to"
  - "linking [C++], automatic of MFC library version"
  - "linking [C++]"
  - "linking [C++], of MFC"
  - "MFC libraries, versions"
ms.assetid: 02af4a20-2034-4fce-b200-c2202c3c8311
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
# Automatic Linking of MFC Library Version
In versions of MFC before version 3.0 (before Visual C++ version 2.0), you had to manually specify the correct version of the MFC library in the input list of libraries for the linker. With MFC version 3.0 and later, it is no longer necessary to manually specify the version of the MFC library. Instead, the MFC header files automatically determine the correct version of the MFC library, based on values defined with `#define`, such as **_DEBUG** or **_UNICODE**. The MFC header files add **/defaultlib** directives instructing the linker to link in a specific version of the MFC library.  
  
 For example, the following code fragment from the AFX.H header file instructs the linker to link in either the NAFXCWD.LIB or NAFXCW.LIB version of MFC, depending on whether you are using the debug version of MFC:  
  
 `#ifndef _UNICODE`  
  
 `#ifdef _DEBUG`  
  
 `#pragma comment(lib, "nafxcwd.lib")`  
  
 `#else`  
  
 `#pragma comment(lib, "nafxcw.lib")`  
  
 `#endif`  
  
 `#else`  
  
 `#ifdef _DEBUG`  
  
 `#pragma comment(lib, "uafxcwd.lib")`  
  
 `#else`  
  
 `#pragma comment(lib, "uafxcw.lib")`  
  
 `#endif`  
  
 `#endif`  
  
 MFC header files also link in all required libraries, including MFC libraries, Win32 libraries, OLE libraries, OLE libraries built from samples, ODBC libraries, and so on. The Win32 libraries include Kernel32.Lib, User32.Lib, and GDI32.Lib.  
  
## See Also  
 [MFC Library Versions](../mfc/mfc-library-versions.md)

