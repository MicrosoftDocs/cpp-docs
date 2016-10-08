---
title: "_CrtIsValidPointer"
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
apiname: 
  - _CrtIsValidPointer
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 91c35590-ea5e-450f-a15d-ad8d62ade1fa
caps.latest.revision: 13
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
# _CrtIsValidPointer
Verifies that a pointer is not null. In versions of the C run-time library before Visual Studio 2010, verifies that a specified memory range is valid for reading and writing (debug version only).  
  
## Syntax  
  
```  
int _CrtIsValidPointer(   
   const void *address,  
   unsigned int size,  
   int access   
);  
```  
  
#### Parameters  
 address  
 Points to the beginning of the memory range to test for validity.  
  
 `size`  
 Size of the specified memory range (in bytes).  
  
 access  
 Read/write accessibility to determine for the memory range.  
  
## Return Value  
 `_CrtIsValidPointer` returns TRUE if the specified pointer is not null. In CRT library versions before Visual Studio 2010, returns TRUE if the memory range is valid for the specified operation or operations. Otherwise, the function returns FALSE.  
  
## Remarks  
 Starting with the CRT library in Visual Studio 2010, the size and access parameters are ignored, and `_CrtIsValidPointer` only verifies that the specified address is not null. Because this test is easy to perform yourself, we do not recommend you use this function. In versions before Visual Studio 2010, the function verifies that the memory range beginning at `address` and extending for `size` bytes is valid for the specified accessibility operation or operations. When `access` is set to TRUE, the memory range is verified for both reading and writing. When `access` is FALSE, the memory range is only validated for reading. When [_DEBUG](../VS_visualcpp/_DEBUG.md) is not defined, calls to `_CrtIsValidPointer` are removed during preprocessing.  
  
 Because this function returns TRUE or FALSE, it can be passed to one of the [_ASSERT](../VS_visualcpp/_ASSERT--_ASSERTE--_ASSERT_EXPR-Macros.md) macros to create a simple debugging error handling mechanism. The following example causes an assertion failure if the memory range is not valid for both reading and writing operations:  
  
```  
_ASSERTE( _CrtIsValidPointer( address, size, TRUE ) );  
```  
  
 For more information about how `_CrtIsValidPointer` can be used with other debug functions and macros, see [Macros for Reporting](../Topic/Macros%20for%20Reporting.md). For information about how memory blocks are allocated, initialized, and managed in the debug version of the base heap, see [CRT Debug Heap Details](../Topic/CRT%20Debug%20Heap%20Details.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_CrtIsValidPointer`|<crtdbg.h>|  
  
 `_CrtIsValidPointer` is a Microsoft extension. For compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 Debug versions of [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md) only.  
  
## Example  
 See the example for the [_CrtIsValidHeapPointer](../VS_visualcpp/_CrtIsValidHeapPointer.md) topic.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Debug Routines](../VS_visualcpp/Debug-Routines.md)