---
description: "Learn more about: _control87, _controlfp, __control87_2"
title: "_control87, _controlfp, __control87_2"
ms.date: "08/29/2019"
api_name: ["_control87", "_controlfp", "__control87_2"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_control87", "__control87_2", "control87", "_controlfp", "controlfp", "control87_2", "_control87_2"]
helpviewer_keywords: ["floating-point numbers, control word", "_control87 function", "control87 function", "controlfp function", "_controlfp function", "__control87_2 function", "floating-point functions, setting control word", "floating-point functions", "EM_AMBIGUOUS", "control87_2 function"]
ms.assetid: 0d09729d-d9a0-43d6-864c-43ff25e7e0c5
---
# _control87, _controlfp, __control87_2

Gets and sets the floating-point control word. A more secure version of **_controlfp** is available; see [_controlfp_s](controlfp-s.md).

## Syntax

```C
unsigned int _control87(
   unsigned int new,
   unsigned int mask
);
unsigned int _controlfp(
   unsigned int new,
   unsigned int mask
);
int __control87_2(
   unsigned int new,
   unsigned int mask,
   unsigned int* x86_cw,
   unsigned int* sse2_cw
);
```

### Parameters

*new*\
New control-word bit values.

*mask*\
Mask for new control-word bits to set.

*x86_cw*\
Filled in with the control word for the x87 floating-point unit. Pass in 0 (**NULL**) to set only the SSE2 control word.

*sse2_cw*\
Control word for the SSE floating-point unit. Pass in 0 (**NULL**) to set only the x87 control word.

## Return value

For **_control87** and **_controlfp**, the bits in the value returned indicate the floating-point control state. For a complete definition of the bits that are returned by **_control87**, see FLOAT.H.

For **__control87_2**, the return value is 1, which indicates success.

## Remarks

The **_control87** function gets and sets the floating-point control word. The floating-point control word enables the program to change the precision, rounding, and infinity modes, depending on the platform. You can also use **_control87** to mask or unmask floating-point exceptions. If the value for *mask* is equal to 0, **_control87** gets the floating-point control word. If *mask* is nonzero, a new value for the control word is set: For any bit that is on (that is, equal to 1) in *mask*, the corresponding bit in *new* is used to update the control word. In other words, **fpcntrl** = ((**fpcntrl** & ~*mask*) &#124; (*new* & *mask*)) where **fpcntrl** is the floating-point control word.

> [!NOTE]
> By default, the run-time libraries mask all floating-point exceptions.

**_controlfp** is a platform-independent, portable version of **_control87** that's nearly identical to the **_control87** function. If your code targets more than one platform, use **_controlfp** or **_controlfp_s**. The difference between **_control87** and **_controlfp** is in how they treat DENORMAL values. For x86, x64, ARM, and ARM64 platforms, **_control87** can set and clear the DENORMAL OPERAND exception mask. **_controlfp** doesn't modify the DENORMAL OPERAND exception mask. This example demonstrates the difference:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call
_controlfp( _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged
```

The possible values for the mask constant (*mask*) and new control values (*new*) are shown in the Control word masks and values table. Use the portable constants listed below (**_MCW_EM**, **_EM_INVALID**, and so forth) as arguments to these functions, rather than supplying the hexadecimal values explicitly.

Intel x86-derived platforms support the DENORMAL input and output values in hardware. The x86 behavior is to preserve DENORMAL values. The ARM and ARM64 platforms and the x64 platforms that have SSE2 support enable DENORMAL operands and results to be flushed, or forced to zero. The **_controlfp** and **_control87** functions provide a mask to change this behavior. The following example demonstrates the use of this mask.

```C
_controlfp(_DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp(_DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

On ARM and ARM64 platforms, the **_control87** and **_controlfp** functions apply to the FPSCR register. Only the SSE2 control word that's stored in the MXCSR register is affected on x64 platforms. On x86 platforms, **_control87** and **_controlfp** affect the control words for both the x87 and the SSE2, if present.

The function **__control87_2** enables both the x87 and SSE2 floating-point units to be controlled together or separately. To affect both units, pass in the addresses of two integers to **x86_cw** and **sse2_cw**. If you only want to affect one unit, pass in an address for that parameter, but pass in 0 (**NULL**) for the other. If 0 is passed for one of these parameters, the function has no effect on that floating-point unit. It's useful when part of your code uses the x87 floating-point unit, and another part uses the SSE2 floating-point unit.

If you use **__control87_2** to set different values for the floating-point control words, then **_control87** or **_controlfp** might be unable to return a single control word to represent the state of both floating-point units. In such a case, these functions set the **EM_AMBIGUOUS** flag in the returned integer value to indicate an inconsistency between the two control words. The **EM_AMBIGUOUS** flag is a warning that the returned control word might not represent the state of both floating-point control words accurately.

On the ARM, ARM64, and x64 platforms, changing the infinity mode or the floating-point precision isn't supported. If the precision control mask is used on the x64 platform, the function raises an assertion, and the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

> [!NOTE]
> **__control87_2** is not supported on the ARM, ARM64, or x64 platforms. If you use **__control87_2** and compile your program for the ARM, ARM64, or x64 platforms, the compiler generates an error.

These functions are ignored when you use [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) to compile. The common language runtime (CLR) only supports the default floating-point precision.

### Control word masks and values

For the **_MCW_EM** mask, clearing the mask sets the exception, which allows the hardware exception; setting the mask hides the exception. If a **_EM_UNDERFLOW** or **_EM_OVERFLOW** occurs, no hardware exception is thrown until the next floating-point instruction is executed. To generate a hardware exception immediately after **_EM_UNDERFLOW** or **_EM_OVERFLOW**, call the **FWAIT** MASM instruction.

|Mask|Hex value|Constant|Hex value|
|----------|---------------|--------------|---------------|
|**_MCW_DN** (Denormal control)|0x03000000|**_DN_SAVE**<br /><br /> **_DN_FLUSH**|0x00000000<br /><br /> 0x01000000|
|**_MCW_EM** (Interrupt exception mask)|0x0008001F|**_EM_INVALID**<br /><br /> **_EM_DENORMAL**<br /><br /> **_EM_ZERODIVIDE**<br /><br /> **_EM_OVERFLOW**<br /><br /> **_EM_UNDERFLOW**<br /><br /> **_EM_INEXACT**|0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001|
|**_MCW_IC** (Infinity control)<br /><br /> (Not supported on ARM or x64 platforms.)|0x00040000|**_IC_AFFINE**<br /><br /> **_IC_PROJECTIVE**|0x00040000<br /><br /> 0x00000000|
|**_MCW_RC** (Rounding control)|0x00000300|**_RC_CHOP**<br /><br /> **_RC_UP**<br /><br /> **_RC_DOWN**<br /><br /> **_RC_NEAR**|0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000|
|**_MCW_PC** (Precision control)<br /><br /> (Not supported on ARM or x64 platforms.)|0x00030000|**_PC_24** (24 bits)<br /><br /> **_PC_53** (53 bits)<br /><br /> **_PC_64** (64 bits)|0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_control87**, **_controlfp**, **_control87_2**|\<float.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_cntrl87.c
// processor: x86
// compile by using: cl /W4 /arch:IA32 crt_cntrl87.c
// This program uses __control87_2 to output the x87 control
// word, set the precision to 24 bits, and reset the status to
// the default.

#include <stdio.h>
#include <float.h>
#pragma fenv_access (on)

int main( void )
{
    double a = 0.1;
    unsigned int control_word_x87 = 0;
    int result;

    // Show original x87 control word and do calculation.
    result = __control87_2(0, 0, &control_word_x87, 0 );
    printf( "Original: 0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Set precision to 24 bits and recalculate.
    result = __control87_2(_PC_24, MCW_PC, &control_word_x87, 0 );
    printf( "24-bit:   0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Restore default precision-control bits and recalculate.
    result = __control87_2( _CW_DEFAULT, MCW_PC, &control_word_x87, 0 );
    printf( "Default:  0x%.8x\n", control_word_x87 );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );
}
```

```Output
Original: 0x0009001f
0.1 * 0.1 = 1.000000000000000e-02
24-bit:   0x000a001f
0.1 * 0.1 = 9.999999776482582e-03
Default:  0x0009001f
0.1 * 0.1 = 1.000000000000000e-02
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)\
[_clear87, _clearfp](clear87-clearfp.md)\
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)\
[_controlfp_s](controlfp-s.md)
