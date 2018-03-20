---
title: "InvokeModeOptions Structure | Microsoft Docs"
ms.custom: ""
ms.date: "03/22/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::InvokeModeOptions",
"event/Microsoft::WRL::InvokeMode"]
dev_langs: ["C++"]
helpviewer_keywords: ["InvokeModeOptions structure", "InvokeMode enum"]
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# InvokeModeOptions Structure

Specifies whether to fire all events in the delegate queue, or to stop firing after an error is raised. The allowable values are specified in the `InvokeMode` enum.

## Syntax

```
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

## Remarks

## Requirements

 **Header:** event.h

 **Namespace:** Microsoft::WRL

## See Also

[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)
[Microsoft::WRL::AgileEventSource Class](../windows/agileeventsource-class.md)