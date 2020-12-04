---
description: "Learn more about: unexpected (CRT)"
title: "unexpected (CRT)"
ms.date: "11/04/2016"
api_name: ["unexpected"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["unexpected"]
helpviewer_keywords: ["unexpected function"]
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
---
# unexpected (CRT)

Calls **terminate** or function you specify using **set_unexpected**.

## Syntax

```C
void unexpected( void );
```

## Remarks

The **unexpected** routine is not used with the current implementation of C++ exception handling. **unexpected** calls **terminate** by default. You can change this default behavior by writing a custom termination function and calling **set_unexpected** with the name of your function as its argument. **unexpected** calls the last function given as an argument to **set_unexpected**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**unexpected**|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
