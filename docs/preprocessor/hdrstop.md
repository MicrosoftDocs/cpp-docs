---
title: "hdrstop | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "hdrstop_CPP"
  - "vc-pragma.hdrstop"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "hdrstop pragma"
  - "pragmas, hdrstop"
ms.assetid: 5ea8370a-10d1-4538-ade6-4c841185da0e
caps.latest.revision: 7
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
# hdrstop
Gives you additional control over precompilation file names and over the location at which the compilation state is saved.  
  
## Syntax  
  
```  
  
#pragma hdrstop [( "filename" )]    
```  
  
## Remarks  
 The *filename* is the name of the precompiled header file to use or create (depending on whether [/Yu](../build/reference/yu-use-precompiled-header-file.md) or [/Yc](../build/reference/yc-create-precompiled-header-file.md) is specified). If *filename* does not contain a path specification, the precompiled header file is assumed to be in the same directory as the source file.  
  
 If a C or C++ file contains a **hdrstop** pragma when compiled with /Yc, the compiler saves the state of the compilation up to the location of the pragma. The compiled state of any code that follows the pragma is not saved.  
  
 Use *filename* to name the precompiled header file in which the compiled state is saved. A space between **hdrstop** and *filename* is optional. The file name specified in the **hdrstop** pragma is a string and is therefore subject to the constraints of any C or C++ string. In particular, you must enclose it in quotation marks and use the escape character (backslash) to specify directory names. For example:  
  
```  
#pragma hdrstop( "c:\\projects\\include\\myinc.pch" )  
```  
  
 The name of the precompiled header file is determined according to the following rules, in order of precedence:  
  
1.  The argument to the /Fp compiler option  
  
2.  The *filename* argument to #**pragma hdrstop**  
  
3.  The base name of the source file with a .PCH extension  
  
 For the /Yc and /Yu options, if neither of the two compilation options nor the **hdrstop** pragma specifies a file name, the base name of the source file is used as the base name of the precompiled header file.  
  
 You can also use preprocessing commands to perform macro replacement as follows:  
  
```  
#define INCLUDE_PATH "c:\\progra~`1\\devstsu~1\\vc\\include\\"  
#define PCH_FNAME "PROG.PCH"  
.  
.  
.  
#pragma hdrstop( INCLUDE_PATH PCH_FNAME )  
```  
  
 The following rules govern where the **hdrstop** pragma can be placed:  
  
-   It must appear outside any data or function declaration or definition.  
  
-   It must be specified in the source file, not within a header file.  
  
## Example  
  
```  
#include <windows.h>                 // Include several files  
#include "myhdr.h"  
  
__inline Disp( char *szToDisplay )   // Define an inline function  
{  
    ...                              // Some code to display string  
}  
#pragma hdrstop  
```  
  
 In this example, the **hdrstop** pragma appears after two files have been included and an inline function has been defined. This might, at first, seem to be an odd placement for the pragma. Consider, however, that using the manual precompilation options, /Yc and /Yu, with the **hdrstop** pragma makes it possible for you to precompile entire source files — even inline code. The Microsoft compiler does not limit you to precompiling only data declarations.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)