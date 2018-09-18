---
title: "_except_handler3 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
apiname: ["_except_handler3"]
apilocation: ["msvcrt.dll", "msvcr90.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr100.dll", "msvcr110.dll"]
apitype: "DLLExport"
f1_keywords: ["_except_handler3", "except_handler3"]
dev_langs: ["C++"]
helpviewer_keywords: ["_except_handler3 function", "except_handler3 function"]
ms.assetid: b0c64898-0ae5-48b7-9724-80135a0813e2
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _except_handler3

Internal CRT function. Used by a framework to find the appropriate exception handler to process the current exception.

## Syntax

```
int _except_handler3(
   PEXCEPTION_RECORD exception_record,
   PEXCEPTION_REGISTRATION registration,
   PCONTEXT context,
   PEXCEPTION_REGISTRATION dispatcher
);
```

#### Parameters

*exception_record*<br/>
[in] Information about the specific exception.

*registration*<br/>
[in] The record that indicates which scope table should be used to find the exception handler.

*context*<br/>
[in] Reserved.

*dispatcher*<br/>
[in] Reserved.

## Return Value

If an exception should be dismissed, returns `DISPOSITION_DISMISS`. If the exception should be passed up a level to the encapsulating exception handlers, returns `DISPOSITION_CONTINUE_SEARCH`.

## Remarks

If this method finds an appropriate exception handler, it passes the exception to the handler. In this situation, this method does not return to the code that called it and the return value is irrelevant.

## See Also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)