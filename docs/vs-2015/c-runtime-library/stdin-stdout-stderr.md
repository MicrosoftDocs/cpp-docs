---
title: "stdin, stdout, stderr | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "stdin"
  - "stderr"
  - "stdout"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "stdout function"
  - "standard output stream"
  - "standard error stream"
  - "stdin function"
  - "standard input stream"
  - "stderr function"
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# stdin, stdout, stderr
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [stdin, stdout, stderr](https://docs.microsoft.com/cpp/c-runtime-library/stdin-stdout-stderr).  
  
Syntax  
  
```  
  
      FILE *stdin;   
FILE *stdout;   
FILE *stderr;   
#include <stdio.h>  
```  
  
## Remarks  
 These are standard streams for input, output, and error output.  
  
 By default, standard input is read from the keyboard, while standard output and standard error are printed to the screen.  
  
 The following stream pointers are available to access the standard streams:  
  
|Pointer|Stream|  
|-------------|------------|  
|`stdin`|Standard input|  
|**stdout**|Standard output|  
|`stderr`|Standard error|  
  
 These pointers can be used as arguments to functions. Some functions, such as **getchar** and `putchar`, use `stdin` and **stdout** automatically.  
  
 These pointers are constants, and cannot be assigned new values. The `freopen` function can be used to redirect the streams to disk files or to other devices. The operating system allows you to redirect a program's standard input and output at the command level.  
  
## See Also  
 [Stream I/O](../c-runtime-library/stream-i-o.md)   
 [Global Constants](../c-runtime-library/global-constants.md)





