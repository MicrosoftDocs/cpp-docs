---
title: "_cputs, _cputws"
ms.custom: na
ms.date: 10/04/2016
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
  - _cputws
  - _cputs
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
  - api-ms-win-crt-conio-l1-1-0.dll
apitype: DLLExport
ms.assetid: ec418484-0f8d-43ec-8d8b-198a556c659e
caps.latest.revision: 16
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# _cputs, _cputws
Puts a string to the console.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
  
      int _cputs(   
const char *str   
);  
int _cputws(  
const wchar_t *str   
);  
```  
  
#### Parameters  
 `str`  
 Output string.  
  
## Return Value  
 If successful, `_cputs` returns 0. If the function fails, it returns a nonzero value.  
  
## Remarks  
 The `_cputs` function writes the null-terminated string that's pointed to by `str` directly to the console. A carriage return-line feed (CR-LF) combination is not automatically appended to the string.  
  
 This function validates its parameter. If `str` is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and -1 is returned.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|**_cputts**|`_cputs`|`_cputs`|`_cputws`|  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_cputs`|<conio.h>|<errno.h>|  
|`_cputws`|<conio.h>|<errno.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Libraries  
 All versions of the [C run-time libraries](../VS_visualcpp/CRT-Library-Features.md).  
  
## Example  
  
```  
  
      // crt_cputs.c  
// compile with: /c  
// This program first displays a string to the console.  
  
#include <conio.h>  
#include <errno.h>  
  
void print_to_console(char* buffer)  
{  
   int retval;  
   retval = _cputs( buffer );  
   if (retval)  
   {  
       if (errno == EINVAL)  
       {  
         _cputs( "Invalid buffer in print_to_console.\r\n");  
       }  
       else  
         _cputs( "Unexpected error in print_to_console.\r\n");  
   }  
}  
  
void wprint_to_console(wchar_t* wbuffer)  
{  
   int retval;  
   retval = _cputws( wbuffer );  
   if (retval)  
   {  
       if (errno == EINVAL)  
       {  
         _cputws( L"Invalid buffer in wprint_to_console.\r\n");  
       }  
       else  
         _cputws( L"Unexpected error in wprint_to_console.\r\n");  
   }  
}  
  
int main()  
{  
  
   // String to print at console.   
   // Notice the \r (return) character.   
   char* buffer = "Hello world (courtesy of _cputs)!\r\n";  
   wchar_t *wbuffer = L"Hello world (courtesy of _cputws)!\r\n";  
   print_to_console(buffer);  
   wprint_to_console( wbuffer );  
}  
```  
  
## Output  
  
```  
Hello world (courtesy of _cputs)!  
Hello world (courtesy of _cputws)!  
```  
  
## See Also  
 [Console and Port I/O](../VS_visualcpp/Console-and-Port-I-O.md)   
 [_putch, _putwch](../VS_visualcpp/_putch--_putwch.md)