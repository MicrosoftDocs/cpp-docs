---
title: "_set_SSE2_enable"
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
  - _set_SSE2_enable
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
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
caps.latest.revision: 19
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
# _set_SSE2_enable
Enables or disables the use of [Streaming SIMD Extensions 2](assetId:///f98440eb-73a9-4f96-b203-ac41bb6701ea) (SSE2) instructions in CRT math routines. (This function is not available on x64 architectures because SSE2 is enabled by default.)  
  
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
  
-   [atan](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)  
  
-   [ceil](../VS_visualcpp/ceil--ceilf--ceill.md)  
  
-   [exp](../VS_visualcpp/exp--expf.md)  
  
-   [floor](../VS_visualcpp/floor--floorf--floorl.md)  
  
-   [log](../VS_visualcpp/log--logf--log10--log10f.md)  
  
-   [log10](../VS_visualcpp/log--logf--log10--log10f.md)  
  
-   [modf](../VS_visualcpp/modf--modff--modfl.md)  
  
-   [pow](../VS_visualcpp/pow--powf--powl.md)  
  
 The SSE2 implementations of these functions might give slightly different answers than the default implementations, because SSE2 intermediate values are 64-bit floating-point quantities but the default implementation intermediate values are 80-bit floating-point quantities.  
  
> [!NOTE]
>  If you use the [/Oi (Generate Intrinsic Functions)](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md) compiler option to compile the project, it may appear that `_set_SSE2_enable` has no effect. The `/Oi` compiler option gives the compiler the authority to use intrinsics to replace CRT calls; this behavior overrides the effect of `_set_SSE2_enable`. If you want to guarantee that `/Oi` does not override `_set_SSE2_enable`, use `/Oi-` to compile your project. This might also be good practice when you use other compiler switches that imply `/Oi`.  
  
 The SSE2 implementation is only used if all exceptions are masked. Use [_control87, _controlfp](../VS_visualcpp/_control87--_controlfp--__control87_2.md) to mask exceptions.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_SSE2_enable`|<math.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
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
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md)