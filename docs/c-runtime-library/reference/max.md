---
description: "Learn more about: __max"
title: "__max"
ms.date: "04/05/2018"
api_name: ["__max"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["max", "__max"]
helpviewer_keywords: ["max macro", "maximum macro", "__max macro"]
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
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

For more information, see the example for [__min](min.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[__min](min.md)<br/>
