---
title: "Robustness | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.runtime"]
dev_langs: ["C++"]
helpviewer_keywords: ["robustness [CRT]"]
ms.assetid: 7f1a87f8-eff9-4b76-ae9b-d133d3de6adf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Robustness

Use the following C run-time library functions to improve the robustness of your program.

## Run-Time Robustness Functions

|Function|Use|
|--------------|---------|
|[_set_new_handler](../c-runtime-library/reference/set-new-handler.md)|Transfers control to your error-handling mechanism if the **new** operator fails to allocate memory.|
|[_set_se_translator](../c-runtime-library/reference/set-se-translator.md)|Handles Win32 exceptions (C structured exceptions) as C++ typed exceptions.|
|[set_terminate](../c-runtime-library/reference/set-terminate-crt.md)|Installs your own termination function to be called by [terminate](../c-runtime-library/reference/terminate-crt.md).|
|[set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md)|Installs your own termination function to be called by [unexpected](../c-runtime-library/reference/unexpected-crt.md).|

## See Also

[Universal C runtime routines by category](../c-runtime-library/run-time-routines-by-category.md)<br/>
[SetUnhandledExceptionFilter](https://msdn.microsoft.com/library/windows/desktop/ms680634.aspx)<br/>
