---
description: "Learn more about: setvbuf Constants"
title: "setvbuf Constants"
ms.date: "11/04/2016"
f1_keywords: ["_IOFBF", "_IONBF", "_IOLBF"]
helpviewer_keywords: ["_IOFBF constant", "IOFBF constant", "IONBF constant", "_IOLBF constant", "IOLBF constant", "_IONBF constant"]
ms.assetid: a6ec4dd5-1f24-498c-871a-e874cd28d33c
---
# setvbuf Constants

## Syntax

```
#include <stdio.h>
```

## Remarks

These constants represent the type of buffer for `setvbuf`.

The possible values are given by the following manifest constants:

|Constant|Meaning|
|--------------|-------------|
|`_IOFBF`|Full buffering: Buffer specified in call to `setvbuf` is used and its size is as specified in `setvbuf` call. If buffer pointer is **NULL**, automatically allocated buffer of specified size is used.|
|`_IOLBF`|Same as `_IOFBF`.|
|`_IONBF`|No buffer is used, regardless of arguments in call to `setvbuf`.|

## See also

[setbuf](../c-runtime-library/reference/setbuf.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
