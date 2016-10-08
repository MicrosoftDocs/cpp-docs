---
title: "LINK Output"
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
ms.assetid: a98b557c-1947-447a-be1f-616fb45a9580
caps.latest.revision: 6
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
# LINK Output
Link output includes .exe files, DLLs, mapfiles, and messages.  
  
##  <a name="_core_output_files"></a> Output Files  
 The default output file from LINK is an .exe file. If the [/DLL](../VS_visualcpp/-DLL--Build-a-DLL-.md) option is specified, LINK builds a .dll file. You can control the output file name with the [Output File Name (/OUT)](../VS_visualcpp/-OUT--Output-File-Name-.md) option.  
  
 In incremental mode, LINK creates an .ilk file to hold status information for later incremental builds of the program. For details about .ilk files, see [.ilk Files](../VS_visualcpp/.Ilk-Files-as-Linker-Input.md). For more information about incremental linking, see the [Link Incrementally (/INCREMENTAL)](../VS_visualcpp/-INCREMENTAL--Link-Incrementally-.md) option.  
  
 When LINK creates a program that contains exports (usually a DLL), it also builds a .lib file, unless an .exp file was used in the build. You can control the import library file name with the [/IMPLIB](../VS_visualcpp/-IMPLIB--Name-Import-Library-.md) option.  
  
 If the [Generate Mapfile (/MAP)](../VS_visualcpp/-MAP--Generate-Mapfile-.md) option is specified, LINK creates a mapfile.  
  
 If the [Generate Debug Info (/DEBUG)](../VS_visualcpp/-DEBUG--Generate-Debug-Info-.md) option is specified, LINK creates a PDB to contain debugging information for the program.  
  
##  <a name="_core_other_output"></a> Other Output  
 When you type `link` without any other command-line input, LINK displays a usage statement that summarizes its options.  
  
 LINK displays a copyright and version message and echoes command-file input, unless the [Suppress Startup Banner (/NOLOGO)](../VS_visualcpp/-NOLOGO--Suppress-Startup-Banner---Linker-.md) option is used.  
  
 You can use the [Print Progress Messages (/VERBOSE)](../VS_visualcpp/-VERBOSE--Print-Progress-Messages-.md) option to display additional details about the build.  
  
 LINK issues error and warning messages in the form LNK*nnnn*. This error prefix and range of numbers are also used by LIB, DUMPBIN, and EDITBIN.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)