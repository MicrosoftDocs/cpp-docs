---
title: "_fpclass, _fpclassf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fpclass"
  - "_fpclassf"
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
  - "api-ms-win-crt-math-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "fpclass"
  - "_fpclass"
  - "_fpclassf"
  - "math/_fpclass"
  - "float/_fpclass"
  - "math/_fpclassf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "fpclass function"
  - "floating-point numbers, IEEE representation"
  - "_fpclass function"
  - "_fpclassf function"
ms.assetid: 2774872d-3543-446f-bc72-db85f8b95a6b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# _fpclass, _fpclassf
Returns a value indicating the floating-point classification of the argument.  
  
## Syntax  
  
```  
int _fpclass(   
   double x   
);  
  
int _fpclassf(   
   float x   
); /* x64 only */  
```  
  
#### Parameters  
 `x`  
 The floating-point value to test.  
  
## Return Value  
 The `_fpclass` and `_fpclassf` functions return an integer value that indicates the floating-point classification of the argument `x`. The classification may have one of the following values, defined in \<float.h>.  
  
|Value|Description|  
|-----------|-----------------|  
|`_FPCLASS_SNAN`|Signaling NaN|  
|`_FPCLASS_QNAN`|Quiet NaN|  
|`_FPCLASS_NINF`|Negative infinity ( –INF)|  
|`_FPCLASS_NN`|Negative normalized non-zero|  
|`_FPCLASS_ND`|Negative denormalized|  
|`_FPCLASS_NZ`|Negative zero ( – 0)|  
|`_FPCLASS_PZ`|Positive 0 (+0)|  
|`_FPCLASS_PD`|Positive denormalized|  
|`_FPCLASS_PN`|Positive normalized non-zero|  
|`_FPCLASS_PINF`|Positive infinity (+INF)|  
  
## Remarks  
 The `_fpclass` and `_fpclassf` functions are Microsoft specific. They are similar to [fpclassify](../../c-runtime-library/reference/fpclassify.md), but return more detailed information about the argument. The `_fpclassf` function is only available when compiled for the x64 platform.  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`_fpclass`|\<float.h>|  
  
 For more compatibility and conformance information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [isnan, _isnan, _isnanf](../../c-runtime-library/reference/isnan-isnan-isnanf.md)   
 [fpclassify](../../c-runtime-library/reference/fpclassify.md)