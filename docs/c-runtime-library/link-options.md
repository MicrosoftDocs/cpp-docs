---
title: "Link Options | Microsoft Docs"
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
  - "nothrownew.obj"
  - "newmode.obj"
  - "noenv.obj"
  - "psetargv.obj"
  - "loosefpmath.obj"
  - "smallheap.obj"
  - "fp10.obj"
  - "nochkclr.obj"
  - "chkstk.obj"
  - "pcommode.obj"
  - "pnoenv.obj"
  - "link options [C++]"
  - "invalidcontinue.obj"
  - "pnothrownew.obj"
  - "pwsetargv.obj"
  - "pinvalidcontinue.obj"
  - "wsetargv.obj"
  - "binmode.obj"
  - "setargv.obj"
  - "noarg.obj"
  - "pnewmode.obj"
  - "commode.obj"
  - "pthreadlocale.obj"
  - "pbinmode.obj"
  - "threadlocale.obj"
  - "pnoarg.obj"
ms.assetid: 05b5a77b-9dd1-494b-ae46-314598c770bb
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
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
# Link Options
The CRT lib directory includes a number of small object files that enable specific CRT features without any code change. These are called "link options" since you just have to add them to the linker command line to use them.  
  
 Pure mode versions have been added. Use the regular versions for native and /clr code, use the pure versions (prefixed with a p) for /clr:pure mode.  
  
|Native and /clr|Pure mode|Description|  
|----------------------|---------------|-----------------|  
|binmode.obj|pbinmode.obj|Sets the default file-translation mode to binary. See [_fmode](../c-runtime-library/fmode.md).|  
|chkstk.obj|n/a|Provides stack-checking and alloca support when not using the CRT.|  
|commode.obj|pcommode.obj|Sets the global commit flag to "commit". See [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md) and [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md).|  
|fp10.obj|n/a|Changes the default precision control to 64 bits. See [Floating-Point Support](../c-runtime-library/floating-point-support.md).|  
|invalidcontinue.obj|pinvalidcontinue.obj|Sets a default invalid parameter handler that does nothing, meaning that invalid parameters passed to CRT functions will just set errno and return an error result.|  
|loosefpmath.obj|n/a|Ensures that floating point code tolerates denormal values.|  
|newmode.obj|pnewmode.obj|Causes [malloc](../c-runtime-library/reference/malloc.md) to call the new handler on failure. See [_set_new_mode](../c-runtime-library/reference/set-new-mode.md), [_set_new_handler](../c-runtime-library/reference/set-new-handler.md), [calloc](../c-runtime-library/reference/calloc.md), and [realloc](../c-runtime-library/reference/realloc.md).|  
|noarg.obj|pnoarg.obj|Disables all processing of argc and argv.|  
|nochkclr.obj|n/a|Does nothing. Remove from your project.|  
|noenv.obj|pnoenv.obj|Disables the creation of a cached environment for the CRT.|  
|nothrownew.obj|pnothrownew.obj|Enables the non-throwing version of new in the CRT. See [new and delete Operators](../cpp/new-and-delete-operators.md).|  
|setargv.obj|psetargv.obj|Enables command-line argument wildcard expansion. See [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md).|  
|smalheap.obj|n/a|Installs a very simple small heap manager.|  
|threadlocale.obj|pthreadlocale.obj|Enables per-thread locale for all new threads by default.|  
|wsetargv.obj|pwsetargv.obj|Enables command-line argument wildcard expansion. See [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md).|  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)