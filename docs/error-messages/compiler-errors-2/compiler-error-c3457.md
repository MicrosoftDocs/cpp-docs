---
title: "Compiler Error C3457"
description: "Learn more about: Compiler Error C3457"
ms.date: 11/04/2016
f1_keywords: ["C3457"]
helpviewer_keywords: ["C3457"]
---
# Compiler Error C3457

> 'attribute': attribute does not support unnamed arguments

## Remarks

Source annotation attributes, unlike CLR custom attribute or compiler attributes, only support named arguments.

## Example

The following sample generates C3457.

```cpp
#include "SourceAnnotations.h"
[vc_attributes::Post( 1 )] int f();   // C3457
[vc_attributes::Post( Valid=vc_attributes::Yes )] int f2();   // OK
```
