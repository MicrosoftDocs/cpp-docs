---
description: "Learn more about: Writing functions with inline assembly"
title: "Writing functions with inline assembly"
ms.date: 02/11/2022
helpviewer_keywords: ["functions [C++], inline assembly", "inline assembly [C++], writing functions", "assembler [C++], writing functions", "__asm keyword [C++], in functions"]
ms.assetid: b5df8a04-fdc7-4622-8c9e-e4b618927497
---
# Writing functions with inline assembly

**Microsoft Specific**

> [!NOTE]
> Inline assembly is only available for x86 targets. For similar functionality in x64 or ARM64 code, use [compiler intrinsics](../../intrinsics/compiler-intrinsics.md).

If you write a function with inline assembly code, it's easy to pass arguments to the function and return a value from it. The following examples compare a function first written for a separate assembler and then rewritten for the inline assembler. The function, called `power2`, receives two parameters, multiplying the first parameter by 2 to the power of the second parameter. As a separate assembler file, the function might look like this:

```asm
; power2.asm 
; x86 code for C interop
; Command line: ml /c /Cx /W3 /WX power2.asm 
        .686P
        .XMM
        .MODEL  flat

PUBLIC  _power2
; int power2(int num, int power);
; computes num x 2^power
_TEXT   SEGMENT
_power2 PROC
        push    ebp             ; save EBP
        mov     ebp, esp        ; Move ESP into EBP so we can refer
                                ;   to arguments on the stack
        mov     eax, [ebp+8]    ; load first argument
        mov     ecx, [ebp+12]   ; load second argument
        shl     eax, cl         ; compute result in EAX
        pop     ebp             ; restore EBP
        ret
_power2 ENDP
_TEXT   ENDS
END
```

Since it's written as a separate assembler file, the function requires separate assembly and link steps. C and C++ function arguments are usually passed on the stack, so this version of the `power2` function accesses its arguments by their positions on the stack. (The **`MODEL`** directive, available in MASM and some other assemblers, also allows you to access stack arguments and local stack variables by name.)

## Example

This program writes the `power2` function with inline assembly code:

```cpp
// Power2_inline_asm.c
// compile with: /EHsc
// processor: x86

#include <stdio.h>

int power2( int num, int power );

int main( void )
{
    printf_s( "3 times 2 to the power of 5 is %d\n", \
              power2( 3, 5) );
}
int power2( int num, int power )
{
   __asm
   {
      mov eax, num    ; Get first argument
      mov ecx, power  ; Get second argument
      shl eax, cl     ; EAX = EAX * ( 2 to the power of CL )
   }
   // Return with result in EAX
}
```

The inline version of the `power2` function refers to its arguments by name and appears in the same source file as the rest of the program. This version also requires fewer assembly instructions.

Because the inline version of `power2` doesn't execute a C **`return`** statement, it causes a harmless warning if you compile at warning level 2 or higher. The function does return a value, but the compiler can't tell it does in the absence of a **`return`** statement. You can use [`#pragma warning`](../../preprocessor/warning.md) to disable the generation of this warning.

**END Microsoft Specific**

## See also

[Using C or C++ in `__asm` Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)
