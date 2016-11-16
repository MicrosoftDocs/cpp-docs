---
title: "_fcvt_s | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fcvt_s"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fcvt_s"
  - "_fcvt_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fcvt_s function"
  - "converting floating point, to strings"
  - "floating-point functions, converting number to string"
  - "_fcvt_s function"
ms.assetid: 48671197-1d29-4c2b-a5d8-d2368f5f68a1
caps.latest.revision: 27
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
# _fcvt_s
Converts a floating-point number to a string. This is a version of [_fcvt](../../c-runtime-library/reference/fcvt.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
errno_t _fcvt_s(   
   char* buffer,  
   size_t sizeInBytes,  
   double value,  
   int count,  
   int *dec,  
   int *sign   
);  
template <size_t size>  
errno_t _fcvt_s(   
   char (&buffer)[size],  
   double value,  
   int count,  
   int *dec,  
   int *sign   
); // C++ only  
```  
  
#### Parameters  
 [out] `buffer`  
 The supplied buffer that will hold the result of the conversion.  
  
 [in] `sizeInBytes`  
 The size of the buffer in bytes.  
  
 [in] `value`  
 Number to be converted.  
  
 [in] `count`  
 Number of digits after the decimal point.  
  
 [out] `dec`  
 Pointer to the stored decimal-point position.  
  
 [out] `sign`  
 Pointer to the stored sign indicator.  
  
## Return Value  
 Zero if successful. The return value is an error code if there is a failure. Error codes are defined in Errno.h. For a listing of these errors, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
 In the case of an invalid parameter, as listed in the following table, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns `EINVAL`.  
  
### Error Conditions  
  
|`buffer`|`sizeInBytes`|value|count|dec|sign|Return|Value in `buffer`|  
|--------------|-------------------|-----------|-----------|---------|----------|------------|-----------------------|  
|`NULL`|any|any|any|any|any|`EINVAL`|Not modified.|  
|Not `NULL` (points to valid memory)|<=0|any|any|any|any|`EINVAL`|Not modified.|  
|any|any|any|any|`NULL`|any|`EINVAL`|Not modified.|  
|any|any|any|any|any|`NULL`|`EINVAL`|Not modified.|  
  
 **Security Issues**  
  
 `_fcvt_s` might generate an access violation if `buffer` does not point to valid memory and is not `NULL`.  
  
## Remarks  
 The `_fcvt_s` function converts a floating-point number to a null-terminated character string. The `value` parameter is the floating-point number to be converted. `_fcvt_s` stores the digits of `value` as a string and appends a null character ('\0'). The `count` parameter specifies the number of digits to be stored after the decimal point. Excess digits are rounded off to `count` places. If there are fewer than `count` digits of precision, the string is padded with zeros.  
  
 Only digits are stored in the string. The position of the decimal point and the sign of `value` can be obtained from `dec` and `sign` after the call. The `dec` parameter points to an integer value; this integer value gives the position of the decimal point with respect to the beginning of the string. A zero or negative integer value indicates that the decimal point lies to the left of the first digit. The parameter `sign` points to an integer indicating the sign of `value`. The integer is set to 0 if `value` is positive and is set to a nonzero number if `value` is negative.  
  
 A buffer of length `_CVTBUFSIZE` is sufficient for any floating point value.  
  
 The difference between `_ecvt_s` and `_fcvt_s` is in the interpretation of the `count` parameter. `_ecvt_s` interprets `count` as the total number of digits in the output string, and `_fcvt_s` interprets c`ount` as the number of digits after the decimal point.  
  
 In C++, using this function is simplified by a template overload; the overload can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).  
  
 The debug version of this function first fills the buffer with 0xFD. To disable this behavior, use [_CrtSetDebugFillThreshold](../../c-runtime-library/reference/crtsetdebugfillthreshold.md).  
  
## Requirements  
  
|Function|Required header|Optional header|  
|--------------|---------------------|---------------------|  
|`_fcvt_s`|\<stdlib.h>|\<errno.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
 **Libraries:** All versions of the [CRT Library Features](../../c-runtime-library/crt-library-features.md).  
  
## Example  
  
```  
// fcvt_s.c  
#include <stdio.h>  
#include <stdlib.h>  
#include <errno.h>  
  
int main()  
{  
  char * buf = 0;  
  int decimal;  
  int sign;  
  int err;  
  
  buf = (char*) malloc(_CVTBUFSIZE);  
  err = _fcvt_s(buf, _CVTBUFSIZE, 1.2, 5, &decimal, &sign);  
  
  if (err != 0)  
  {  
     printf("_fcvt_s failed with error code %d\n", err);  
     exit(1);  
  }  
  
  printf("Converted value: %s\n", buf);    
  
}  
```  
  
```Output  
Converted value: 120000  
```  
  
## .NET Framework Equivalent  
 <xref:System.Convert.ToString%2A>  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [_ecvt_s](../../c-runtime-library/reference/ecvt-s.md)   
 [_gcvt_s](../../c-runtime-library/reference/gcvt-s.md)   
 [_fcvt](../../c-runtime-library/reference/fcvt.md)