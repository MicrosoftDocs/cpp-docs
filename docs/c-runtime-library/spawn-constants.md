---
description: "Learn more about: spawn Constants"
title: "spawn Constants"
ms.date: "11/04/2016"
f1_keywords: ["_P_NOWAIT", "_P_OVERLAY", "_P_WAIT", "_P_DETACH", "_P_NOWAITO"]
helpviewer_keywords: ["_P_OVERLAY constant", "P_DETACH constant", "P_OVERLAY constant", "P_NOWAIT constant", "_P_DETACH constant", "_P_NOWAIT constant", "_P_NOWAITO constant", "P_NOWAITO constant", "spawn constants", "P_WAIT constant", "_P_WAIT constant"]
ms.assetid: e0533e88-d362-46fc-b53c-5f193226d879
---
# spawn Constants

## Syntax

```
#include <process.h>
```

## Remarks

The `mode` argument determines the action taken by the calling process before and during a spawn operation. The following values for `mode` are possible:

|Constant|Meaning|
|--------------|-------------|
|`_P_OVERLAY`|Overlays calling process with new process, destroying calling process (same effect as `_exec` calls).|
|`_P_WAIT`|Suspends calling thread until execution of new process is complete (synchronous `_spawn`).|
|`_P_NOWAIT`, `_P_NOWAITO`|Continues to execute calling process concurrently with new process (asynchronous `_spawn`).|
|`_P_DETACH`|Continues to execute calling process; new process is run in background with no access to console or keyboard. Calls to `_cwait` against new process will fail. This is an asynchronous `_spawn`.|

## See also

[_spawn, _wspawn Functions](../c-runtime-library/spawn-wspawn-functions.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
