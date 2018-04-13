---
title: "unexpected (CRT) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["unexpected"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["unexpected"]
dev_langs: ["C++"]
helpviewer_keywords: ["unexpected function"]
ms.assetid: 2f873763-15ad-4556-a924-dcf28f2b52b4
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# unexpected (CRT)

Calls `terminate` or function you specify using `set_unexpected`.

## Syntax

```C
void unexpected( void );
```

## Remarks

The `unexpected` routine is not used with the current implementation of C++ exception handling. `unexpected` calls `terminate` by default. You can change this default behavior by writing a custom termination function and calling `set_unexpected` with the name of your function as its argument. `unexpected` calls the last function given as an argument to `set_unexpected`.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`unexpected`|\<eh.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Exception Handling Routines](../../c-runtime-library/exception-handling-routines.md)<br/>
[abort](abort.md)<br/>
[_set_se_translator](set-se-translator.md)<br/>
[set_terminate](set-terminate-crt.md)<br/>
[set_unexpected](set-unexpected-crt.md)<br/>
[terminate](terminate-crt.md)<br/>
