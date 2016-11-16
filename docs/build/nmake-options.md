---
title: "NMAKE Options | Microsoft Docs"
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
  - "NMAKE program, options"
ms.assetid: 00ba1aec-ef27-44cf-8d82-c5c095e45bae
caps.latest.revision: 9
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
# NMAKE Options
NMAKE options are described in the following table. Options are preceded by either a slash (/) or a dash (–) and are not case sensitive. Use [!CMDSWITCHES](../build/makefile-preprocessing-directives.md) to change option settings in a makefile or in Tools.ini.  
  
|Option|Purpose|  
|------------|-------------|  
|/A|Forces build of all evaluated targets, even if not out-of-date with respect to dependents. Does not force build of unrelated targets.|  
|/B|Forces build even if timestamps are equal. Recommended only for very fast systems (resolution of two seconds or less).|  
|/C|Suppresses default output, including nonfatal NMAKE errors or warnings, timestamps, and NMAKE copyright message. Suppresses warnings issued by /K.|  
|/D|Displays timestamps of each evaluated target and dependent and a message when a target does not exist. Useful with /P for debugging a makefile. Use **!CMDSWITCHES** to set or clear /D for part of a makefile.|  
|/E|Causes environment variables to override makefile macro definitions.|  
|/ERRORREPORT[NONE &#124; PROMPT &#124; QUEUE &#124; SEND ]|If nmake.exe fails at runtime, you can use /ERRORREPORT to send information to Microsoft about these internal errors.<br /><br /> For more information about /ERRORREPORT, see [/errorReport (Report Internal Compiler Errors)](../build/reference/errorreport-report-internal-compiler-errors.md).|  
|/F `filename`|Specifies `filename` as a makefile. Spaces or tabs can precede `filename`. Specify /F once for each makefile. To supply a makefile from standard input, specify a dash (–) for `filename`, and end keyboard input with either F6 or CTRL+Z.|  
|/G|Displays the makefiles included with the !INCLUDE directive.  See [Makefile Preprocessing Directives](../build/makefile-preprocessing-directives.md) for more information.|  
|/HELP, /?|Displays a brief summary of NMAKE command-line syntax.|  
|/I|Ignores exit codes from all commands. To set or clear /I for part of a makefile, use **!CMDSWITCHES**. To ignore exit codes for part of a makefile, use a dash (–) command modifier or [.IGNORE](../build/dot-directives.md). Overrides /K if both are specified.|  
|/K|Continues building unrelated dependencies, if a command returns an error. Also issues a warning and returns an exit code of 1. By default, NMAKE halts if any command returns a nonzero exit code. Warnings from /K are suppressed by /C; /I overrides /K if both are specified.|  
|/N|Displays but does not execute commands; preprocessing commands are executed. Does not display commands in recursive NMAKE calls. Useful for debugging makefiles and checking timestamps. To set or clear /N for part of a makefile, use **!CMDSWITCHES**.|  
|/NOLOGO|Suppresses the NMAKE copyright message.|  
|/P|Displays information (macro definitions, inference rules, targets, [.SUFFIXES](../build/dot-directives.md) list) to standard output, and then runs the build. If no makefile or command-line target exists, it displays information only. Use with /D to debug a makefile.|  
|/Q|Checks timestamps of targets; does not run the build. Returns a zero exit code if all targets are up-to-date and a nonzero exit code if any target is not. Preprocessing commands are executed. Useful when running NMAKE from a batch file.|  
|/R|Clears the **.SUFFIXES** list and ignores inference rules and macros that are defined in the Tools.ini file or that are predefined.|  
|/S|Suppresses display of executed commands. To suppress display in part of a makefile, use the **@** command modifier or [.SILENT](../build/dot-directives.md). To set or clear /S for part of a makefile, use **!CMDSWITCHES**.|  
|/T|Updates timestamps of command-line targets (or first makefile target) and executes preprocessing commands but does not run the build.|  
|/U|Must be used in conjunction with /N. Dumps inline NMAKE files so that the /N output can be used as a batch file.|  
|/X `filename`|Sends NMAKE error output to `filename` instead of standard error. Spaces or tabs can precede `filename`. To send error output to standard output, specify a dash (–) for `filename`. Does not affect output from commands to standard error.|  
|/Y|Disables batch-mode inference rules. When this option is selected, all batch-mode inference rules are treated as regular inference rules.|  
  
## See Also  
 [Running NMAKE](../build/running-nmake.md)