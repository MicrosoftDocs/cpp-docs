---
title: "ML and ML64 Command-Line Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ML"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/W* MASM compiler option"
  - "/c MASM compiler option"
  - "/EP MASM compiler option"
  - "/Fe MASM compiler option"
  - "/Zp MASM compiler option"
  - "/AT MASM compiler option"
  - "/Zm MASM compiler option"
  - "/Sf MASM compiler option"
  - "/Sp MASM compiler option"
  - "/w MASM compiler option"
  - "/Fl MASM compiler option"
  - "/coff MASM compiler option"
  - "/St MASM compiler option"
  - "/Cx MASM compiler option"
  - "/Sl MASM compiler option"
  - "/Cu MASM compiler option"
  - "MASM (Microsoft Macro Assembler), ML command-line reference"
  - "/FPi MASM compiler option"
  - "/Zf MASM compiler option"
  - "ML environment variable"
  - "/Fr MASM compiler option"
  - "/help MASM compiler option"
  - "/Sa MASM compiler option"
  - "/Zd MASM compiler option"
  - "/I MASM compiler option"
  - "/? MASM compiler option"
  - "/Bl MASM compiler option"
  - "/Fm MASM compiler option"
  - "/Fo MASM compiler option"
  - "command-line reference [ML]"
  - "/Sn MASM compiler option"
  - "/Gd MASM compiler option"
  - "/D* MASM compiler option"
  - "environment variables, ML"
  - "/Gc MASM compiler option"
  - "/F* MASM compiler option"
  - "/Sc MASM compiler option"
  - "/H MASM compiler option"
  - "/Zs MASM compiler option"
  - "/omf MASM compiler option"
  - "/Sg MASM compiler option"
  - "/Cp MASM compiler option"
  - "/Zi MASM compiler option"
  - "/nologo MASM compiler option"
  - "/Sx MASM compiler option"
  - "/WX MASM compiler option"
  - "/Ss MASM compiler option"
  - "command line, reference [ML]"
  - "/Ta MASM compiler option"
ms.assetid: 712623c6-f77e-47ea-a945-089e57c50b40
caps.latest.revision: 13
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
# ML and ML64 Command-Line Reference
Assembles and links one or more assembly-language source files. The command-line options are case sensitive.  
  
 For more information on ml64.exe, see [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).  
  
## Syntax  
  
```  
ML [[options]] filename [[ [[options]]  filename]]  
ML64 [[options]] filename [[ [[options]]  filename]]  
...  
[[/link linkoptions]]  
```  
  
#### Parameters  
 `options`  
 The options listed in the following table.  
  
|Option|Action|  
|------------|------------|  
|**/AT**|Enables tiny-memory-model support. Enables error messages for code constructs that violate the requirements for .com format files. Note that this is not equivalent to the [.MODEL](../../assembler/masm/dot-model.md) **TINY** directive.<br /><br /> Not available in ml64.exe.|  
|**/Bl** `filename`|Selects an alternate linker.|  
|**/c**|Assembles only. Does not link.|  
|**/coff**|Generates common object file format (COFF) type of object module. Generally required for Win32 assembly language development.<br /><br /> Not available in ml64.exe.|  
|**/Cp**|Preserves case of all user identifiers.|  
|**/Cu**|Maps all identifiers to upper case (default).<br /><br /> Not available in ml64.exe.|  
|**/Cx**|Preserves case in public and extern symbols.|  
|**/D** `symbol`[[=`value`]]|Defines a text macro with the given name. If `value` is missing, it is blank. Multiple tokens separated by spaces must be enclosed in quotation marks.|  
|**/EP**|Generates a preprocessed source listing (sent to STDOUT). See **/Sf**.|  
|**/ERRORREPORT** [ **NONE** &#124; **PROMPT** &#124; **QUEUE** &#124; **SEND** ]|If ml.exe or ml64.exe fails at runtime, you can use **/ERRORREPORT** to send information to Microsoft about these internal errors.<br /><br /> For more information about **/ERRORREPORT**, see [/errorReport (Report Internal Compiler Errors)](../../build/reference/errorreport-report-internal-compiler-errors.md).|  
|**/F** `hexnum`|Sets stack size to `hexnum` bytes (this is the same as **/link/STACK**:`number`). The value must be expressed in hexadecimal notation. There must be a space between **/F** and `hexnum`.|  
|**/Fe** `filename`|Names the executable file.|  
|**/Fl**[[`filename`]]|Generates an assembled code listing. See **/Sf**.|  
|**/Fm**[[`filename`]]|Creates a linker map file.|  
|**/Fo** `filename`|Names an object file. See Remarks section for more information.|  
|**/FPi**|Generates emulator fix-ups for floating-point arithmetic (mixed language only).<br /><br /> Not available in ml64.exe.|  
|**/Fr**[[`filename`]]|Generates a source browser .sbr file.|  
|**/FR**[[`filename`]]|Generates an extended form of a source browser .sbr file.|  
|**/Gc**|Specifies use of FORTRAN- or Pascal-style function calling and naming conventions. Same as **OPTION LANGUAGE:PASCAL**.<br /><br /> Not available in ml64.exe.|  
|**/Gd**|Specifies use of C-style function calling and naming conventions. Same as **OPTION LANGUAGE:C**.<br /><br /> Not available in ml64.exe.|  
|**/GZ**|Specifies use of __stdcall function calling and naming conventions.  Same as **OPTION LANGUAGE:STCALL**.<br /><br /> Not available in ml64.exe.|  
|**/H** `number`|Restricts external names to number significant characters. The default is 31 characters.<br /><br /> Not available in ml64.exe.|  
|**/help**|Calls QuickHelp for help on ML.|  
|**/I** `pathname`|Sets path for include file. A maximum of 10 **/I** options is allowed.|  
|**/nologo**|Suppresses messages for successful assembly.|  
|**/omf**|Generates object module file format (OMF) type of object module.  **/omf** implies **/c**; ML.exe does not support linking OMF objects.<br /><br /> Not available in ml64.exe.|  
|**/Sa**|Turns on listing of all available information.|  
|**/safeseh**|Marks the object as either containing no exception handlers or containing exception handlers that are all declared with [.SAFESEH](../../assembler/masm/dot-safeseh.md).<br /><br /> Not available in ml64.exe.|  
|**/Sf**|Adds first-pass listing to listing file.|  
|**/Sl** `width`|Sets the line width of source listing in characters per line. Range is 60 to 255 or 0. Default is 0. Same as [PAGE](../../assembler/masm/page.md) width.|  
|**/Sn**|Turns off symbol table when producing a listing.|  
|**/Sp** `length`|Sets the page length of source listing in lines per page. Range is 10 to 255 or 0. Default is 0. Same as [PAGE](../../assembler/masm/page.md) length.|  
|**/Ss** `text`|Specifies text for source listing. Same as [SUBTITLE](../../assembler/masm/subtitle.md) text.|  
|**/St** `text`|Specifies title for source listing. Same as [TITLE](../../assembler/masm/title.md) text.|  
|**/Sx**|Turns on false conditionals in listing.|  
|**/Ta** `filename`|Assembles source file whose name does not end with the .asm extension.|  
|**/w**|Same as **/W0/WX**.|  
|**/W** `level`|Sets the warning level, where `level` = 0, 1, 2, or 3.|  
|**/WX**|Returns an error code if warnings are generated.|  
|**/X**|Ignore INCLUDE environment path.|  
|**/Zd**|Generates line-number information in object file.|  
|**/Zf**|Makes all symbols public.|  
|**/Zi**|Generates CodeView information in object file.|  
|**/Zm**|Enables**M510** option for maximum compatibility with MASM 5.1.<br /><br /> Not available in ml64.exe.|  
|**/Zp**[[`alignment`]]|Packs structures on the specified byte boundary. The `alignment` can be 1, 2, or 4.|  
|**/Zs**|Performs a syntax check only.|  
|**/?**|Displays a summary of ML command-line syntax.|  
  
 `filename`  
 The name of the file.  
  
 `linkoptions`  
 The link options.  See [Linker Options](../../build/reference/linker-options.md) for more information.  
  
## Remarks  
 Some command-line options to ML and ML64 are placement-sensitive. For example, because ML and ML64 can accept several **/c** options, any corresponding **/Fo** options must be specified before **/c**. The following command-line example illustrates an object file specification for each assembly file specification:  
  
 **ml.exe /Fo a1.obj /c a.asm /Fo b1.obj /c b.asm**  
  
## Environment Variables  
  
|Variable|Description|  
|--------------|-----------------|  
|INCLUDE|Specifies search path for include files.|  
|ML|Specifies default command-line options.|  
|TMP|Specifies path for temporary files.|  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)   
 [Microsoft Macro Assembler Reference](../../assembler/masm/microsoft-macro-assembler-reference.md)