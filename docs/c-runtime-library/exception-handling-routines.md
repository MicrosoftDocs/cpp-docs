---
description: "Learn more about: Exception Handling Routines"
title: "Exception Handling Routines"
ms.date: "11/04/2016"
f1_keywords: ["c.exceptions"]
helpviewer_keywords: ["exception handling, routines"]
ms.assetid: f60548c6-850a-4e1e-a79b-a2a6a541ab62
---
# Exception Handling Routines

Use the C++ exception-handling functions to recover from unexpected events during program execution.

## Exception-Handling Functions

|Function|Use|
|--------------|---------|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Handle Win32 exceptions (C structured exceptions) as C++ typed exceptions|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Install your own termination routine to be called by **terminate**|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Install your own termination function to be called by **unexpected**|
|[terminate](../c-runtime-library/reference/terminate-crt.md)|Called automatically under certain circumstances after exception is thrown. The **terminate** function calls **abort** or a function you specify using **set_terminate**|
|[unexpected](../c-runtime-library/reference/unexpected-crt.md)|Calls **terminate** or a function you specify using **set_unexpected**. The **unexpected** function is not used in current Microsoft C++ exception-handling implementation|

## See also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
