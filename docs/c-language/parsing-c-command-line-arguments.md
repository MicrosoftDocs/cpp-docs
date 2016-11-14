---
title: "Parsing C Command-Line Arguments | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "quotation marks, command-line arguments"
  - "double quotation marks"
  - "command line, parsing"
  - "parsing, command-line arguments"
  - "startup code, parsing command-line arguments"
ms.assetid: ffce8037-2811-45c4-8db4-1ed787859c80
caps.latest.revision: 8
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
# Parsing C Command-Line Arguments
**Microsoft Specific**  
  
 Microsoft C startup code uses the following rules when interpreting arguments given on the operating system command line:  
  
-   Arguments are delimited by white space, which is either a space or a tab.  
  
-   A string surrounded by double quotation marks is interpreted as a single argument, regardless of white space contained within. A quoted string can be embedded in an argument. Note that the caret (**^**) is not recognized as an escape character or delimiter.  
  
-   A double quotation mark preceded by a backslash, **\\"**, is interpreted as a literal double quotation mark (**"**).  
  
-   Backslashes are interpreted literally, unless they immediately precede a double quotation mark.  
  
-   If an even number of backslashes is followed by a double quotation mark, then one backslash (**\\**) is placed in the `argv` array for every pair of backslashes (**\\\\**), and the double quotation mark (**"**) is interpreted as a string delimiter.  
  
-   If an odd number of backslashes is followed by a double quotation mark, then one backslash (**\\**) is placed in the `argv` array for every pair of backslashes (**\\\\**) and the double quotation mark is interpreted as an escape sequence by the remaining backslash, causing a literal double quotation mark (**"**) to be placed in `argv`.  
  
 This list illustrates the rules above by showing the interpreted result passed to `argv` for several examples of command-line arguments. The output listed in the second, third, and fourth columns is from the ARGS.C program that follows the list.  
  
|Command-Line Input|argv[1]|argv[2]|argv[3]|  
|-------------------------|---------------|---------------|---------------|  
|`"a b c" d e`|`a b c`|`d`|`e`|  
|`"ab\"c" "\\" d`|`ab"c`|`\`|`d`|  
|`a\\\b d"e f"g h`|`a\\\b`|`de fg`|`h`|  
|`a\\\"b c d`|`a\"b`|`c`|`d`|  
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|  
  
## Example  
  
### Code  
  
```  
// Parsing_C_Commandline_args.c  
// ARGS.C illustrates the following variables used for accessing  
// command-line arguments and environment variables:  
// argc  argv  envp  
//  
  
#include <stdio.h>  
  
int main( int argc, // Number of strings in array argv  
 char *argv[],      // Array of command-line argument strings  
 char **envp )      // Array of environment variable strings  
{  
    int count;  
  
    // Display each command-line argument.  
    printf_s( "\nCommand-line arguments:\n" );  
    for( count = 0; count < argc; count++ )  
        printf_s( "  argv[%d]   %s\n", count, argv[count] );  
  
    // Display each environment variable.  
    printf_s( "\nEnvironment variables:\n" );  
    while( *envp != NULL )  
        printf_s( "  %s\n", *(envp++) );  
  
    return;  
}  
```  
  
## Comments  
 One example of output from this program is:  
  
```  
Command-line arguments:  
  argv[0]   C:\MSC\TEST.EXE  
  
Environment variables:  
  COMSPEC=C:\NT\SYSTEM32\CMD.EXE  
  
  PATH=c:\nt;c:\binb;c:\binr;c:\nt\system32;c:\word;c:\help;c:\msc;c:\;  
  PROMPT=[$p]   
  TEMP=c:\tmp  
  TMP=c:\tmp  
  EDITORS=c:\binr  
  WINDIR=c:\nt        
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [main Function and Program Execution](../c-language/main-function-and-program-execution.md)