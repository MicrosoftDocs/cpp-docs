---
title: "include_alias | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc-pragma.include_alias"
  - "include_alias_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pragmas, include_alias"
  - "include_alias pragma"
ms.assetid: 3256d589-12b3-4af0-a586-199e96eabacc
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
# include_alias
Specifies that *short_filename* is to be used as an alias for *long_filename*.  
  
## Syntax  
  
```  
  
      #pragma include_alias( "  
      long_filename  
      ", "  
      short_filename  
      " )  
#pragma include_alias( <long_filename>, <short_filename> )  
```  
  
## Remarks  
 Some file systems allow longer header filenames than the 8.3 FAT file system limit. The compiler cannot simply truncate the longer names to 8.3, because the first eight characters of the longer header filenames may not be unique. Whenever the compiler encounters the *long_filename* string, it substitutes *short_filename*, and looks for the header file *short_filename* instead. This pragma must appear before the corresponding `#include` directives. For example:  
  
```  
// First eight characters of these two files not unique.  
#pragma include_alias( "AppleSystemHeaderQuickdraw.h", "quickdra.h" )  
#pragma include_alias( "AppleSystemHeaderFruit.h", "fruit.h" )  
  
#pragma include_alias( "GraphicsMenu.h", "gramenu.h" )  
  
#include "AppleSystemHeaderQuickdraw.h"  
#include "AppleSystemHeaderFruit.h"  
#include "GraphicsMenu.h"  
```  
  
 The alias being searched for must match the specification exactly, in case as well as in spelling and in use of double quotation marks or angle brackets. The **include_alias** pragma performs simple string matching on the filenames; no other filename validation is performed. For example, given the following directives,  
  
```  
#pragma include_alias("mymath.h", "math.h")  
#include "./mymath.h"  
#include "sys/mymath.h"  
```  
  
 no aliasing (substitution) is performed, since the header file strings do not match exactly. Also, header filenames used as arguments to the /Yu and /Yc compiler options, or the **hdrstop** pragma, are not substituted. For example, if your source file contains the following directive,  
  
```  
#include <AppleSystemHeaderStop.h>  
```  
  
 the corresponding compiler option should be  
  
```  
/YcAppleSystemHeaderStop.h  
```  
  
 You can use the **include_alias** pragma to map any header filename to another. For example:  
  
```  
#pragma include_alias( "api.h", "c:\version1.0\api.h" )  
#pragma include_alias( <stdio.h>, <newstdio.h> )  
#include "api.h"  
#include <stdio.h>  
```  
  
 Do not mix filenames enclosed in double quotation marks with filenames enclosed in angle brackets. For example, given the above two **#pragma include_alias** directives, the compiler performs no substitution on the following `#include` directives:  
  
```  
#include <api.h>  
#include "stdio.h"  
```  
  
 Furthermore, the following directive generates an error:  
  
```  
#pragma include_alias(<header.h>, "header.h")  // Error  
```  
  
 Note that the filename reported in error messages, or as the value of the predefined **__FILE\_\_** macro, is the name of the file after the substitution has been performed. For example, after the following directives,  
  
```  
#pragma include_alias( "VeryLongFileName.H", "myfile.h" )  
#include "VeryLongFileName.H"  
```  
  
 an error in VERYLONGFILENAME.H produces the following error message:  
  
```  
myfile.h(15) : error C2059 : syntax error  
```  
  
 Also note that transitivity is not supported. Given the following directives,  
  
```  
#pragma include_alias( "one.h", "two.h" )  
#pragma include_alias( "two.h", "three.h" )  
#include "one.h"  
```  
  
 the compiler searches for the file TWO.H rather than THREE.H.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)