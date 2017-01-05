---
title: "_set_SSE2_enable | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_SSE2_enable"
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
  - "_set_SSE2_enable"
  - "set_SSE2_enable"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_set_SSE2_enable function"
  - "Streaming SIMD Extensions 2 instructions"
  - "set_SSE2_enable function"
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
caps.latest.revision: 19
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
# _set_SSE2_enable
Enables or disables the use of [Streaming SIMD Extensions 2](http://msdn.microsoft.com/en-us/f98440eb-73a9-4f96-b203-ac41bb6701ea) (SSE2) instructions in CRT math routines. (This function is not available on x64 architectures because SSE2 is enabled by default.)  
  
## Syntax  
  
```  
int _set_SSE2_enable(  
   int flag  
);  
```  
  
#### Parameters  
 `flag`  
 1 to enable the SSE2 implementation; 0 to disable the SSE2 implementation. By default, SSE2 implementation is enabled on processors that support it.  
  
## Return Value  
 Nonzero if SSE2 implementation is enabled; zero if SSE2 implementation is disabled.  
  
## Remarks  
 The following functions have SSE2 implementations that can be enabled by using `_set_SSE2_enable`:  
  
-   [atan](../../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)  
  
-   [ceil](../../c-runtime-library/reference/ceil-ceilf-ceill.md)  
  
-   [exp](../../c-runtime-library/reference/exp-expf.md)  
  
-   [floor](../../c-runtime-library/reference/floor-floorf-floorl.md)  
  
-   [log](../../c-runtime-library/reference/log-logf-log10-log10f.md)  
  
-   [log10](../../c-runtime-library/reference/log-logf-log10-log10f.md)  
  
-   [modf](../../c-runtime-library/reference/modf-modff-modfl.md)  
  
-   [pow](../../c-runtime-library/reference/pow-powf-powl.md)  
  
 The SSE2 implementations of these functions might give slightly different answers than the default implementations, because SSE2 intermediate values are 64-bit floating-point quantities but the default implementation intermediate values are 80-bit floating-point quantities.  
  
> [!NOTE]
>  If you use the [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md) compiler option to compile the project, it may appear that `_set_SSE2_enable` has no effect. The `/Oi` compiler option gives the compiler the authority to use intrinsics to replace CRT calls; this behavior overrides the effect of `_set_SSE2_enable`. If you want to guarantee that `/Oi` does not override `_set_SSE2_enable`, use `/Oi-` to compile your project. This might also be good practice when you use other compiler switches that imply `/Oi`.  
  
 The SSE2 implementation is only used if all exceptions are masked. Use [_control87, _controlfp](../../c-runtime-library/reference/control87-controlfp-control87-2.md) to mask exceptions.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_SSE2_enable`|\<math.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_set_SSE2_enable.c  
// processor: x86  
#include <math.h>  
#include <stdio.h>  
  
int main()  
{  
   int i = _set_SSE2_enable(1);  
  
   if (i)  
      printf("SSE2 enabled.\n");  
   else  
      printf("SSE2 not enabled; processor does not support SSE2.\n");  
}  
```  
  
 **Output**  
  
 `SSE2 enabled.`  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [CRT Library Features](../../c-runtime-library/crt-library-features.md)