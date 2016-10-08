---
title: "intrinsic"
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
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
caps.latest.revision: 7
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
# intrinsic
Specifies that calls to functions specified in the pragma's argument list are intrinsic.  
  
## Syntax  
  
```  
  
#pragma intrinsic( function1 [, function2, ...] )  
```  
  
## Remarks  
 The **intrinsic** pragma tells the compiler that a function has known behavior.  The compiler may call the function and not replace the function call with inline instructions, if it will result in better performance.  
  
 The library functions with intrinsic forms are listed below. Once an **intrinsic** pragma is seen, it takes effect at the first function definition containing a specified intrinsic function. The effect continues to the end of the source file or to the appearance of a **function** pragma specifying the same intrinsic function. The **intrinsic** pragma can be used only outside of a function definition — at the global level.  
  
 The following functions have intrinsic forms and the intrinsic forms are used when you specify [/Oi](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md):  
  
|||||  
|-|-|-|-|  
|[_disable](../VS_visualcpp/_disable.md)|[_outp](../VS_visualcpp/_outp--_outpw--_outpd.md)|[fabs](../VS_visualcpp/fabs--fabsf--fabsl.md)|[strcmp](../VS_visualcpp/strcmp--wcscmp--_mbscmp.md)|  
|[_enable](../VS_visualcpp/_enable.md)|[_outpw](../VS_visualcpp/_outp--_outpw--_outpd.md)|[labs](../Topic/labs,%20llabs.md)|[strcpy](../VS_visualcpp/strcpy--wcscpy--_mbscpy.md)|  
|[_inp](../VS_visualcpp/_inp--_inpw--_inpd.md)|[_rotl](../VS_visualcpp/_rotl--_rotl64--_rotr--_rotr64.md)|[memcmp](../VS_visualcpp/memcmp--wmemcmp.md)|[strlen](../VS_visualcpp/strlen--wcslen--_mbslen--_mbslen_l--_mbstrlen--_mbstrlen_l.md)|  
|[_inpw](../VS_visualcpp/_inp--_inpw--_inpd.md)|[_rotr](../VS_visualcpp/_rotl--_rotl64--_rotr--_rotr64.md)|[memcpy](../VS_visualcpp/memcpy--wmemcpy.md)||  
|[_lrotl](../VS_visualcpp/_lrotl--_lrotr.md)|[_strset](../VS_visualcpp/_strset--_strset_l--_wcsset--_wcsset_l--_mbsset--_mbsset_l.md)|[memset](../VS_visualcpp/memset--wmemset.md)||  
|[_lrotr](../VS_visualcpp/_lrotl--_lrotr.md)|[abs](../VS_visualcpp/abs--labs--llabs--_abs64.md)|[strcat](../VS_visualcpp/strcat--wcscat--_mbscat.md)||  
  
 Programs that use intrinsic functions are faster because they do not have the overhead of function calls but may be larger due to the additional code generated.  
  
 **x86 Specific**  
  
 The _disable and _enable intrinsics generate kernel-mode instructions to disable/enable interrupts and could be useful in kernel-mode drivers.  
  
## Example  
 Compile the following code from the command line with "cl -c -FAs sample.c" and look at sample.asm to see that they turn into x86 instructions CLI and STI:  
  
```  
// pragma_directive_intrinsic.cpp  
// processor: x86  
#include <dos.h>   // definitions for _disable, _enable  
#pragma intrinsic(_disable)  
#pragma intrinsic(_enable)  
void f1(void) {  
   _disable();  
   // do some work here that should not be interrupted  
   _enable();  
}  
int main() {  
}  
```  
  
 **End x86 Specific**  
  
 The floating-point functions listed below do not have true intrinsic forms. Instead they have versions that pass arguments directly to the floating-point chip rather than pushing them onto the program stack:  
  
|||||  
|-|-|-|-|  
|[acos](../VS_visualcpp/acos--acosf--acosl.md)|[cosh](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)|[pow](../VS_visualcpp/pow--powf--powl.md)|[tanh](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)|  
|[asin](../VS_visualcpp/asin--asinf--asinl.md)|[fmod](../VS_visualcpp/fmod--fmodf.md)|[sinh](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)||  
  
 The floating-point functions listed below have true intrinsic forms when you specify [/Oi](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md), [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md), and [/fp:fast](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) (or any option that includes /Og: [/Ox](../VS_visualcpp/-Ox--Full-Optimization-.md), [/O1](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md), and /O2):  
  
|||||  
|-|-|-|-|  
|[atan](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)|[exp](../VS_visualcpp/exp--expf.md)|[log10](../VS_visualcpp/log--logf--log10--log10f.md)|[sqrt](../VS_visualcpp/sqrt--sqrtf--sqrtl.md)|  
|[atan2](../VS_visualcpp/atan--atanf--atanl--atan2--atan2f--atan2l.md)|[log](../VS_visualcpp/log--logf--log10--log10f.md)|[sin](../VS_visualcpp/sin--sinf--sinl--sinh--sinhf--sinhl.md)|[tan](../VS_visualcpp/tan--tanf--tanl--tanh--tanhf--tanhl.md)|  
|[cos](../VS_visualcpp/cos--cosf--cosl--cosh--coshf--coshl.md)||||  
  
 You can use [/fp:strict](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md) or [/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md) to override generation of true intrinsic floating-point options. In this case, the functions are generated as library routines that pass arguments directly to the floating-point chip instead of pushing them onto the program stack.  
  
 See [# pragma function](../VS_visualcpp/function--C-C---.md) for information and an example on how to enable/disable intrinsics for a block of source text.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../VS_visualcpp/Pragma-Directives-and-the-__Pragma-Keyword.md)   
 [Compiler Intrinsics](../VS_visualcpp/Compiler-Intrinsics.md)