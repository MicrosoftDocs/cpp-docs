---
title: "TZNAME_MAX | Microsoft Docs"
ms.custom: ""
ms.date: "10/22/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["TZNAME_MAX"]
dev_langs: ["C++"]
helpviewer_keywords: ["TZNAME_MAX constant"]
ms.assetid: e2286cb8-751d-4557-9650-5c4b98a8f7be
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# TZNAME_MAX

**Obsolete**. The maximum permissible string length for a time zone name variable. This macro was defined in \<limits.h> in Visual Studio 2012 and earlier versions. It is not defined in Visual Studio 2013 and later versions. To get the length required to hold the current time zone name, use [_get_tzname](../c-runtime-library/reference/get-tzname.md).

## Syntax

```
#include <limits.h>
```

## See Also

[Environmental Constants](../c-runtime-library/environmental-constants.md)<br/>
[Global Constants](../c-runtime-library/global-constants.md)<br/>
[_get_tzname](../c-runtime-library/reference/get-tzname.md)
