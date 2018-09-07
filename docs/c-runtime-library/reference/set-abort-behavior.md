---
title: "_set_abort_behavior | Microsoft Docs"
ms.custom: ""
ms.date: "1/02/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_set_abort_behavior"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_set_abort_behavior", "set_abort_behavior"]
dev_langs: ["C++"]
helpviewer_keywords: ["aborting programs", "_set_abort_behavior function", "set_abort_behavior function"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _set_abort_behavior

Specifies the action to be taken when a program is abnormally terminated.

> [!NOTE]
> Do not use the [abort](abort.md) function to shut down a Microsoft Store app, except in testing or debugging scenarios. Programmatic or UI ways to close a Store app are not permitted according to the [Microsoft Store policies](/legal/windows/agreements/store-policies). For more information, see [UWP app lifecycle](/windows/uwp/launch-resume/app-lifecycle).

## Syntax

```C
unsigned int _set_abort_behavior(
   unsigned int flags,
   unsigned int mask
);
```

### Parameters

*flags*<br/>
New value of the [abort](abort.md) flags.

*mask*<br/>
Mask for the [abort](abort.md) flags bits to set.

## Return Value

The old value of the flags.

## Remarks

There are two [abort](abort.md) flags: **_WRITE_ABORT_MSG** and **_CALL_REPORTFAULT**. **_WRITE_ABORT_MSG** determines whether a helpful text message is printed when a program is abnormally terminated. The message states that the application has called the [abort](abort.md) function. The default behavior is to print the message. **_CALL_REPORTFAULT**, if set, specifies that a Watson crash dump is generated and reported when [abort](abort.md) is called. By default, crash dump reporting is enabled in non-DEBUG builds.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_set_abort_behavior**|\<stdlib.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_set_abort_behavior.c
// compile with: /TC
#include <stdlib.h>

int main()
{
   printf("Suppressing the abort message. If successful, this message"
          " will be the only output.\n");
   // Suppress the abort message
   _set_abort_behavior( 0, _WRITE_ABORT_MSG);
   abort();
}
```

```Output
Suppressing the abort message. If successful, this message will be the only output.
```

## See also

[abort](abort.md)<br/>
