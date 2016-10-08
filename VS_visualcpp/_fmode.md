---
title: "_fmode"
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
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _fmode
The `_fmode` variable sets the default file-translation mode for text or binary translation. This global variable has been deprecated for the more secure functional versions [_get_fmode](../VS_visualcpp/_get_fmode.md) and [_set_fmode](../VS_visualcpp/_set_fmode.md), which should be used in place of the global variable. It is declared in Stdlib.h as follows.  
  
## Syntax  
  
```  
extern int _fmode;  
```  
  
## Remarks  
 The default setting of `_fmode` is `_O_TEXT` for text-mode translation. `_O_BINARY` is the setting for binary mode.  
  
 You can change the value of `_fmode` in three ways:  
  
-   Link with Binmode.obj. This changes the initial setting of `_fmode` to `_O_BINARY`, causing all files except `stdin`, `stdout`, and `stderr` to be opened in binary mode.  
  
-   Make a call to `_get_fmode` or `_set_fmode` to get or set the `_fmode` global variable, respectively.  
  
-   Change the value of `_fmode` directly by setting it in your program.  
  
## See Also  
 [Global Variables](../VS_visualcpp/Global-Variables.md)   
 [_get_fmode](../VS_visualcpp/_get_fmode.md)   
 [_set_fmode](../VS_visualcpp/_set_fmode.md)