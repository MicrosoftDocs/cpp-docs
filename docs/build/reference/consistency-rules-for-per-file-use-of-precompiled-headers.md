---
title: "Consistency Rules for Per-File Use of Precompiled Headers | Microsoft Docs"
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
  - "precompiled header files, consistency rules"
  - "PCH files, consistency rules"
  - ".pch files, consistency rules"
ms.assetid: afd49365-48bc-41f4-b700-fe8297b944a1
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
# Consistency Rules for Per-File Use of Precompiled Headers
The [/Yu](../../build/reference/yu-use-precompiled-header-file.md) compiler option lets you specify which precompiled header (PCH) file to use.  
  
 When you use a PCH, the compiler assumes the same compilation environment — using consistent compiler options, pragmas, and so on — that was in effect when you created the PCH, unless you specify otherwise. If the compiler detects an inconsistency, it issues a warning and identifies the inconsistency where possible. Such warnings do not necessarily indicate a problem with the PCH; they simply warn you of possible conflicts. Consistency requirements for PCHs are described in the following sections.  
  
## Compiler Option Consistency  
 The following compiler options can trigger an inconsistency warning when using a PCH:  
  
-   Macros created using the Preprocessor (/D) option must be the same between the compilation that created the PCH and the current compilation. The state of defined constants is not checked, but unpredictable results can occur if these change.  
  
-   PCHs do not work with the /E and /EP options.  
  
-   PCHs must be created using either the Generate Browse Info (/FR) option or the Exclude Local Variables (/Fr) option before subsequent compilations that use the PCH can use these options.  
  
## C 7.0-Compatible (/Z7)  
 If this option is in effect when the PCH is created, subsequent compilations that use the PCH can use the debugging information.  
  
 If the C 7.0-Compatible (/Z7) option is not in effect when the PCH is created, subsequent compilations that use the PCH and /Z7 trigger a warning. The debugging information is placed in the current .obj file, and local symbols defined in the PCH are not available to the debugger.  
  
## Include Path Consistency  
 A PCH does not contain information about the include path that was in effect when it was created. When you use a .pch file, the compiler always uses the include path specified in the current compilation.  
  
## Source File Consistency  
 When you specify the Use Precompiled Header File (/Yu) option, the compiler ignores all preprocessor directives (including pragmas) that appear in the source code that will be precompiled. The compilation specified by such preprocessor directives must be the same as the compilation used for the Create Precompiled Header File (/Yc) option.  
  
## Pragma Consistency  
 Pragmas processed during the creation of a PCH usually affect the file with which the PCH is subsequently used. The comment and message pragmas do not affect the remainder of the compilation.  
  
 The following pragmas are retained as part of a PCH, and affect the remainder of a compilation that uses the PCH.  
  
||||  
|-|-|-|  
|alloc_text|include_alias|pack|  
|auto_inline|init_seg|pointers_to_members|  
|check_stack|inline_depth|setlocale|  
|code_seg|inline_recursion|vtordisp|  
|data_seg|intrinsic|warning|  
|function|optimize||  
  
## See Also  
 [Precompiled Header Consistency Rules](../../build/reference/precompiled-header-consistency-rules.md)   
 [/Yu (Use Precompiled Header File)](../../build/reference/yu-use-precompiled-header-file.md)   
 [Compiler Options](../../build/reference/compiler-options.md)