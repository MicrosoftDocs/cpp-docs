---
title: "_pclose"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_pclose"
apilocation: 
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
apitype: "DLLExport"
f1_keywords: 
  - "_pclose"
  - "pclose"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_pclose function"
  - "pclose function"
  - "pipes, closing"
ms.assetid: e2e31a9e-ba3a-4124-bcbb-c4040110b3d3
caps.latest.revision: 14
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
# _pclose
Waits for a new command processor and closes the stream on the associated pipe.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
  
      int _pclose(  
FILE *stream   
);  
```  
  
#### Parameters  
 `stream`  
 Return value from the previous call to `_popen`.  
  
## Return Value  
 Returns the exit status of the terminating command processor, or –1 if an error occurs. The format of the return value is the same as that for `_cwait`, except the low-order and high-order bytes are swapped. If stream is **NULL**, `_pclose` sets `errno` to `EINVAL` and returns -1.  
  
 For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 The `_pclose` function looks up the process ID of the command processor (Cmd.exe) started by the associated `_popen` call, executes a [_cwait](../crt/_cwait.md) call on the new command processor, and closes the stream on the associated pipe.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_pclose`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../crt/crt-library-features.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Process and Environment Control](../crt/process-and-environment-control.md)   
 [_pipe](../crt/_pipe.md)   
 [_popen, _wpopen](../crt/_popen--_wpopen.md)