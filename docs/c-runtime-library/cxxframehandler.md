---
description: "Learn more about: __CxxFrameHandler"
title: "__CxxFrameHandler"
ms.date: "1/14/2021"
api_name: ["__CxxFrameHandler"]
api_location: ["msvcr110.dll", "msvcrt.dll", "msvcr80.dll", "msvcr100.dll", "msvcr110_clr0400.dll", "msvcr90.dll", "msvcr120.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__CxxFrameHandler"]
helpviewer_keywords: ["__CxxFrameHandler"]
ms.assetid: b79ac97f-425a-42ae-9b91-8beaef935333
---
# `__CxxFrameHandler`

Internal CRT function. Used by the CRT to handle structured exception frames.

## Syntax

```cpp
EXCEPTION_DISPOSITION __CxxFrameHandler(
      EHExceptionRecord  *pExcept,
      EHRegistrationNode *pRN,
      void               *pContext,
      DispatcherContext  *pDC
   );
```

#### Parameters

*`pExcept`*\
Exception record that is passed to the possible **`catch`** statements.

*`pRN`*\
Dynamic information about the stack frame that is used to handle the exception. For more information, see ehdata.h.

*`pContext`*\
Context. (Not used on Intel processors.)

*`pDC`*\
Additional information about the function entry and stack frame.

## Return value

One of the *filter expression* values used by the [try-except Statement](../cpp/try-except-statement.md).

## Remarks

## Requirements

| Routine | Required header |
|---|---|
| **`__CxxFrameHandler`** | `<excpt.h>`, `<ehdata.h>` |
