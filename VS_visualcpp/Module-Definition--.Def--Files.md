---
title: "Module-Definition (.Def) Files"
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
ms.assetid: 08c0bc28-c5d2-47aa-9624-7fc68bcaa4d8
caps.latest.revision: 9
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
# Module-Definition (.Def) Files
Module-definition (.def) files provide the linker with information about exports, attributes, and other information about the program to be linked. A .def file is most useful when building a DLL. Because there are [linker options](../VS_visualcpp/Linker-Options.md) that can be used instead of module-definition statements, .def files are generally not necessary. You can also use [__declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md) as a way to specify exported functions.  
  
 You can invoke a .def file during the linker phase with the [/DEF (Specify Module-Definition File)](../VS_visualcpp/-DEF--Specify-Module-Definition-File-.md) linker option.  
  
 If you are building an .exe file that has no exports, using a .def file will make your output file larger and slower loading.  
  
 For an example, see [Exporting from a DLL Using DEF Files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md).  
  
 See the following sections for more information:  
  
-   [Rules for Module-Definition Statements](../VS_visualcpp/Rules-for-Module-Definition-Statements.md)  
  
-   [EXPORTS](../VS_visualcpp/EXPORTS.md)  
  
-   [HEAPSIZE](../VS_visualcpp/HEAPSIZE.md)  
  
-   [LIBRARY](../VS_visualcpp/LIBRARY.md)  
  
-   [NAME](../VS_visualcpp/NAME--C-C---.md)  
  
-   [SECTIONS](../VS_visualcpp/SECTIONS--C-C---.md)  
  
-   [STACKSIZE](../VS_visualcpp/STACKSIZE.md)  
  
-   [STUB](../VS_visualcpp/STUB.md)  
  
-   [VERSION](../VS_visualcpp/VERSION--C-C---.md)  
  
-   [Reserved words](../VS_visualcpp/Reserved-Words.md)  
  
## See Also  
 [C/C++ Building Reference](../VS_visualcpp/C-C---Building-Reference.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)   
 [Frequently Asked Questions on Building](assetId:///56a3bb8f-0181-4989-bab4-a07ba950ab08)