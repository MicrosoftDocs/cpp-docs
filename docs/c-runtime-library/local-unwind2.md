---
description: "Learn more about: _local_unwind2"
title: "_local_unwind2"
ms.date: "11/04/2016"
api_name: ["_local_unwind2"]
api_location: ["msvcr110_clr0400.dll", "msvcrt.dll", "msvcr100.dll", "msvcr110.dll", "msvcr80.dll", "msvcr90.dll", "msvcr120.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_local_unwind2", "local_unwind2"]
helpviewer_keywords: ["_local_unwind2 function", "local_unwind2 function"]
ms.assetid: 44f1fa82-e01e-490f-a6e6-18fc6811c28c
---
# _local_unwind2

Internal CRT Function. Runs all termination handlers that are listed in the indicated scope table.

## Syntax

```cpp
void _local_unwind2(
   PEXCEPTION_REGISTRATION xr,
   int stop
);
```

#### Parameters

*xr*<br/>
[in] A registration record that is associated with one scope table.

*stop*<br/>
[in] The lexical level that indicates where `_local_unwind2` should stop.

## Remarks

This method is used only by the run-time environment. Do not call the method in your code.

When this method executes termination handlers, it starts at the current lexical level and works its way up in lexical levels until it reaches the level that is indicated by `stop`. It does not execute termination handlers at the level that is indicated by `stop`.

## See also

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md)
