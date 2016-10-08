---
title: "_finite, _finitef"
ms.custom: na
ms.date: 10/05/2016
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
  - _finite
  - _finitef
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
ms.assetid: 5a7d7ca7-befb-4e1f-831d-28713c6eb805
caps.latest.revision: 15
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
# _finite, _finitef
Determines whether a floating-point value is finite.  
  
## Syntax  
  
```  
int _finite(   
   double x   
);  
  
int _finitef(   
   float x   
); /* x64 and ARM/ARM64 only */  
```  
  
#### Parameters  
 `x`  
 The floating-point value to test.  
  
## Return Value  
 Both `_finite` and `_finitef` return a nonzero value if the argument *x* is finite; that is, if –INF < `x` < +INF. It returns 0 if the argument is infinite or a NAN.  
  
## Remarks  
 The `_finite` and `_finitef` functions are Microsoft specific. The `_finitef` function is only available when compiled for x86, ARM, or ARM64 platforms.  
  
## Requirements  
  
|Function|Required header (C)|Required header (C++)|  
|--------------|---------------------------|-------------------------------|  
|`_finite`|<float.h> or <math.h>|<float.h>, <math.h>, <cfloat\>, or <cmath\>|  
|`_finitef`|<math.h>|<math.h> or <cmath\>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Double::IsInfinity](https://msdn.microsoft.com/en-us/library/system.double.isinfinity.aspx)  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [isnan, _isnan, _isnanf](../VS_visualcpp/isnan--_isnan--_isnanf.md)   
 [_fpclass, _fpclassf](../VS_visualcpp/_fpclass--_fpclassf.md)