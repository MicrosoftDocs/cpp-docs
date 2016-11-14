---
title: "Module-Definition (.Def) Files | Microsoft Docs"
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
  - "def files"
  - "module definition files"
  - ".def files"
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
caps.latest.revision: 9
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
# Module-Definition (.Def) Files
Module-definition (.def) files provide the linker with information about exports, attributes, and other information about the program to be linked. A .def file is most useful when building a DLL. Because there are [linker options](../../build/reference/linker-options.md) that can be used instead of module-definition statements, .def files are generally not necessary. You can also use [__declspec(dllexport)](../../build/exporting-from-a-dll-using-declspec-dllexport.md) as a way to specify exported functions.  
  
 You can invoke a .def file during the linker phase with the [/DEF (Specify Module-Definition File)](../../build/reference/def-specify-module-definition-file.md) linker option.  
  
 If you are building an .exe file that has no exports, using a .def file will make your output file larger and slower loading.  
  
 For an example, see [Exporting from a DLL Using DEF Files](../../build/exporting-from-a-dll-using-def-files.md).  
  
 See the following sections for more information:  
  
-   [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)  
  
-   [EXPORTS](../../build/reference/exports.md)  
  
-   [HEAPSIZE](../../build/reference/heapsize.md)  
  
-   [LIBRARY](../../build/reference/library.md)  
  
-   [NAME](../../build/reference/name-c-cpp.md)  
  
-   [SECTIONS](../../build/reference/sections-c-cpp.md)  
  
-   [STACKSIZE](../../build/reference/stacksize.md)  
  
-   [STUB](../../build/reference/stub.md)  
  
-   [VERSION](../../build/reference/version-c-cpp.md)  
  
-   [Reserved words](../../build/reference/reserved-words.md)  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [Frequently Asked Questions on Building](http://msdn.microsoft.com/en-us/56a3bb8f-0181-4989-bab4-a07ba950ab08)