---
title: "__getmainargs, __wgetmainargs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__wgetmainargs"
  - "__getmainargs"
apilocation: 
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "__wgetmainargs"
  - "__getmainargs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__wgetmainargs"
  - "__getmainargs"
ms.assetid: f72f54eb-9509-4bdf-8752-40fc49055439
caps.latest.revision: 3
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
# __getmainargs, __wgetmainargs
Invokes command-line parsing and copies the arguments to `main()` back through the passed pointers.  
  
## Syntax  
  
```cpp  
int __getmainargs(  
    int * _Argc,   
   char *** _Argv,   
   char *** _Env,   
   int _DoWildCard,  
_startupinfo * _StartInfo);  
  
 int __wgetmainargs (  
   int *_Argc,  
   wchar_t ***_Argv,  
   wchar_t ***_Env,  
   int _DoWildCard,  
   _startupinfo * _StartInfo)  
  
```  
  
#### Parameters  
 `_Argc`  
 An integer that contains the number of arguments that follow in `argv`. The `argc` parameter is always greater than or equal to 1.  
  
 `_Argv`  
 An array of null-terminated strings representing command-line arguments entered by the user of the program. By convention, `argv[0]` is the command with which the program is invoked, argv[1] is the first command-line argument, and so on, until argv[argc], which is always NULL. The first command-line argument is always `argv[1]` and the last one is `argv[argc – 1]`.  
  
 `_Env`  
 An array of strings that represent the variables set in the user's environment. This array is terminated by a NULL entry.  
  
 `_DoWildCard`  
 An integer that if set to 1 expands the wildcards in the command line arguments, or if set to 0 does nothing.  
  
 `_StartInfo`  
 Other information to be passed to the CRT DLL.  
  
## Return Value  
 0 if successful; a negative value if unsuccessful.  
  
## Remarks  
 Use `__getmainargs` on non-wide character platforms, and `__wgetmainargs` on wide-character (Unicode) platforms.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__getmainargs|internal.h|  
|__wgetmainargs|internal.h|