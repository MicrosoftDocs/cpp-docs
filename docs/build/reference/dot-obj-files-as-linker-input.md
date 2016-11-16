---
title: ".Obj Files as Linker Input | Microsoft Docs"
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
  - "linker [C++], OBJ files as input"
  - "object files, linker output"
  - "OMF object files"
  - "LINK tool [C++], .obj files"
  - "COFF files"
  - "OBJ files as linker input"
  - ".obj files as linker input"
ms.assetid: 3028e423-8b10-4972-8eb4-6e9ae58f0a26
caps.latest.revision: 12
author: "corob-msft"
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
# .Obj Files as Linker Input
The linker tool (LINK.EXE) accepts .obj files that are in Common Object File Format (COFF).  
  
## Remarks  
 Microsoft provides a downloadable document that defines the common object file format. For more information, download revision 8.1 or later of the [Microsoft Portable Executable and Common Object File Format Specification](http://go.microsoft.com/fwlink/?LinkId=93292).  
  
## Unicode Support  
 Starting with Visual Studio 2005, the Microsoft Visual C++ compiler supports Unicode characters in identifiers as defined by the ISO/IEC C and C++ standards. Previous versions of the compiler supported only ASCII characters in identifiers. To support Unicode in the names of functions, classes, and statics, the compiler and linker use the Unicode UTF-8 encoding for COFF symbols in .obj files. The UTF-8 encoding is upwardly compatible with the ASCII encoding used by earlier versions of Visual Studio.  
  
 For more information about the compiler and linker, see [Unicode Support in the Compiler and Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md). For more information about the Unicode standard, see the [Unicode](http://go.microsoft.com/fwlink/?LinkId=37123) organization.  
  
## See Also  
 [LINK Input Files](../../build/reference/link-input-files.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [Support for Unicode](../../text/support-for-unicode.md)   
 [Unicode Support in the Compiler and Linker](../../build/reference/unicode-support-in-the-compiler-and-linker.md)   
 [Unicode standard](http://go.microsoft.com/fwlink/?LinkId=37123)   
 [Common Object File Format Specification](http://go.microsoft.com/fwlink/?LinkId=93292)