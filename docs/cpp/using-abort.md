---
description: "Learn more about: Using abort"
title: "Using abort"
ms.date: "11/04/2016"
helpviewer_keywords: ["abort function"]
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
---
# Using abort

Calling the [abort](../c-runtime-library/reference/abort.md) function causes immediate termination. It bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the `atexit` function.

## See also

[Additional Termination Considerations](../cpp/additional-termination-considerations.md)
