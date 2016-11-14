---
title: "__argc, __argv, __wargv | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__wargv"
  - "__argv"
  - "__argc"
apilocation: 
  - "msvcrt120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__argv"
  - "__argc"
  - "__wargv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__argv"
  - "__wargv"
  - "__argc"
ms.assetid: 17001b0a-04ad-4762-b3a6-c54847f02d7c
caps.latest.revision: 5
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
# __argc, __argv, __wargv
The `__argc` global variable is a count of the number of command-line arguments passed to the program. `__argv` is a pointer to an array of single-byte-character or multi-byte-character strings that contain the program arguments, and `__wargv` is a pointer to an array of wide-character strings that contain the program arguments. These global variables provide the arguments to `main` or `wmain`.  
  
## Syntax  
  
```  
extern int __argc;  
extern char ** __argv;  
extern wchar_t ** __wargv;  
```  
  
## Remarks  
 In a program that uses the `main` function,  `__argc` and `__argv` are initialized at program startup by using the command line that's used to start the program. The command line is parsed into individual arguments, and wildcards are expanded. The count of arguments is assigned to `__argc` and the argument strings are allocated on the heap, and a pointer to the array of arguments is assigned to `__argv`. In a program compiled to use wide characters and a `wmain` function, the arguments are parsed and wildcards are expanded as wide-character strings, and a pointer to the array of argument strings is assigned to `__wargv`.  
  
 For portable code, we recommend you use the arguments passed to `main` to get the command-line arguments in your program.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE not defined|_UNICODE defined|  
|---------------------|---------------------------|-----------------------|  
|`__targv`|`__argv`|`__wargv`|  
  
## Requirements  
  
|Global variable|Required header|  
|---------------------|---------------------|  
|`__argc`, `__argv`, `__wargv`|\<stdlib.h>, \<cstdlib> (C++)|  
  
 `__argc`, `__argv`, and `__wargv` are Microsoft extensions. For compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).  
  
## See Also  
 [Global Variables](../c-runtime-library/global-variables.md)   
 [main: Program Startup](../cpp/main-program-startup.md)   
 [Using wmain Instead of main](../cpp/using-wmain-instead-of-main.md)