---
title: "Running LIB"
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
ms.assetid: d54f5c81-7147-4b2c-a8db-68ce6eb1eabd
caps.latest.revision: 8
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
# Running LIB
Various command-line options can be used to control LIB.  
  
## LIB Command Line  
 To run LIB, type the command `lib` followed by the options and file names for the task you are using LIB to perform. LIB also accepts command-line input in command files, which are described in the following section. LIB does not use an environment variable.  
  
> [!NOTE]
>  If you are accustomed to the LINK32.exe and LIB32.exe tools provided with the Microsoft Win32 Software Development Kit for Windows NT, you may have been using either the command `link32 -lib` or the command `lib32` for managing libraries and creating import libraries. Be sure to change your makefiles and batch files to use the `lib` command instead.  
  
## LIB Command Files  
 You can pass command-line arguments to LIB in a command file using the following syntax:  
  
```  
LIB @commandfile  
```  
  
 The file `commandfile` is a text file. No space or tab is allowed between the at sign (@) and the file name. There is no default extension; you must specify the full file name, including any extension. Wildcards cannot be used. You can specify an absolute or relative path with the file name.  
  
 In the command file, arguments can be separated by spaces or tabs, as they can on the command line; they can also be separated by newline characters. Use a semicolon (;) to mark a comment. LIB ignores all text from the semicolon to the end of the line.  
  
 You can specify either all or part of the command line in a command file, and you can use more than one command file in a LIB command. LIB accepts the command-file input as if it were specified in that location on the command line. Command files cannot be nested. LIB echoes the contents of command files unless the /NOLOGO option is used.  
  
## Using LIB Options  
 An option consists of an option specifier, which is either a dash ( – ) or a forward slash ( / ), followed by the name of the option. Option names cannot be abbreviated. Some options take an argument, specified after a colon (:). No spaces or tabs are allowed within an option specification. Use one or more spaces or tabs to separate option specifications on the command line. Option names and their keyword or file name arguments are not case sensitive, but identifiers used as arguments are case sensitive. LIB processes options in the order specified on the command line and in command files. If an option is repeated with different arguments, the last one to be processed takes precedence.  
  
 The following options apply to all modes of LIB:  
  
 /ERRORREPORT [NONE &#124; PROMPT &#124; QUEUE &#124; SEND]  
 If lib.exe fails at runtime, you can use /ERRORREPORT to send information to Microsoft about these internal errors.  
  
 For more information about /ERRORREPORT, see [/errorReport (Report Internal Compiler Errors)](../VS_visualcpp/-errorReport--Report-Internal-Compiler-Errors-.md).  
  
 /LTCG  
 Causes the library to be built using link-time code generation.  For more information, see [/LTCG](../VS_visualcpp/-LTCG--Link-time-Code-Generation-.md).  
  
 /MACHINE  
 Specifies the target platform for the program. Usually, you do not need to specify /MACHINE. LIB infers the machine type from the .obj files. However, in some circumstances, LIB cannot determine the machine type and issues an error message. If such an error occurs, specify /MACHINE. In /EXTRACT mode, this option is for verification only. Use `lib /?` at the command line to see available machine types.  
  
 /NOLOGO  
 Suppresses display of the LIB copyright message and version number and prevents echoing of command files.  
  
 /VERBOSE  
 Displays details about the progress of the session, including names of the .obj files being added. The information is sent to standard output and can be redirected to a file.  
  
 /WX[:NO]  
 Treat warnings as errors. See [/WX (Treat Linker Warnings as Errors)](../VS_visualcpp/-WX--Treat-Linker-Warnings-as-Errors-.md) for more information.  
  
 Other options apply only to specific modes of LIB. These options are discussed in the sections describing each mode.  
  
## See Also  
 [LIB Reference](../VS_visualcpp/LIB-Reference.md)