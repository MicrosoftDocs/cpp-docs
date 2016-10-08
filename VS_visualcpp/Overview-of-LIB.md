---
title: "Overview of LIB"
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
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
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
# Overview of LIB
LIB creates standard libraries, import libraries, and export files you can use with [LINK](../VS_visualcpp/Linker-Options.md) when building a program. LIB runs from a command prompt.  
  
 You can use LIB in the following modes:  
  
-   [Building or modifying a COFF library](../VS_visualcpp/Managing-a-Library.md)  
  
-   [Extracting a member object to a file](../VS_visualcpp/Extracting-a-Library-Member.md)  
  
-   [Creating an export file and an import library](../VS_visualcpp/Working-with-Import-Libraries-and-Export-Files.md)  
  
 These modes are mutually exclusive; you can use LIB in only one mode at a time.  
  
## Lib Options  
 The following table lists the options for lib.exe, with a link to more information.  
  
 **/DEF**  
 Create an import library and an export file.  
  
 For more information see [Building an Import Library and Export File](../VS_visualcpp/Building-an-Import-Library-and-Export-File.md).  
  
 **/ERRORREPORT**  
 Send information to Microsoft about internal errors with lib.exe.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
 **/EXPORT**  
 Exports a function from your program.  
  
 For more information see [Building an Import Library and Export File](../VS_visualcpp/Building-an-Import-Library-and-Export-File.md).  
  
 **/EXTRACT**  
 Create an object (.obj) file that contains a copy of a member of an existing library.  
  
 For more information see [Extracting a Library Member](../VS_visualcpp/Extracting-a-Library-Member.md).  
  
 **/INCLUDE**  
 Adds a symbol to the symbol table.  
  
 For more information see [Building an Import Library and Export File](../VS_visualcpp/Building-an-Import-Library-and-Export-File.md).  
  
 **/LIBPATH**  
 Overrides the environment library path.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/LIST**  
 Displays information about the output library to standard output.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/LTCG**  
 Causes the library to be built using link-time code generation.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
 **/MACHINE**  
 Specifies the target platform for the program.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
 **/NAME**  
 When building an import library, specifies the name of the DLL for which the import library is being built.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/NODEFAULTLIB**  
 Removes one or more default libraries from the list of libraries it searches when resolving external references.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/NOLOGO**  
 Suppresses display of the LIB copyright message and version number and prevents echoing of command files.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
 **/OUT**  
 Overrides the default output filename.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/REMOVE**  
 Omits an object from the output library.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/SUBSYSTEM**  
 Tells the operating system how to run a program created by linking to the output library.  
  
 For more information see [Managing a Library](../VS_visualcpp/Managing-a-Library.md).  
  
 **/VERBOSE**  
 Displays details about the progress of the session, including names of the .obj files being added.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
 **/WX**  
 Treat warnings as errors.  
  
 For more information see [Running LIB](../VS_visualcpp/Running-LIB.md).  
  
## See Also  
 [LIB Reference](../VS_visualcpp/LIB-Reference.md)   
 [LIB Input Files](../VS_visualcpp/LIB-Input-Files.md)   
 [LIB Output Files](../VS_visualcpp/LIB-Output-Files.md)   
 [Other LIB Output](../VS_visualcpp/Other-LIB-Output.md)   
 [Structure of a Library](../VS_visualcpp/Structure-of-a-Library.md)