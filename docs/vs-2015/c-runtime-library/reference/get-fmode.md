---
title: "_get_fmode | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_get_fmode"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "get_fmode"
  - "_get_fmode"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_fmode function"
  - "file translation [C++], default mode"
  - "get_fmode function"
ms.assetid: 22ea70e2-b9b5-422d-b514-64f4beaea45c
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_fmode
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_get_fmode](https://docs.microsoft.com/cpp/c-runtime-library/reference/get-fmode).  
  
  
Gets the default file translation mode for file I/O operations.  
  
## Syntax  
  
```  
errno_t _get_fmode(   
   int * pmode   
);  
```  
  
#### Parameters  
 [out] `pmode`  
 A pointer to an integer to be filled with the current default mode: `_O_TEXT` or `_O_BINARY`.  
  
## Return Value  
 Returns zero if successful; an error code on failure. If `pmode` is `NULL`, the invalid parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `EINVAL`.  
  
## Remarks  
 The function gets the value of the [_fmode](../../c-runtime-library/fmode.md) global variable. This variable specifies the default file translation mode for both low-level and stream file I/O operations, such as `_open`, `_pipe`, `fopen`, and `freopen`.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_get_fmode`|\<stdlib.h>|\<fcntl.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example in [_set_fmode](../../c-runtime-library/reference/set-fmode.md).  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_fmode](../../c-runtime-library/fmode.md)   
 [_set_fmode](../../c-runtime-library/reference/set-fmode.md)   
 [_setmode](../../c-runtime-library/reference/setmode.md)   
 [Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md)



