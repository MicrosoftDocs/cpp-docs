---
title: "isnan, _isnan, _isnanf"
ms.custom: na
ms.date: 10/06/2016
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
  - _isnan
  - _isnanf
  - isnan
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
  - api-ms-win-crt-math-l1-1-0.dll
apitype: DLLExport
ms.assetid: 391fbc5b-89a4-4fba-997e-68f1131caf82
caps.latest.revision: 11
manager: ghogen
translation.priority.mt: 
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
# isnan, _isnan, _isnanf
Tests if a floating-point value is not a number (NAN).  
  
## Syntax  
  
```  
int isnan(  
   /* floating-point */ x   
); /* C-only macro */  
  
int _isnan(  
   double x   
);  
  
int _isnanf(  
   float x  
); /* x64 only */  
  
template <class T>  
bool isnan(  
   T x  
) throw(); /* C++ only */  
```  
  
#### Parameters  
 *x*  
 The floating-point value to test.  
  
## Return Value  
 In C, the `isnan` macro and the `_isnan` and `_isnanf` functions return a nonzero value if the argument `x` is a NAN; otherwise they return 0.  
  
 In C++, the `isnan` template functions return `true` if the argument `x` is a NAN; otherwise they return `false`.  
  
## Remarks  
 The C `isnan` macro and the `_isnan` and `_isnanf` functions test floating-point value *x*, returning a nonzero value if *x* is a Not a Number (NAN) value. A NAN is generated when the result of a floating-point operation can't be represented in IEEE-754 floating-point format for the specified type. For information about how a NAN is represented for output, see [printf](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md).  
  
 When compiled as C++, the `isnan` macro is not defined, and an `isnan` template function is defined instead. It returns a value of type `bool` instead of an integer.  
  
 The `_isnan` and `_isnanf` functions are Microsoft specific. The `_isnanf` function is only available when compiled for x64.  
  
## Requirements  
  
|Routine|Required header (C)|Required header (C++)|  
|-------------|---------------------------|-------------------------------|  
|`isnan`, `_isnanf`|<math.h>|<math.h> or <cmath\>|  
|`_isnan`|<float.h>|<float.h> or <cfloat\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [_finite, _finitef](../VS_visualcpp/_finite--_finitef.md)   
 [_fpclass, _fpclassf](../VS_visualcpp/_fpclass--_fpclassf.md)