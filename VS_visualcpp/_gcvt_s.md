---
title: "_gcvt_s"
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
  - _gcvt_s
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
  - api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
ms.assetid: 0a8d8a26-5940-4ae3-835e-0aa6ec1b0744
caps.latest.revision: 28
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
# _gcvt_s
Converts a floating-point value to a string. This is a version of [_gcvt](../VS_visualcpp/_gcvt.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
errno_t _gcvt_s(   
   char *buffer,  
   size_t sizeInBytes,  
   double value,  
   int digits   
);  
template <size_t cchStr>  
errno_t _gcvt_s(   
   char (&buffer)[cchStr],  
   double value,  
   int digits   
); // C++ only  
```  
  
#### Parameters  
 [out] `buffer`  
 Buffer to store the result of the conversion.  
  
 [in] `sizeInBytes`  
 Size of the buffer.  
  
 [in] `value`  
 Value to be converted.  
  
 [in] `digits`  
 Number of significant digits stored.  
  
## Return Value  
 Zero if successful. If a failure occurs due to an invalid parameter (see the following table for invalid values), the invalid parameter handler is invoked as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, an error code is returned. Error codes are defined in Errno.h. For a listing of these errors, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
### Error Conditions  
  
|`buffer`|`sizeInBytes`|`value`|`digits`|Return|Value in `buffer`|  
|--------------|-------------------|-------------|--------------|------------|-----------------------|  
|`NULL`|any|any|any|`EINVAL`|Not modified.|  
|Not `NULL` (points to valid memory)|zero|any|any|`EINVAL`|Not modified.|  
|Not `NULL` (points to valid memory)|any|any|>= `sizeInBytes`|`EINVAL`|Not modified.|  
  
 **Security Issues**  
  
 `_gcvt_s` can generate an access violation if `buffer` does not point to valid memory and is not `NULL`.  
  
## Remarks  
 The `_gcvt_s` function converts a floating-point `value` to a character string (which includes a decimal point and a possible sign byte) and stores the string in `buffer`. `buffer` should be large enough to accommodate the converted value plus a terminating null character, which is appended automatically. A buffer of length `_CVTBUFSIZE` is sufficient for any floating point value. If a buffer size of `digits` + 1 is used, the function will not overwrite the end of the buffer, so be sure to supply a sufficient buffer for this operation. `_gcvt_s` attempts to produce `digits` digits in decimal format. If it cannot, it produces `digits` digits in exponential format. Trailing zeros can be suppressed in the conversion.  
  
 In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
 The debug version of this function first fills the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../VS_visualcpp/_CrtSetDebugFillThreshold.md).  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_gcvt_s`|<stdlib.h>|<error.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_gcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char buf[_CVTBUFSIZE];  
  int decimal;  
  int sign;  
  int err;  
  
  err = _gcvt_s(buf, _CVTBUFSIZE, 1.2, 5);  
  
  if (err != 0)  
  {  
     printf("_gcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
 **Converted value: 1.2**   
## .NET Framework Equivalent  
 <xref:System.Convert.ToString?qualifyHint=False>  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [atof, _atof_l, _wtof, _wtof_l](../VS_visualcpp/atof--_atof_l--_wtof--_wtof_l.md)   
 [_ecvt_s](../VS_visualcpp/_ecvt_s.md)   
 [_fcvt_s](../VS_visualcpp/_fcvt_s.md)   
 [_gcvt](../VS_visualcpp/_gcvt.md)