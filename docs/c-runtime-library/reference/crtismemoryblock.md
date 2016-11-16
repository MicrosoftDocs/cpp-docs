---
title: "_CrtIsMemoryBlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtIsMemoryBlock"
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
apitype: "DLLExport"
f1_keywords: 
  - "CrtlsMemoryBlock"
  - "_CrtIsMemoryBlock"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_CrtIsMemoryBlock function"
  - "CrtIsMemoryBlock function"
ms.assetid: f7cbbc60-3690-4da0-a07b-68fd7f250273
caps.latest.revision: 14
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
# _CrtIsMemoryBlock
Verifies that a specified memory block is in the local heap and that it has a valid debug heap block type identifier (debug version only).  
  
## Syntax  
  
```  
int _CrtIsMemoryBlock(   
   const void *userData,  
   unsigned int size,  
   long *requestNumber,  
   char **filename,  
   int *linenumber   
);  
```  
  
#### Parameters  
 [in] `userData`  
 Pointer to the beginning of the memory block to verify.  
  
 [in] `size`  
 Size of the specified block (in bytes).  
  
 [out] `requestNumber`  
 Pointer to the allocation number of the block or `NULL`.  
  
 [out] `filename`  
 Pointer to the name of the source file that requested the block or `NULL`.  
  
 [out] `linenumber`  
 Pointer to the line number in the source file or `NULL`.  
  
## Return Value  
 `_CrtIsMemoryBlock` returns `TRUE` if the specified memory block is located within the local heap and has a valid debug heap block type identifier; otherwise, the function returns `FALSE`.  
  
## Remarks  
 The `_CrtIsMemoryBlock` function verifies that a specified memory block is located within the application's local heap and that it has a valid block type identifier. This function can also be used to obtain the object allocation order number and the source file name/line number where the memory block allocation was originally requested. Passing non-NULL values for the `requestNumber`, `filename`, or `linenumber` parameters causes `_CrtIsMemoryBlock` to set these parameters to the values in the memory block's debug header, if it finds the block in the local heap. When [_DEBUG](../../c-runtime-library/debug.md) is not defined, calls to `_CrtIsMemoryBlock` are removed during preprocessing.  
  
 If `_CrtIsMemoryBlock` fails, it returns `FALSE` and the output parameters are initialized to default values: `requestNumber` and `lineNumber` are set to 0 and `filename` is set to `NULL`.  
  
 Because this function returns `TRUE` or `FALSE`, it can be passed to one of the [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macros to create a simple debugging error handling mechanism. The following example causes an assertion failure if the specified address is not located within the local heap:  
  
```  
_ASSERTE( _CrtIsMemoryBlock( userData, size, &requestNumber,   
&filename, &linenumber ) );  
```  
  
 For more information about how `_CrtIsMemoryBlock` can be used with other debug functions and macros, see [Macros for Reporting](/visualstudio/debugger/macros-for-reporting). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](/visualstudio/debugger/crt-debug-heap-details).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtIsMemoryBlock`|\<crtdbg.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Libraries  
 Debug versions of [C run-time libraries](../../c-runtime-library/crt-library-features.md) only.  
  
## Example  
 See the example for the [_CrtIsValidHeapPointer](../../c-runtime-library/reference/crtisvalidheappointer.md) topic.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Debug Routines](../../c-runtime-library/debug-routines.md)