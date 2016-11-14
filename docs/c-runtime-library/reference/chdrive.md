---
title: "_chdrive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_chdrive"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "chdrive"
  - "_chdrive"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "drives, changing"
  - "_chdrive function"
  - "chdrive function"
ms.assetid: 212a1a4b-4fa8-444e-9677-7fca4c8c47e3
caps.latest.revision: 21
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
# _chdrive
Changes the current working drive.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _chdrive(   
   int drive   
);  
```  
  
#### Parameters  
 `drive`  
 An integer from 1 through 26 that specifies the current working drive (1=A, 2=B, and so forth).  
  
## Return Value  
 Zero (0) if the current working drive was changed successfully; otherwise, -1.  
  
## Remarks  
 If `drive` is not in the range from 1 through 26, the invalid-parameter handler is invoked as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the **_chdrive** function returns -1, `errno` is set to `EACCES`, and `_doserrno` is set to `ERROR_INVALID_DRIVE`.  
  
 The **_chdrive** function is not thread-safe because it depends on the **SetCurrentDirectory** function, which is itself not thread-safe. To use **_chdrive** safely in a multi-threaded application, you must provide your own thread synchronization. For more information, go to [MSDN Library](http://go.microsoft.com/fwlink/?LinkID=150542) and then search for **SetCurrentDirectory**.  
  
 The **_chdrive** function changes only the current working drive;  **_chdir** changes the current working directory.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|**_chdrive**|\<direct.h>|  
  
 For more information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
 See the example for [_getdrive](../../c-runtime-library/reference/getdrive.md).  
  
## .NET Framework Equivalent  
 [System::Environment::CurrentDirectory](https://msdn.microsoft.com/en-us/library/system.environment.currentdirectory.aspx)  
  
## See Also  
 [Directory Control](../../c-runtime-library/directory-control.md)   
 [_chdir, _wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [_fullpath, _wfullpath](../../c-runtime-library/reference/fullpath-wfullpath.md)   
 [_getcwd, _wgetcwd](../../c-runtime-library/reference/getcwd-wgetcwd.md)   
 [_getdrive](../../c-runtime-library/reference/getdrive.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)   
 [_rmdir, _wrmdir](../../c-runtime-library/reference/rmdir-wrmdir.md)   
 [system, _wsystem](../../c-runtime-library/reference/system-wsystem.md)