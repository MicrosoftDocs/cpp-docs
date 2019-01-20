---
title: "abort Function"
ms.date: "12/01/2017"
helpviewer_keywords: ["abort function"]
ms.assetid: 3352bcc4-1a8a-4e1f-8dcc-fe30f6b50f2d
---
# abort Function

The **abort** function, also declared in the standard include file \<stdlib.h>, terminates a C++ program. The difference between `exit` and **abort** is that `exit` allows the C++ run-time termination processing to take place (global object destructors will be called), whereas **abort** terminates the program immediately. For more information, see [abort](../c-runtime-library/reference/abort.md) in the *Run-Time Library Reference*.

## See also

- [Program Termination](../cpp/program-termination.md)
