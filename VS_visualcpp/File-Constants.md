---
title: "File Constants"
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
ms.assetid: c8fa5548-9ac2-4217-801d-eb45e86f2fa4
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
# File Constants
## Syntax  
  
```  
  
#include <fcntl.h>  
  
```  
  
## Remarks  
 The integer expression formed from one or more of these constants determines the type of reading or writing operations permitted. It is formed by combining one or more constants with a translation-mode constant.  
  
 The file constants are as follows:  
  
 `_O_APPEND`  
 Repositions the file pointer to the end of the file before every write operation.  
  
 `_O_CREAT`  
 Creates and opens a new file for writing; this has no effect if the file specified by *filename* exists.  
  
 `_O_EXCL`  
 Returns an error value if the file specified by *filename* exists. Only applies when used with `_O_CREAT`.  
  
 `_O_RDONLY`  
 Opens file for reading only; if this flag is given, neither `_O_RDWR` nor `_O_WRONLY` can be given.  
  
 `_O_RDWR`  
 Opens file for both reading and writing; if this flag is given, neither `_O_RDONLY` nor `_O_WRONLY` can be given.  
  
 `_O_TRUNC`  
 Opens and truncates an existing file to zero length; the file must have write permission. The contents of the file are destroyed. If this flag is given, you cannot specify `_O_RDONLY`.  
  
 `_O_WRONLY`  
 Opens file for writing only; if this flag is given, neither `_O_RDONLY` nor `_O_RDWR` can be given.  
  
## See Also  
 [_open, _wopen](../VS_visualcpp/_open--_wopen.md)   
 [_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md)   
 [Global Constants](../VS_visualcpp/Global-Constants.md)