---
title: "stdin, stdout, stderr"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: badd4735-596d-4498-857c-ec8b7e670e4c
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# stdin, stdout, stderr
## Syntax  
  
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
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)