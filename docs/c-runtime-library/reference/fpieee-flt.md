---
description: "Learn more about: _fpieee_flt"
title: "_fpieee_flt"
ms.date: "04/05/2018"
api_name: ["_fpieee_flt"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fpieee_flt", "_fpieee_flt"]
helpviewer_keywords: ["_fpieee_flt function", "exception handling, floating-point", "floating-point exception handling", "fpieee_flt function"]
ms.assetid: 2bc4801e-0eed-4e73-b518-215da8cc9740
---
# _fpieee_flt

Invokes a user-defined trap handler for IEEE floating-point exceptions.

## Syntax

```C
int _fpieee_flt(
   unsigned long excCode,
   struct _EXCEPTION_POINTERS *excInfo,
   int handler(_FPIEEE_RECORD *)
);
```

### Parameters

*excCode*<br/>
Exception code.

*excInfo*<br/>
Pointer to the Windows NT exception information structure.

*handler*<br/>
Pointer to the user's IEEE trap-handler routine.

## Return Value

The return value of **_fpieee_flt** is the value returned by *handler*. As such, the IEEE filter routine might be used in the except clause of a structured exception-handling (SEH) mechanism.

## Remarks

The **_fpieee_flt** function invokes a user-defined trap handler for IEEE floating-point exceptions and provides it with all relevant information. This routine serves as an exception filter in the SEH mechanism, which invokes your own IEEE exception handler when necessary.

The **_FPIEEE_RECORD** structure, defined in Fpieee.h, contains information pertaining to an IEEE floating-point exception. This structure is passed to the user-defined trap handler by **_fpieee_flt**.

|_FPIEEE_RECORD field|Description|
|----------------------------|-----------------|
|**RoundingMode**<br/>**Precision**|These **`unsigned int`** fields contain information about the floating-point environment at the time the exception occurred.|
|**Operation**|This **`unsigned int`** field indicates the type of operation that caused the trap. If the type is a comparison (**_FpCodeCompare**), you can supply one of the special **_FPIEEE_COMPARE_RESULT** values (as defined in Fpieee.h) in the **Result.Value** field. The conversion type (**_FpCodeConvert**) indicates that the trap occurred during a floating-point conversion operation. You can look at the **Operand1** and **Result** types to determine the type of conversion being attempted.|
|**Operand1**<br/>**Operand2**<br/>**Result**|These **_FPIEEE_VALUE** structures indicate the types and values of the proposed result and operands. Each structure contains these fields:<br /><br /> **OperandValid** - Flag indicating whether the responding value is valid.<br />**Format** - Data type of the corresponding value. The format type might be returned even if the corresponding value is not valid.<br />**Value** - Result or operand data value.|
|**Cause**<br/>**Enable**<br/>**Status**|**_FPIEEE_EXCEPTION_FLAGS** contains one bit field per type of floating point exception. There is a correspondence between these fields and the arguments used to mask the exceptions supplied to [_controlfp](control87-controlfp-control87-2.md). The exact meaning of each bit depends on context:<br /><br /> **Cause** - Each set bit indicates the particular exception that was raised.<br />**Enable** - Each set bit indicates that the particular exception is currently unmasked.<br />**Status** - Each set bit indicates that the particular exception is currently pending. This includes exceptions that have not been raised because they were masked by **_controlfp**.|

Pending exceptions that are disabled are raised when you enable them. This can result in undefined behavior when using **_fpieee_flt** as an exception filter. Always call [_clearfp](clear87-clearfp.md) before enabling floating point exceptions.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fpieee_flt**|\<fpieee.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fpieee.c
// This program demonstrates the implementation of
// a user-defined floating-point exception handler using the
// _fpieee_flt function.

#include <fpieee.h>
#include <excpt.h>
#include <float.h>
#include <stddef.h>

int fpieee_handler( _FPIEEE_RECORD * );

int fpieee_handler( _FPIEEE_RECORD *pieee )
{
   // user-defined ieee trap handler routine:
   // there is one handler for all
   // IEEE exceptions

   // Assume the user wants all invalid
   // operations to return 0.

   if ((pieee->Cause.InvalidOperation) &&
       (pieee->Result.Format == _FpFormatFp32))
   {
        pieee->Result.Value.Fp32Value = 0.0F;

        return EXCEPTION_CONTINUE_EXECUTION;
   }
   else
      return EXCEPTION_EXECUTE_HANDLER;
}

#define _EXC_MASK    \
    _EM_UNDERFLOW  + \
    _EM_OVERFLOW   + \
    _EM_ZERODIVIDE + \
    _EM_INEXACT

int main( void )
{
   // ...

   __try {
      // unmask invalid operation exception
      _controlfp_s(NULL, _EXC_MASK, _MCW_EM);

      // code that may generate
      // fp exceptions goes here
   }
   __except ( _fpieee_flt( GetExceptionCode(),
                GetExceptionInformation(),
                fpieee_handler ) ){

      // code that gets control

      // if fpieee_handler returns
      // EXCEPTION_EXECUTE_HANDLER goes here

   }

   // ...
}
```

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md)<br/>
[_controlfp_s](controlfp-s.md)<br/>
