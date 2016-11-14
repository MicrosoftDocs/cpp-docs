---
title: "Unicode in MFC | Microsoft Docs"
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
  - "wide characters, Unicode"
  - "Unicode [C++], MFC"
  - "wide characters, encoding"
  - "strings [C++], Unicode"
  - "Unicode [C++], enabling"
ms.assetid: 1002004b-4113-4380-bf63-e1570934b793
caps.latest.revision: 13
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
# Unicode in MFC
MFC supports the Unicode standard for encoding wide characters on Windows NT, Windows 2000, and Windows XP platforms. Unicode applications cannot run on Windows 98 platforms.  
  
 The Unicode versions of the MFC libraries are described below:  
  
### Static Link Libraries  
  
|Release|Debug|Description|  
|-------------|-----------|-----------------|  
|UAFXCW.lib, .pdb|UAFXCWD.lib, .pdb|Unicode MFC static link library|  
  
### Dynamic-Link Libraries  
  
|Release|Debug|Description|  
|-------------|-----------|-----------------|  
|MFC100U.lib, .dbg, def, .dll, .map, .pdb, .prf|MFC100UD.lib, .def, .dll, .map, .pdb|Unicode MFC import library (see notes below for explanation of file extensions)|  
|MFCS100U.lib, .pdb|MFCS100UD.lib, .pdb|Unicode MFC import library containing code that must be statically linked in an application or DLL|  
  
 **File Types**  
  
-   Import library files have the extension (.lib).  
  
-   Dynamic-link library files have the extension (.dll).  
  
-   Module definition (.def) files are text files that contain statements for defining an .exe or .dll.  
  
-   Map (.map) files are text files that contain information that the linker uses when linking a program.  
  
-   Library (.lib) files are used in conjunction with the DLL versions of MFC. These files contain code that must be statically linked in the application or DLL.  
  
-   Program database (.pdb) files contain debugging and project state information.  
  
-   Debug (.dbg) files contain information (COFF FPO, and CodeView) that the Visual C++ Debugger uses.  
  
 For detailed information on naming conventions, see [Library Naming Conventions](../mfc/library-naming-conventions.md).  
  
 For information on using Unicode with MFC, see [Strings: Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
## See Also  
 [Concepts](../mfc/mfc-concepts.md)   
 [General MFC Topics](../mfc/general-mfc-topics.md)

