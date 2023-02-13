---
description: "Learn more about: TZNAME_MAX"
title: "TZNAME_MAX"
ms.date: "10/22/2018"
f1_keywords: ["TZNAME_MAX"]
helpviewer_keywords: ["TZNAME_MAX constant"]
ms.assetid: e2286cb8-751d-4557-9650-5c4b98a8f7be
---
# `TZNAME_MAX`

**Obsolete**. The maximum permissible string length for a time zone name variable. This macro was defined in \<limits.h> in Visual Studio 2012 and earlier versions. It isn't defined in Visual Studio 2013 and later versions. To get the length required to hold the current time zone name, use [`_get_tzname`](./reference/get-tzname.md).

## Syntax

```C
#include <limits.h>
```

## See also

[Environmental constants](./environmental-constants.md)\
[Global constants](./global-constants.md)\
[`_get_tzname`](./reference/get-tzname.md)
