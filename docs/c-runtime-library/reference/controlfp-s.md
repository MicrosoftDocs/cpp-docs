---
description: "Learn more about: _controlfp_s"
title: "_controlfp_s"
ms.date: 03/27/2025
api_name: ["_controlfp_s", "_o__controlfp_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["controlfp_s", "_controlfp_s"]
helpviewer_keywords: ["floating-point numbers, control word", "controlfp_s function", "floating-point functions, setting control word", "EM_AMBIGUOUS", "_controlfp_s function"]
---
# `_controlfp_s`

Gets and sets the floating-point control word. This version of [`_control87`, `_controlfp`, `__control87_2`](control87-controlfp-control87-2.md) has security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t _controlfp_s(
    unsigned int *currentControl,
    unsigned int newControl,
    unsigned int mask
);
```

### Parameters

*`currentControl`*\
The current control-word bit value.

*`newControl`*\
New control-word bit values.

*`mask`*\
Mask for new control-word bits to set.

## Return value

Zero if successful, or an `errno` value error code.

## Remarks

The **`_controlfp_s`** function is a platform-independent and more secure version of **`_control87`**, which gets the floating-point control word into the address that's stored in *`currentControl`* and sets it by using *`newControl`*. The bits in the values indicate the floating-point control state. The floating-point control state enables the program to change the precision, rounding, and infinity modes in the floating-point math package, depending on the platform. You can also use **`_controlfp_s`** to mask or unmask floating-point exceptions.

If the value for *`mask`* is equal to 0, **`_controlfp_s`** gets the floating-point control word and stores the retrieved value in *`currentControl`*.

If *`mask`* is nonzero, a new value for the control word is set: For any bit that is set (that is, equal to 1) in *`mask`*, the corresponding bit in *`new`* is used to update the control word. In other words, `fpcntrl = ((fpcntrl & ~mask) | (newControl & mask))` where *`fpcntrl`* is the floating-point control word. In this scenario, *`currentControl`* is set to the value after the change completes; it isn't the old control-word bit value.

> [!NOTE]
> By default, the run-time libraries mask all floating-point exceptions.

**`_controlfp_s`** is nearly identical to the **`_control87`** function on Intel (x86), x64, and ARM platforms. If you're targeting x86, x64, or ARM platforms, you can use **`_control87`** or **`_controlfp_s`**.

The difference between **`_control87`** and **`_controlfp_s`** is in how they treat denormal values. For Intel (x86), x64, and ARM platforms, **`_control87`** can set and clear the `DENORMAL OPERAND` exception mask. **`_controlfp_s`** doesn't modify the `DENORMAL OPERAND` exception mask. This example demonstrates the difference:

```C
_control87( _EM_INVALID, _MCW_EM );
// DENORMAL is unmasked by this call.
unsigned int current_word = 0;
_controlfp_s( &current_word, _EM_INVALID, _MCW_EM );
// DENORMAL exception mask remains unchanged.
```

The possible values for the mask constant (*`mask`*) and new control values (*`newControl`*) are shown in the following Hexadecimal Values table. Use the portable constants listed below (`_MCW_EM`, `_EM_INVALID`, and so on) as arguments to these functions, rather than supplying the hexadecimal values explicitly.

Intel (x86)-derived platforms support the `DENORMAL` input and output values in hardware. The x86 behavior is to preserve `DENORMAL` values. The ARM platform and the x64 platforms that have SSE2 support enable `DENORMAL` operands and results to be flushed, or forced to zero. The **`_controlfp_s`**, **`_controlfp`**, and **`_control87`** functions provide a mask to change this behavior. The following example demonstrates the use of this mask:

```C
unsigned int current_word = 0;
_controlfp_s(&current_word, _DN_SAVE, _MCW_DN);
// Denormal values preserved on ARM platforms and on x64 processors with
// SSE2 support. NOP on x86 platforms.
_controlfp_s(&current_word, _DN_FLUSH, _MCW_DN);
// Denormal values flushed to zero by hardware on ARM platforms
// and x64 processors with SSE2 support. Ignored on other x86 platforms.
```

This function is ignored when you use [`/clr` (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) to compile because the common language runtime (CLR) only supports the default floating-point precision.

On x64, only the SSE2 control word stored in the MXCSR register is affected. Changing the infinity mode or the floating-point precision isn't supported. If the precision control mask is used on the x64 platform, the function raises an assertion and the invalid parameter handler is invoked as described in [Parameter validation](../parameter-validation.md).

On x86, **`_controlfp_s`** affects the control words for both the x87 and the SSE2, if present. It's possible for the two control words to be inconsistent with each other (because of a previous call to [`__control87_2`](control87-controlfp-control87-2.md), for example); if there's an inconsistency between the two control words, **`_controlfp_s`** sets the `EM_AMBIGUOUS` flag in *`currentControl`*. It's a warning that the returned control word might not represent the state of both floating-point control words accurately.

If the mask isn't set correctly, this function generates an invalid parameter exception, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, this function returns `EINVAL` and sets `errno` to `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Arm platforms

- Changing the infinity mode or the floating-point precision isn't supported. If the precision control mask is used on the x64 platform, the function raises an assertion and the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md).
- On ARM32 (discontinued), Windows doesn't support FP exceptions.
- On ARM64, unmasking the whole `_MCW_EM` or any bits from it (`_EM_INEXACT`, `_EM_UNDERFLOW`, `_EM_OVERFLOW`, `_EM_ZERODIVIDE`, and `_EM_INVALID`) correctly change the FPCR register. Floating point exceptions raised by standard math functions, like Invalid operation from `std::acos`, are exempt from this behavior and can be ignored or raised properly depending on the FPCR register. For more information, see [Overview of ARM32 ABI Conventions](../../build/overview-of-arm-abi-conventions.md#floating-point-exceptions).
- On ARM64EC, Windows catches processor floating-point exceptions and disables them in the FPCR register. This ensures consistent behavior across different processor variants.

### Mask constants and values

For the `_MCW_EM` mask, clearing it sets the exception, which allows the hardware exception; setting it hides the exception. If a `_EM_UNDERFLOW` or `_EM_OVERFLOW` occurs, no hardware exception is thrown until the next floating-point instruction is executed. To generate a hardware exception immediately after `_EM_UNDERFLOW` or `_EM_OVERFLOW`, call the `FWAIT MASM` instruction.

| Mask | Hex value | Constant | Hex value |
|---|---|---|---|
| `_MCW_DN` (Denormal control) | 0x03000000 | `_DN_SAVE`<br /><br /> `_DN_FLUSH` | 0x00000000<br /><br /> 0x01000000 |
| `_MCW_EM` (Interrupt exception mask) | 0x0008001F | `_EM_INVALID`<br /><br /> `_EM_DENORMAL`<br /><br /> `_EM_ZERODIVIDE`<br /><br /> `_EM_OVERFLOW`<br /><br /> `_EM_UNDERFLOW`<br /><br /> `_EM_INEXACT` | 0x00000010<br /><br /> 0x00080000<br /><br /> 0x00000008<br /><br /> 0x00000004<br /><br /> 0x00000002<br /><br /> 0x00000001 |
| `_MCW_IC` (Infinity control)<br /><br /> (Not supported on ARM or x64 platforms.) | 0x00040000 | `_IC_AFFINE`<br /><br /> `_IC_PROJECTIVE` | 0x00040000<br /><br /> 0x00000000 |
| `_MCW_RC` (Rounding control) | 0x00000300 | `_RC_CHOP`<br /><br /> `_RC_UP`<br /><br /> `_RC_DOWN`<br /><br /> `_RC_NEAR` | 0x00000300<br /><br /> 0x00000200<br /><br /> 0x00000100<br /><br /> 0x00000000 |
| `_MCW_PC` (Precision control)<br /><br /> (Not supported on ARM or x64 platforms.) | 0x00030000 | `_PC_24` (24 bits)<br /><br /> `_PC_53` (53 bits)<br /><br /> `_PC_64` (64 bits) | 0x00020000<br /><br /> 0x00010000<br /><br /> 0x00000000 |

## Requirements

| Routine | Required header |
|---|---|
| **`_controlfp_s`** | `<float.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_contrlfp_s.c
// processor: x86
// This program uses _controlfp_s to output the FP control
// word, set the precision to 24 bits, and reset the status to
// the default.

#include <stdio.h>
#include <float.h>
#pragma fenv_access (on)

int main( void )
{
    double a = 0.1;
    unsigned int control_word;
    int err;

    // Show original FP control word and do calculation.
    err = _controlfp_s(&control_word, 0, 0);
    if ( err ) /* handle error here */;

    printf( "Original: 0x%.4x\n", control_word );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Set precision to 24 bits and recalculate.
    err = _controlfp_s(&control_word, _PC_24, MCW_PC);
    if ( err ) /* handle error here */;

    printf( "24-bit:   0x%.4x\n", control_word );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );

    // Restore default precision-control bits and recalculate.
    err = _controlfp_s(&control_word, _CW_DEFAULT, MCW_PC);
    if ( err ) /* handle error here */;

    printf( "Default:  0x%.4x\n", control_word );
    printf( "%1.1f * %1.1f = %.15e\n", a, a, a * a );
}
```

```Output
Original: 0x9001f
0.1 * 0.1 = 1.000000000000000e-002
24-bit:   0xa001f
0.1 * 0.1 = 9.999999776482582e-003
Default:  0x9001f
0.1 * 0.1 = 1.000000000000000e-002
```

## See also

[Math and floating-point support](../floating-point-support.md)\
[`_clear87`, `_clearfp`](clear87-clearfp.md)\
[`_status87`, `_statusfp`, `_statusfp2`](status87-statusfp-statusfp2.md)\
[`_control87`, `_controlfp`, `__control87_2`](control87-controlfp-control87-2.md)
