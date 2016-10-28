---
title: "fwrite"
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
  - "fwrite"
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
  - "fwrite"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "streams, writing data to"
  - "fwrite function"
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
caps.latest.revision: 18
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
# fwrite
Writes data to a stream.  
  
## Syntax  
  
```  
size_t fwrite(  
   const void *buffer,  
   size_t size,  
   size_t count,  
   FILE *stream   
);  
```  
  
#### Parameters  
 `buffer`  
 Pointer to data to be written.  
  
 `size`  
 Item size, in bytes.  
  
 `count`  
 Maximum number of items to be written.  
  
 `stream`  
 Pointer to `FILE` structure.  
  
## Return Value  
 `fwrite` returns the number of full items actually written, which may be less than `count` if an error occurs. Also, if an error occurs, the file-position indicator cannot be determined. If either `stream` or `buffer` is a null pointer, or if an odd number of bytes to be written is specified in Unicode mode, the function invokes the invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns 0.  
  
## Remarks  
 The `fwrite` function writes up to `count` items, of `size` length each, from `buffer` to the output `stream`. The file pointer associated with `stream` (if there is one) is incremented by the number of bytes actually written. If `stream` is opened in text mode, each linefeed is replaced with a carriage-return – linefeed pair. The replacement has no effect on the return value.  
  
 When `stream` is opened in Unicode translation mode—for example, if `stream` is opened by calling `fopen` and using a mode parameter that includes `ccs=UNICODE`, `ccs=UTF-16LE`, or `ccs=UTF-8`, or if the mode is changed to a Unicode translation mode by using `_setmode` and a mode parameter that includes `_O_WTEXT`, `_O_U16TEXT`, or `_O_U8TEXT`—`buffer` is interpreted as a pointer to an array of `wchar_t` that contains UTF-16 data. An attempt to write an odd number of bytes in this mode causes a parameter validation error.  
  
 Because this function locks the calling thread, it is thread-safe. For a non-locking version, see `_fwrite_nolock`.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fwrite`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
 See the example for [fread](../crt/fread.md).  
  
## .NET Framework Equivalent  
 [System::IO::FileStream::Write](https://msdn.microsoft.com/en-us/library/system.io.filestream.write.aspx)  
  
## See Also  
 [Stream I/O](../crt/stream-i-o.md)   
 [_setmode](../crt/_setmode.md)   
 [fread](../crt/fread.md)   
 [_fwrite_nolock](../crt/_fwrite_nolock.md)   
 [_write](../crt/_write.md)