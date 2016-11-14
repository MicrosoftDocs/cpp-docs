---
title: "ARM Assembler Command-Line Reference | Microsoft Docs"
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
ms.assetid: f7b89478-1ab5-4995-8cde-a805f0462c45
caps.latest.revision: 12
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
# ARM Assembler Command-Line Reference
This article provides command-line information about the Microsoft ARM assembler, *armasm*, which compiles ARMv7 Thumb assembly language into the Microsoft implementation of the Common Object File Format (COFF). The linker can link COFF code with object code that is produced by the ARM assembler or by the C compiler, together with object libraries that are created by the librarian.  
  
## Syntax  
  
```  
armasm [[options]] sourcefile objectfile  
```  
  
```  
armasm [[options]] -o objectfile sourcefile  
```  
  
#### Parameters  
 `options`  
 -errors `filename`  
 Redirect error and warning messages to `filename`.  
  
 -i `dir[;dir]`  
 Add the specified directories to the include search path.  
  
 -predefine `directive`  
 Specify a SETA, SETL, or SETS directive to predefine a symbol. Example: **armasm.exe -predefine "COUNT SETA 150" source.asm**. For more information, see the [ARM assembler tools guide](http://go.microsoft.com/fwlink/?LinkId=246102).  
  
 -nowarn  
 Disable all warning messages.  
  
 -ignore `warning`  
 Disable the specified warning. For possible values, see the section about warnings.  
  
 -help  
 Print the command-line help message.  
  
 -machine `machine`  
 Specify the machine type to set in the PE header.  Possible values for `machine` are:  
**ARM**—Sets the machine type to IMAGE_FILE_MACHINE_ARMNT. This is the default.   
**THUMB**—Sets the machine type to IMAGE_FILE_MACHINE_THUMB.  
  
 -oldit  
 Generate ARMv7-style IT blocks.  By default, ARMv8-compatible IT blocks are generated.  
  
 -via `filename`  
 Read additional command-line arguments from `filename`.  
  
 -16  
 Assemble source as 16-bit Thumb instructions.  This is the default.  
  
 -32  
 Assemble source as 32-bit ARM instructions.  
  
 -g  
 Generate debugging information.  
  
 -errorReport: `option`  
 Specify how internal assembler errors are reported to Microsoft.  Possible values for `option` are:   
**none**—Do not send reports.   
**prompt**—Prompt the user to send reports immediately.   
**queue**—Prompt the user to send reports at the next admin logon. This is the default.   
**send**—Send reports automatically.  
  
 `sourcefile`  
 The name of the source file.  
  
 `objectfile`  
 The name of the object (output) file.  
  
 The following example demonstrates how to use armasm in a typical scenario. First, use armasm to build an assembly language source (.asm) file to an object (.obj) file. Then, use the CL command-line C compiler to compile a source (.c) file, and also specify the linker option to link the ARM object file.  
  
 **armasm myasmcode.asm -o myasmcode.obj**  
  
 **cl myccode.c /link myasmcode.obj**  
  
## See Also  
 [ARM Assembler Diagnostic Messages](../../assembler/arm/arm-assembler-diagnostic-messages.md)   
 [ARM Assembler Directives](../../assembler/arm/arm-assembler-directives.md)