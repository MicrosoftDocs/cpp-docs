---
description: "Learn more about: Event Handling Global Functions"
title: "Event Handling Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlbase/ATL::AtlWaitWithMessageLoop"]
helpviewer_keywords: ["event handling, global functions", "global functions, event handling"]
ms.assetid: fd674470-3def-47c3-be1c-894fa85f13e8
---
# Event Handling Global Functions

This function provides an event handler.

> [!IMPORTANT]
> The function listed in the following table cannot be used in applications that execute in the Windows Runtime.

|Name|Description|
|-|-|
|[AtlWaitWithMessageLoop](#atlwaitwithmessageloop)|Waits for an object to be signaled, meanwhile dispatching window messages as needed.|

## Requirements

**Header:** atlbase.h

## <a name="atlwaitwithmessageloop"></a> AtlWaitWithMessageLoop

Waits for the object to be signaled, meanwhile dispatching window messages as needed.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
BOOL AtlWaitWithMessageLoop(HANDLE hEvent);
```

### Parameters

*hEvent*<br/>
[in] The handle of the object to wait for.

### Return Value

Returns TRUE if the object has been signaled.

### Remarks

This is useful if you want to wait for an object's event to happen and be notified of it happening, but allow window messages to be dispatched while waiting.

## See also

[Functions](../../atl/reference/atl-functions.md)
