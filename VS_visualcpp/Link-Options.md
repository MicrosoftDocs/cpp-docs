---
title: "Link Options"
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
ms.assetid: 05b5a77b-9dd1-494b-ae46-314598c770bb
caps.latest.revision: 7
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
# Link Options
The CRT lib directory includes a number of small object files that enable specific CRT features without any code change. These are called "link options" since you just have to add them to the linker command line to use them.  
  
 Pure mode versions have been added. Use the regular versions for native and /clr code, use the pure versions (prefixed with a p) for /clr:pure mode.  
  
|Native and /clr|Pure mode|Description|  
|----------------------|---------------|-----------------|  
|binmode.obj|pbinmode.obj|Sets the default file-translation mode to binary. See [_fmode](../VS_visualcpp/_fmode.md).|  
|chkstk.obj|n/a|Provides stack-checking and alloca support when not using the CRT.|  
|commode.obj|pcommode.obj|Sets the global commit flag to "commit". See [fopen, _wfopen](../VS_visualcpp/fopen--_wfopen.md) and [fopen_s, _wfopen_s](../VS_visualcpp/fopen_s--_wfopen_s.md).|  
|fp10.obj|n/a|Changes the default precision control to 64 bits. See [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md).|  
|invalidcontinue.obj|pinvalidcontinue.obj|Sets a default invalid parameter handler that does nothing, meaning that invalid parameters passed to CRT functions will just set errno and return an error result.|  
|loosefpmath.obj|n/a|Ensures that floating point code tolerates denormal values.|  
|newmode.obj|pnewmode.obj|Causes [malloc](../VS_visualcpp/malloc.md) to call the new handler on failure. See [_set_new_mode](../VS_visualcpp/_set_new_mode.md), [_set_new_handler](../VS_visualcpp/_set_new_handler.md), [calloc](../VS_visualcpp/calloc.md), and [realloc](../VS_visualcpp/realloc.md).|  
|noarg.obj|pnoarg.obj|Disables all processing of argc and argv.|  
|nochkclr.obj|n/a|Does nothing. Remove from your project.|  
|noenv.obj|pnoenv.obj|Disables the creation of a cached environment for the CRT.|  
|nothrownew.obj|pnothrownew.obj|Enables the non-throwing version of new in the CRT. See [new and delete Operators](../VS_visualcpp/new-and-delete-Operators.md).|  
|setargv.obj|psetargv.obj|Enables command-line argument wildcard expansion. See [Expanding Wildcard Arguments](../VS_visualcpp/Expanding-Wildcard-Arguments.md).|  
|smalheap.obj|n/a|Installs a very simple small heap manager.|  
|threadlocale.obj|pthreadlocale.obj|Enables per-thread locale for all new threads by default.|  
|wsetargv.obj|pwsetargv.obj|Enables command-line argument wildcard expansion. See [Expanding Wildcard Arguments](../VS_visualcpp/Expanding-Wildcard-Arguments.md).|  
  
## See Also  
 [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md)