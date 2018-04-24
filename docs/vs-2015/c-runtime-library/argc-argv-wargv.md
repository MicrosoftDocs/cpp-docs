---
title: "__argc, __argv, __wargv | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "__wargv"
  - "__argv"
  - "__argc"
api_location: 
  - "msvcrt120.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
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
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __argc, __argv, __wargv
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [__argc, __argv, __wargv](https://docs.microsoft.com/cpp/c-runtime-library/argc-argv-wargv).  
  
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





