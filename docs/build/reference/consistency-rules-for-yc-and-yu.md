---
title: "Consistency Rules for -Yc and -Yu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yc"
  - "/yu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Yu compiler option [C++]"
  - "/Yu compiler option [C++]"
  - "-Yu compiler option [C++]"
  - "-Yc compiler option [C++]"
  - "/Yc compiler option [C++]"
  - "Yc compiler option [C++]"
ms.assetid: 9dfb0e32-ec9b-4a36-9355-27a0e5fba512
caps.latest.revision: 6
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
# Consistency Rules for /Yc and /Yu
When you use a precompiled header created using /Yc or /Yu, the compiler compares the current compilation environment to the one that existed when you created the .pch file. Be sure to specify an environment consistent with the previous one (using consistent compiler options, pragmas, and so on) for the current compilation. If the compiler detects an inconsistency, it issues a warning and identifies the inconsistency where possible. Such warnings don't necessarily indicate a problem with the .pch file; they simply warn you of possible conflicts. The following sections explain the consistency requirements for precompiled headers.  
  
## Compiler Option Consistency  
 The following table lists compiler options that might trigger an inconsistency warning when using a precompiled header.  
  
|Option|Name|Rule|  
|------------|----------|----------|  
|/D|Define constants and macros|Must be the same between the compilation that created the precompiled header and the current compilation. The state of defined constants is not checked, but unpredictable results can occur if your files depend on the values of the changed constants.|  
|/E or /EP|Copy preprocessor output to standard output|Precompiled headers do not work with the /E or /EP option.|  
|/Fr or /FR|Generate Microsoft Source Browser information|For the /Fr and /FR options to be valid with the /Yu option, they must also have been in effect when the precompiled header was created. Subsequent compilations that use the precompiled header also generate Source Browser information. Browser information is placed in a single .sbr file and is referenced by other files in the same manner as CodeView information. You cannot override the placement of Source Browser information.|  
|/GA, /GD, /GE, /Gw, or /GW|Windows protocol options|Must be the same between the compilation that created the precompiled header and the current compilation. If these options differ, a warning message results.|  
|/Zi|Generate complete debugging information|If this option is in effect when the precompiled header is created, subsequent compilations that use the precompilation can use that debugging information. If /Zi is not in effect when the precompiled header is created, subsequent compilations that use the precompilation and the /Zi option trigger a warning. The debugging information is placed in the current object file, and local symbols defined in the precompiled header are not available to the debugger.|  
  
> [!NOTE]
>  The precompiled header facility is intended for use only with a file with C and C++ source files.  
  
## Include Path Consistency  
 A precompiled header created with /Yc does not contain information about the include path that was in effect when you created the .pch file. When you use a .pch file, the compiler always uses the include path specified in the current compilation.  
  
## Source File Consistency  
 When you use a precompiled header, the compiler ignores all preprocessor directives (including pragmas) that appear before the hdrstop pragma. The compilation specified by such preprocessor directives must be the same as the compilation used to create the precompiled header file.  
  
## Pragma Consistency  
 Pragmas processed during the compilation of a precompiled header usually affect the file in which the precompiled header is subsequently used. The following pragmas affect only the code within the .pch file; they do not affect code that subsequently uses the .pch file:  
  
||||  
|-|-|-|  
|Comment|page|subtitle|  
|Linesize|pagesize|Title|  
|Message|skip||  
  
 The following pragmas are retained as part of a precompiled header, and affect the remainder of a compilation that uses the precompiled header:  
  
||||  
|-|-|-|  
|alloc_text|function|optimize|  
|auto_inline|inline_depth|Pack|  
|check_pointer|inline_recursion|same_seg|  
|check_stack|intrinsic|warning|  
|code_seg|loop_opt||  
|data_seg|native_caller||  
  
## See Also  
 [Precompiled Header Consistency Rules](../../build/reference/precompiled-header-consistency-rules.md)   
 [/Yc (Create Precompiled Header File)](../../build/reference/yc-create-precompiled-header-file.md)   
 [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md)