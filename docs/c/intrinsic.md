---
title: "intrinsic"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "intrinsic_CPP"
  - "vc-pragma.intrinsic"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "intrinsic pragma"
  - "pragmas, intrinsic"
ms.assetid: 25c86ac7-ef40-47b7-a2c0-fada9c5dc3c5
caps.latest.revision: 7
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
# intrinsic
Specifies that calls to functions specified in the pragma's argument list are intrinsic.  
  
## Syntax  
  
```  
  
#pragma intrinsic( function1 [, function2, ...] )  
```  
  
## Remarks  
 The **intrinsic** pragma tells the compiler that a function has known behavior.  The compiler may call the function and not replace the function call with inline instructions, if it will result in better performance.  
  
 The library functions with intrinsic forms are listed below. Once an **intrinsic** pragma is seen, it takes effect at the first function definition containing a specified intrinsic function. The effect continues to the end of the source file or to the appearance of a **function** pragma specifying the same intrinsic function. The **intrinsic** pragma can be used only outside of a function definition — at the global level.  
  
 The following functions have intrinsic forms and the intrinsic forms are used when you specify [/Oi](../buildref/-oi--generate-intrinsic-functions-.md):  
  
|||||  
|-|-|-|-|  
|[_disable](../intrinsics/_disable.md)|[_outp](../crt/_outp--_outpw--_outpd.md)|[fabs](../crt/fabs--fabsf--fabsl.md)|[strcmp](../crt/strcmp--wcscmp--_mbscmp.md)|  
|[_enable](../intrinsics/_enable.md)|[_outpw](../crt/_outp--_outpw--_outpd.md)|[labs](../notintoc/labs--llabs.md)|[strcpy](../crt/strcpy--wcscpy--_mbscpy.md)|  
|[_inp](../crt/_inp--_inpw--_inpd.md)|[_rotl](../crt/_rotl--_rotl64--_rotr--_rotr64.md)|[memcmp](../crt/memcmp--wmemcmp.md)|[strlen](../crt/strlen--wcslen--_mbslen--_mbslen_l--_mbstrlen--_mbstrlen_l.md)|  
|[_inpw](../crt/_inp--_inpw--_inpd.md)|[_rotr](../crt/_rotl--_rotl64--_rotr--_rotr64.md)|[memcpy](../crt/memcpy--wmemcpy.md)||  
|[_lrotl](../crt/_lrotl--_lrotr.md)|[_strset](../crt/_strset--_strset_l--_wcsset--_wcsset_l--_mbsset--_mbsset_l.md)|[memset](../crt/memset--wmemset.md)||  
|[_lrotr](../crt/_lrotl--_lrotr.md)|[abs](../crt/abs--labs--llabs--_abs64.md)|[strcat](../crt/strcat--wcscat--_mbscat.md)||  
  
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
|[acos](../crt/acos--acosf--acosl.md)|[cosh](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)|[pow](../crt/pow--powf--powl.md)|[tanh](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)|  
|[asin](../crt/asin--asinf--asinl.md)|[fmod](../crt/fmod--fmodf.md)|[sinh](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)||  
  
 The floating-point functions listed below have true intrinsic forms when you specify [/Oi](../buildref/-oi--generate-intrinsic-functions-.md), [/Og](../buildref/-og--global-optimizations-.md), and [/fp:fast](../buildref/-fp--specify-floating-point-behavior-.md) (or any option that includes /Og: [/Ox](../buildref/-ox--full-optimization-.md), [/O1](../buildref/-o1---o2--minimize-size--maximize-speed-.md), and /O2):  
  
|||||  
|-|-|-|-|  
|[atan](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)|[exp](../crt/exp--expf.md)|[log10](../crt/log--logf--log10--log10f.md)|[sqrt](../crt/sqrt--sqrtf--sqrtl.md)|  
|[atan2](../crt/atan--atanf--atanl--atan2--atan2f--atan2l.md)|[log](../crt/log--logf--log10--log10f.md)|[sin](../crt/sin--sinf--sinl--sinh--sinhf--sinhl.md)|[tan](../crt/tan--tanf--tanl--tanh--tanhf--tanhl.md)|  
|[cos](../crt/cos--cosf--cosl--cosh--coshf--coshl.md)||||  
  
 You can use [/fp:strict](../buildref/-fp--specify-floating-point-behavior-.md) or [/Za](../buildref/-za---ze--disable-language-extensions-.md) to override generation of true intrinsic floating-point options. In this case, the functions are generated as library routines that pass arguments directly to the floating-point chip instead of pushing them onto the program stack.  
  
 See [# pragma function](../c/function--c-c---.md) for information and an example on how to enable/disable intrinsics for a block of source text.  
  
## See Also  
 [Pragma Directives and the __Pragma Keyword](../c/pragma-directives-and-the-__pragma-keyword.md)   
 [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)