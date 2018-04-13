---
title: "__max | Microsoft Docs"
ms.custom: ""
ms.date: "04/05/2018"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["__max"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["max", "__max"]
dev_langs: ["C++"]
helpviewer_keywords: ["max macro", "maximum macro", "__max macro"]
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# __max

A preprocessor macro that returns the larger of two values.

## Syntax

```C
#define __max(a,b) (((a) > (b)) ? (a) : (b))
```

### Parameters

*a*, *b*<br/>
Values of any numeric type to be compared.

## Return Value

**__max** returns the larger of its arguments.

## Remarks

The **__max** macro compares two values and returns the value of the larger one. The arguments can be of any numeric data type, signed or unsigned. Both arguments and the return value must be of the same data type.

The argument returned is evaluated twice by the macro. This can lead to unexpected results if the argument is an expression that alters its value when it is evaluated, such as `*p++`.

## Requirements

|Macro|Required header|
|-------------|---------------------|
|**__max**|\<stdlib.h>|

## Example

For more information, see the example for [__min](../../c-runtime-library/reference/min.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[__min](../../c-runtime-library/reference/min.md)<br/>