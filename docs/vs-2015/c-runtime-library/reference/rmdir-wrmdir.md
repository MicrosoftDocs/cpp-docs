---
title: "_rmdir, _wrmdir | Microsoft Docs"
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
  - "_wrmdir"
  - "_rmdir"
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
  - "api-ms-win-crt-filesystem-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "trmdir"
  - "_trmdir"
  - "wrmdir"
  - "_rmdir"
  - "_wrmdir"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_rmdir function"
  - "directories [C++], deleting"
  - "rmdir function"
  - "directories [C++], removing"
  - "trmdir function"
  - "_trmdir function"
  - "_wrmdir function"
  - "wrmdir function"
ms.assetid: 652c2a5a-b0ac-4493-864e-1edf484333c5
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _rmdir, _wrmdir
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_rmdir, _wrmdir](https://docs.microsoft.com/cpp/c-runtime-library/reference/rmdir-wrmdir).  
  
Deletes a directory.  
  
## Syntax  
  
```  
  
      int _rmdir(  
   const char *dirname   
);  
int _wrmdir(  
   const wchar_t *dirname   
);  
```  
  
#### Parameters  
 `dirname`  
 Path of the directory to be removed.  
  
## Return Value  
 Each of these functions returns 0 if the directory is successfully deleted. A return value of –1 indicates an error and `errno` is set to one of the following values:  
  
 **ENOTEMPTY**  
 Given path is not a directory, the directory is not empty, or the directory is either the current working directory or the root directory.  
  
 `ENOENT`  
 Path is invalid.  
  
 **EACCES**  
 A program has an open handle to the directory.  
  
 For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `_rmdir` function deletes the directory specified by `dirname`. The directory must be empty, and it must not be the current working directory or the root directory.  
  
 `_wrmdir` is a wide-character version of `_rmdir`; the `dirname` argument to `_wrmdir` is a wide-character string. `_wrmdir` and `_rmdir` behave identically otherwise.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_trmdir`|`_rmdir`|`_rmdir`|`_wrmdir`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_rmdir`|\<direct.h>|  
|`_wrmdir`|\<direct.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).  
  
## Example  
 See the example for [_mkdir](../../c-runtime-library/reference/mkdir-wmkdir.md).  
  
## .NET Framework Equivalent  
 [System::IO::Directory::Delete](https://msdn.microsoft.com/library/system.io.directory.delete.aspx)  
  
## See Also  
 [Directory Control](../../c-runtime-library/directory-control.md)   
 [_chdir, _wchdir](../../c-runtime-library/reference/chdir-wchdir.md)   
 [_mkdir, _wmkdir](../../c-runtime-library/reference/mkdir-wmkdir.md)





