---
title: "BSCMAKE Options | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCBscMakeTool.OutputFile"
  - "VC.Project.VCBscMakeTool.SuppressStartupBanner"
  - "VC.Project.VCBscMakeTool.PreserveSBR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/v BSCMAKE option"
  - "Iu BSCMAKE option"
  - "browse information files (.bsc), content"
  - "/Er BSCMAKE option"
  - "NOLOGO BSCMAKE option"
  - "/s BSCMAKE option"
  - "/Ei BSCMAKE option"
  - "/o BSCMAKE option"
  - "/NOLOGO BSCMAKE option"
  - "/Iu BSCMAKE option"
  - "s BSCMAKE option (/s)"
  - "/Em BSCMAKE option"
  - "Em BSCMAKE option"
  - "Es BSCMAKE option"
  - "files [C++], BSCMAKE"
  - "Er BSCMAKE option"
  - "BSCMAKE, options for controlling files"
  - "controlling BSCMAKE options"
  - "El BSCMAKE option"
  - "/El BSCMAKE option"
  - "/Es BSCMAKE option"
  - "Ei BSCMAKE option"
ms.assetid: fa2f1e06-c684-41cf-80dd-6a554835ebd2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# BSCMAKE Options
This section describes the options available for controlling BSCMAKE. Several options control the content of the browse information file by excluding or including certain information. The exclusion options can allow BSCMAKE to run faster and may result in a smaller .bsc file. Option names are case sensitive (except for **/HELP** and **/NOLOGO**).  
  
 Only **/NOLOGO** and **/o** are available from within the Visual Studio development environment.  See [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md) for information on access a project's property pages.  
  
 /Ei ( `filename`...)  
 Excludes the contents of the specified include files from the browse information file. To specify multiple files, separate the names with a space and enclose the list in parentheses. Parentheses are not necessary if you specify only one `filename`. Use **/Ei** along with the **/Es** option to exclude files not excluded by **/Es**.  
  
 /El  
 Excludes local symbols. The default is to include local symbols. For more information about local symbols, see [Creating an .sbr File](../../build/reference/creating-an-dot-sbr-file.md).  
  
 /Em  
 Excludes symbols in the body of macros. Use **/Em** to include only the names of macros in the browse information file. The default is to include both the macro names and the result of the macro expansions.  
  
 /Er ( `symbol`...)  
 Excludes the specified symbols from the browse information file. To specify multiple symbol names, separate the names with a space and enclose the list in parentheses. Parentheses are not necessary if you specify only one `symbol`.  
  
 /Es  
 Excludes from the browse information file every include file specified with an absolute path or found in an absolute path specified in the INCLUDE environment variable. (Usually, these are the system include files, which contain a lot of information that you may not need in your browse information file.) This option does not exclude files specified without a path or with relative paths or files found in a relative path in INCLUDE. You can use the **/Ei** option along with **/Es** to exclude files that **/Es** does not exclude. If you want to exclude only some of the files that **/Es** excludes, use **/Ei** instead of **/Es** and list the files you want to exclude.  
  
 /errorreport:[none &#124; prompt &#124; queue &#124; send]  
 Allows you to send information to Microsoft regarding internal errors in bscmake.exe.  
  
 For more information on **/errorreport**, see [/errorReport (Report Internal Compiler Errors)](../../build/reference/errorreport-report-internal-compiler-errors.md).  
  
 /HELP  
 Displays a summary of the BSCMAKE command-line syntax.  
  
 /Iu  
 Includes unreferenced symbols. By default, BSCMAKE does not record any symbols that are defined but not referenced. If an .sbr file has been packed, this option has no effect for that input file because the compiler has already removed the unreferenced symbols.  
  
 /n  
 Forces a nonincremental build. Use **/n** to force a full build of the browse information file whether or not a .bsc file exists and to prevent .sbr files from being truncated. See [How BSCMAKE Builds a .bsc File](../../build/reference/how-bscmake-builds-a-dot-bsc-file.md).  
  
 /NOLOGO  
 Suppresses the BSCMAKE copyright message.  
  
 /o `filename`  
 Specifies a name for the browse information file. By default, BSCMAKE gives the browse information file the base name of the first .sbr file and a .bsc extension.  
  
 /S ( `filename`...)  
 Tells BSCMAKE to process the specified include file the first time it is encountered and to exclude it otherwise. Use this option to save processing time when a file (such as a header, or .h, file for a .c or .cpp source file) is included in several source files but is unchanged by preprocessing directives each time. You may also want to use this option if a file is changed in ways that are unimportant for the browse information file you are creating. To specify multiple files, separate the names with a space and enclose the list in parentheses. Parentheses are not necessary if you specify only one `filename`. If you want to exclude the file every time it is included, use the **/Ei** or **/Es** option.  
  
 /v  
 Provides verbose output, which includes the name of each .sbr file being processed and information about the complete BSCMAKE run.  
  
 /?  
 Displays a brief summary of BSCMAKE command-line syntax.  
  
 The following command line tells BSCMAKE to do a full build of MAIN.bsc from three .sbr files. It also tells BSCMAKE to exclude duplicate instances of TOOLBOX.h:  
  
```  
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr  
```  
  
## See Also  
 [BSCMAKE Reference](../../build/reference/bscmake-reference.md)