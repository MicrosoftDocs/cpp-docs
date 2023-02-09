---
description: "Learn more about: unexpected (CRT)"
title: "unexpected (CRT)"
ms.date: "1/14/2021"
api_name: ["unexpected"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["EH/unexpected"]
helpviewer_keywords: ["unexpected function"]
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
---
# `unexpected` (CRT)

Calls **`terminate`** or the function you specify by using **`set_unexpected`**.

## Syntax

```C
void unexpected( void );
```

## Remarks

The **`unexpected`** routine isn't used with the current implementation of C++ exception handling. **`unexpected`** calls **`terminate`** by default. You can change this default behavior by writing a custom termination function. Call **`set_unexpected`** with the name of your function as its argument. **`unexpected`** calls the last function passed to **`set_unexpected`**.

## Requirements

| Routine | Required header |
|---|---|
| **`unexpected`** | `<eh.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Exception handling routines](../exception-handling-routines.md)\
[`abort`](abort.md)\
[`_set_se_translator`](set-se-translator.md)\
[`set_terminate`](set-terminate-crt.md)\
[`set_unexpected`](set-unexpected-crt.md)\
[`terminate`](terminate-crt.md)
