---
title: "Text and Binary Mode File I-O"
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
H1: Text and Binary Mode File I/O
ms.assetid: 3196e321-8b87-4609-b302-cd6f3c516051
caps.latest.revision: 10
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
# Text and Binary Mode File I-O
File I/O operations take place in one of two translation modes, text or binary, depending on the mode in which the file is opened. Data files are usually processed in text mode. To control the file translation mode, one can:  
  
-   Retain the current default setting and specify the alternative mode only when you open selected files.  
  
-   Use the function [_set_fmode](../VS_visualcpp/_set_fmode.md) to change the default mode for newly opened files. Use [_get_fmode](../VS_visualcpp/_get_fmode.md) to find the current default mode. The initial default setting is text mode (`_O_TEXT`).  
  
-   Change the default translation mode directly by setting the global variable [_fmode](../VS_visualcpp/_fmode.md) in your program. The function `_set_fmode` sets the value of this variable, but it can also be set directly.  
  
 When you call a file-open function such as [_open](../VS_visualcpp/_open--_wopen.md), [fopen](../VS_visualcpp/fopen--_wfopen.md), [fopen_s](../VS_visualcpp/fopen_s--_wfopen_s.md), [freopen](../VS_visualcpp/freopen--_wfreopen.md), [freopen_s](../VS_visualcpp/freopen_s--_wfreopen_s.md), [_fsopen](../VS_visualcpp/_fsopen--_wfsopen.md) or [_sopen_s](../VS_visualcpp/_sopen_s--_wsopen_s.md), you can override the current default setting of `_fmode` by specifying the appropriate argument to the function [_set_fmode](../VS_visualcpp/_set_fmode.md). The `stdin`, `stdout`, and `stderr` streams always open in text mode by default; you can also override this default when opening any of these files. Use [_setmode](../VS_visualcpp/_setmode.md) to change the translation mode using the file descriptor after the file is open.  
  
## See Also  
 [Input and Output](../VS_visualcpp/Input-and-Output.md)   
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)