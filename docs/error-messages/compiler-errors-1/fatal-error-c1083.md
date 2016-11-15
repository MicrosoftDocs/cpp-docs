---
title: "Fatal Error C1083 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1083"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1083"
ms.assetid: 97e52df3-e79c-4f85-8f1e-bbd1057d55e7
caps.latest.revision: 23
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
# Fatal Error C1083
Cannot open filetype file: 'file': message  
  
 The compiler generates a C1083 error when it can’t find a file. Here are the common reasons why the compiler generates this error.  
  
 **The specified file name is wrong**  
  
 The name of a file may be mistyped. For example,  
  
```cpp  
#include <algorithms.h>  
```  
  
 might not find the file you intend. There is a Standard C++ Library header file named algorithms that does not have a .h file name extension. It would not be found by this `include` directive. To fix this issue, verify that the correct file name is entered.  
  
 Certain C Runtime Library headers are located in a subdirectory of the standard include directory. For example, to include sys\types.h, you must include the sys subdirectory name in the include directive:  
  
 `#include <sys\types.h>`  
  
 **The file is not included in the compiler search path**  
  
 The compiler cannot find the file by using the search rules that are indicated by an `include` or `import` directive. For example, a header file name that is enclosed by quotation marks  
  
 `#include "myincludefile.h"`  
  
 tells the compiler to look for the file in the same directory that contains the source file first, and then look in other locations specified by the build environment. If the quotation marks contain an absolute path, the compiler only looks for the file at that location. If the quotation marks contain a relative path, the compiler looks for the file in the directory relative to the source directory. If the name is enclosed by angle brackets  
  
 `#include <stdio.h>`  
  
 the compiler follows a search path that is defined by the build environment, the **/I** compiler option, the **/X** compiler option, and the **INCLUDE** environment variable. For more information, including specific details about the search order used to find a file, see [#include Directive (C/C++)](../../preprocessor/hash-include-directive-c-cpp.md) and [#import Directive](../../preprocessor/hash-import-directive-cpp.md).  
  
 Even when header files are listed in **Solution Explorer** as part of a project, the files are only found by the compiler when they are referred to by an `include` or `import` directive and are located on a directory search path. Different kinds of builds might use different search paths. The **/X** compiler option can be used to exclude directories from the include file search path. This enables different builds to use different include files that have the same name, but are kept in different directories. This is an alternative to conditional compilation by using preprocessor commands. For more information about the **/X** compiler option, see [/X (Ignore Standard Include Paths)](../../build/reference/x-ignore-standard-include-paths.md).  
  
 When the compiler is invoked on the command line, environment variables are often used to specify search paths. If the search path described by the **INCLUDE** environment variable is not set correctly, a C1083 error is generated. For more information about how to use environment variables, see [How to: Use Environment Variables in a Build](http://msdn.microsoft.com/Library/7f9e4469-8865-4b59-aab3-3ff26bd36e77).  
  
 To fix this issue, correct the path that the compiler uses to search for the included or imported file. A new project uses default search paths. You may have to modify the path to add a directory for your project. If you are compiling on the command line, set the **INCLUDE** environment variable or the **/I** compiler option to specify the path of the file. To set the include directory path in Visual Studio, open the project’s **Property Pages** dialog box, expand **Configuration Properties** and **VC++ Directories**, and then edit the **Include Directories** value. For more information about the per-user and per-project directories searched by the compiler in Visual Studio, see [VC++ Directories Property Page](../../ide/vcpp-directories-property-page.md). For more information about the **/I** compiler option, see [/I (Additional Include Directories)](../../build/reference/i-additional-include-directories.md).  
  
 **The wrong version of a file name is included**  
  
 A C1083 error can also indicate that the wrong version of a file is included. For example, a build could include the wrong version of a file that has an `include` directive for a header file that is not intended for that build. When the header file is not found, the compiler generates a C1083 error. The fix for this problem is to use the correct file, not to add the header file or directory to the build.  
  
 **The precompiled headers are not yet precompiled**  
  
 When a project is configured to use precompiled headers, the relevant .pch files have to be created so that files that use the header contents can be compiled. For example, the stdafx.cpp file is automatically created in the project directory for new MFC projects. Compile that file first to create the precompiled header files. (In the typical build process design, this is done automatically.) For more information, see [Creating Precompiled Header Files](../../build/reference/creating-precompiled-header-files.md).  
  
 **Additional causes**  
  
-   The file uses managed code, but the compiler option **/clr** is not specified. For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).  
  
-   The file is compiled by using a different **/analyze** compiler option setting than is used to precompile the headers. (When the headers for a project are precompiled, all should use the same **/analyze** settings.) For more information, see [/analyze (Code Analysis)](../../build/reference/analyze-code-analysis.md).  
  
-   The file, the directory, or the disk is read-only.  
  
-   Access permissions for the file or the directory are not granted.  
  
-   There are not enough file handles. Close some applications and then recompile. This condition is unusual under typical circumstances. However, it can occur when large projects are built on a computer that has limited physical memory.  
  
 The following example generates a C1083 error.  
  
```  
// C1083.cpp  
// compile with: /c  
#include "test.h"   // C1083 test.h does not exist  
#include "stdio.h"   // OK  
```  
  
 For information about how to build C/C++ projects in the IDE or on the command line, and information about setting environment variables, see [Building C/C++ Programs](../../build/building-c-cpp-programs.md).
 
 ## See Also
 [MSBuild Properties](/visualstudio/msbuild/msbuild-properties)