---
description: "Learn more about: InvokeModeOptions Structure"
title: "InvokeModeOptions Structure"
ms.date: "03/22/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::InvokeModeOptions"]
helpviewer_keywords: ["InvokeModeOptions structure", "InvokeMode enum"]
---
# InvokeModeOptions Structure

Specifies whether to fire all events in the delegate queue, or to stop firing after an error is raised. The allowable values are specified in the `InvokeMode` enum.

## Syntax

```cpp
enum InvokeMode
{
   StopOnFirstError = 1,
   FireAll = 2,
};

struct InvokeModeOptions
{
   static const InvokeMode invokeMode = invokeModeValue;
};
```

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)<br/>
[Microsoft::WRL::AgileEventSource Class](agileeventsource-class.md)
