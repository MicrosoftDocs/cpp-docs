---
title: "Compiler Error C3118"
description: "Learn more about: Compiler Error C3118"
ms.date: 11/04/2016
f1_keywords: ["C3118"]
helpviewer_keywords: ["C3118"]
---
# Compiler Error C3118

> 'interface' : interfaces do not support virtual inheritance

## Remarks

You tried to virtually inherit from an interface.

## Example

For example,

```cpp
// C3118.cpp
__interface I1 {
};

__interface I2 : virtual I1 {   // C3118
};
```

generates this error.
