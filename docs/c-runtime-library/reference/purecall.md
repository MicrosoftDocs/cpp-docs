---
title: "_purecall | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_purecall"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntoskrnl.exe", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["purecall", "_purecall"]
dev_langs: ["C++"]
helpviewer_keywords: ["_purecall function", "purecall function"]
ms.assetid: 56135d9b-3403-4e22-822d-e714523801cc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _purecall

The default pure virtual function call error handler. The compiler generates code to call this function when a pure virtual member function is called.

## Syntax

```C
extern "C" int __cdecl _purecall();
```

## Remarks

The `_purecall` function is a Microsoft-specific implementation detail of the Microsoft Visual C++ compiler. This function is not intended to be called by your code directly, and it has no public header declaration. It is documented here because it is a public export of the C Runtime Library.

A call to a pure virtual function is an error because it has no implementation. The compiler generates code to invoke the `_purecall` error handler function when a pure virtual function is called. By default, `_purecall` terminates the program. Before terminating, the `_purecall` function invokes a `_purecall_handler` function if one has been set for the process. You can install your own error handler function for pure virtual function calls, to catch them for debugging or reporting purposes. To use your own error handler, create a function that has the `_purecall_handler` signature, then use [_set_purecall_handler](../../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md) to make it the current handler.

## Requirements

The `_purecall` function does not have a header declaration. The `_purecall_handler` typedef is defined in \<stdlib.h>.

## See also

[Alphabetical Function Reference](../../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[_get_purecall_handler, _set_purecall_handler](../../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)<br/>
