---
title: "Argument Definitions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "envp argument"
  - "main function, arguments"
  - "arguments [C++], for main function"
  - "argv argument"
  - "argc argument"
ms.assetid: 6148cbf3-ebe8-44f2-b277-de4b723991c7
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
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
# Argument Definitions
The arguments in the prototype  
  
```  
  
int main( int  
argc[ ,char*argv[] [,char*envp[] ] ] );intwmain(intargc[ ,wchar_t*argv[] [,wchar_t*envp[] ] ] );  
```  
  
 allow convenient command-line parsing of arguments and, optionally, access to environment variables. The argument definitions are as follows:  
  
 `argc`  
 An integer that contains the count of arguments that follow in `argv`. The `argc` parameter is always greater than or equal to 1.  
  
 `argv`  
 An array of null-terminated strings representing command-line arguments entered by the user of the program. By convention, `argv`**[0]** is the command with which the program is invoked, `argv`**[1]** is the first command-line argument, and so on, until `argv`**[**`argc`**]**, which is always **NULL**. See [Customizing Command Line Processing](../cpp/customizing-cpp-command-line-processing.md) for information on suppressing command-line processing.  
  
 The first command-line argument is always `argv`**[1]** and the last one is `argv`**[**`argc` – 1**]**.  
  
> [!NOTE]
>  By convention, `argv`**[0]** is the command with which the program is invoked.  However, it is possible to spawn a process using [CreateProcess](http://msdn.microsoft.com/library/windows/desktop/ms683197) and if you use both the first and second arguments (`lpApplicationName` and `lpCommandLine`), `argv`**[0]** may not be the executable name; use [GetModuleFileName](http://msdn.microsoft.com/library/windows/desktop/ms683197) to retrieve the executable name, and its fully-qualified path.  
  
## Microsoft Specific  
 `envp`  
 The `envp` array, which is a common extension in many UNIX systems, is used in Microsoft C++. It is an array of strings representing the variables set in the user's environment. This array is terminated by a **NULL** entry. It can be declared as an array of pointers to **char (char** \*envp[ ]**)** or as a pointer to pointers to **char (char** \*\*envp**)**. If your program uses **wmain** instead of **main**, use the `wchar_t` data type instead of `char`. The environment block passed to **main** and **wmain** is a "frozen" copy of the current environment. If you subsequently change the environment via a call to **putenv** or `_wputenv`, the current environment (as returned by `getenv`/`_wgetenv` and the `_environ`/ `_wenviron` variable) will change, but the block pointed to by envp will not change. See [Customizing Command Line Processing](../cpp/customizing-cpp-command-line-processing.md) for information on suppressing environment processing. This argument is ANSI compatible in C, but not in C++.  
  
## END Microsoft Specific  
  
## Example  
 The following example shows how to use the `argc`, `argv`, and `envp` arguments to **main**:  
  
```  
// argument_definitions.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <string.h>  
  
using namespace std;  
int main( int argc, char *argv[], char *envp[] ) {  
    int iNumberLines = 0;    // Default is no line numbers.  
  
    // If /n is passed to the .exe, display numbered listing  
    // of environment variables.  
  
    if ( (argc == 2) && _stricmp( argv[1], "/n" ) == 0 )  
         iNumberLines = 1;  
  
    // Walk through list of strings until a NULL is encountered.  
    for( int i = 0; envp[i] != NULL; ++i ) {  
        if( iNumberLines )  
            cout << i << ": " << envp[i] << "\n";  
    }  
}  
```  
  
## See Also  
 [main: Program Startup](../cpp/main-program-startup.md)