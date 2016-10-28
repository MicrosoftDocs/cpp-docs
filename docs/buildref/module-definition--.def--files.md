---
title: "Module-Definition (.Def) Files"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "def files"
  - "module definition files"
  - ".def files"
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
caps.latest.revision: 9
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
Module-definition (.def) files provide the linker with information about exports, attributes, and other information about the program to be linked. A .def file is most useful when building a DLL. Because there are [linker options](../buildref/linker-options.md) that can be used instead of module-definition statements, .def files are generally not necessary. You can also use [__declspec(dllexport)](../build/exporting-from-a-dll-using-__declspec-dllexport-.md) as a way to specify exported functions.  
  
 You can invoke a .def file during the linker phase with the [/DEF (Specify Module-Definition File)](../buildref/-def--specify-module-definition-file-.md) linker option.  
  
 If you are building an .exe file that has no exports, using a .def file will make your output file larger and slower loading.  
  
 For an example, see [Exporting from a DLL Using DEF Files](../build/exporting-from-a-dll-using-def-files.md).  
  
 See the following sections for more information:  
  
-   [Rules for Module-Definition Statements](../buildref/rules-for-module-definition-statements.md)  
  
-   [EXPORTS](../buildref/exports.md)  
  
-   [HEAPSIZE](../buildref/heapsize.md)  
  
-   [LIBRARY](../buildref/library.md)  
  
-   [NAME](../buildref/name--c-c---.md)  
  
-   [SECTIONS](../buildref/sections--c-c---.md)  
  
-   [STACKSIZE](../buildref/stacksize.md)  
  
-   [STUB](../buildref/stub.md)  
  
-   [VERSION](../buildref/version--c-c---.md)  
  
-   [Reserved words](../buildref/reserved-words.md)  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Linker Options](../buildref/linker-options.md)   
 [Frequently Asked Questions on Building](assetId:///56a3bb8f-0181-4989-bab4-a07ba950ab08)