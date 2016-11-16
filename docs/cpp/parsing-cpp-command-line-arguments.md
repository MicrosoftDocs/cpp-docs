---
title: "Parsing C++ Command-Line Arguments | Microsoft Docs"
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
  - "quotation marks, command-line arguments"
  - "double quotation marks"
  - "command line, parsing"
  - "parsing, command-line arguments"
  - "startup code, parsing command-line arguments"
ms.assetid: e634e733-ac2f-4298-abe2-7e9288c94951
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# Parsing C++ Command-Line Arguments
**Microsoft Specific**  
  
 Microsoft C/C++ startup code uses the following rules when interpreting arguments given on the operating system command line:  
  
-   Arguments are delimited by white space, which is either a space or a tab.  
  
-   The caret character (^) is not recognized as an escape character or delimiter. The character is handled completely by the command-line parser in the operating system before being passed to the `argv` array in the program.  
  
-   A string surrounded by double quotation marks ("*string*") is interpreted as a single argument, regardless of white space contained within. A quoted string can be embedded in an argument.  
  
-   A double quotation mark preceded by a backslash (\\") is interpreted as a literal double quotation mark character (").  
  
-   Backslashes are interpreted literally, unless they immediately precede a double quotation mark.  
  
-   If an even number of backslashes is followed by a double quotation mark, one backslash is placed in the `argv` array for every pair of backslashes, and the double quotation mark is interpreted as a string delimiter.  
  
-   If an odd number of backslashes is followed by a double quotation mark, one backslash is placed in the `argv` array for every pair of backslashes, and the double quotation mark is "escaped" by the remaining backslash, causing a literal double quotation mark (") to be placed in `argv`.  
  
## Example  
 The following program demonstrates how command-line arguments are passed:  
  
```  
// command_line_arguments.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
int main( int argc,      // Number of strings in array argv  
          char *argv[],   // Array of command-line argument strings  
          char *envp[] )  // Array of environment variable strings  
{  
    int count;  
  
    // Display each command-line argument.  
    cout << "\nCommand-line arguments:\n";  
    for( count = 0; count < argc; count++ )  
         cout << "  argv[" << count << "]   "  
                << argv[count] << "\n";  
}  
```  
  
 The following table shows example input and expected output, demonstrating the rules in the preceding list.  
  
### Results of Parsing Command Lines  
  
|Command-Line Input|argv[1]|argv[2]|argv[3]|  
|-------------------------|---------------|---------------|---------------|  
|`"abc" d e`|`abc`|`d`|`e`|  
|`a\\b d"e f"g h`|`a\\b`|`de fg`|`h`|  
|`a\\\"b c d`|`a\"b`|`c`|`d`|  
|`a\\\\"b c" d e`|`a\\b c`|`d`|`e`|  
  
## END Microsoft Specific  
  
## See Also  
 [main: Program Startup](../cpp/main-program-startup.md)