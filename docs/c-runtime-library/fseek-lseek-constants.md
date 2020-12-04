---
description: "Learn more about: fseek, _lseek Constants"
title: "fseek, _lseek Constants"
ms.date: "11/04/2016"
f1_keywords: ["SEEK_END", "SEEK_SET", "SEEK_CUR"]
helpviewer_keywords: ["SEEK_SET constant", "SEEK_END constant", "SEEK_CUR constant"]
ms.assetid: 9deeb13e-5aa3-4c33-80d8-721c80a4de9d
---
# fseek, _lseek Constants

## Syntax

```
#include <stdio.h>
```

## Remarks

The *origin* argument specifies the initial position and can be one of the following manifest constants:

|Constant|Meaning|
|--------------|-------------|
|`SEEK_END`|End of file|
|`SEEK_CUR`|Current position of file pointer|
|`SEEK_SET`|Beginning of file|

## See also

[fseek, _fseeki64](../c-runtime-library/reference/fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](../c-runtime-library/reference/lseek-lseeki64.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)
