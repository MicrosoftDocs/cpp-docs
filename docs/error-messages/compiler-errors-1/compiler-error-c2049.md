---
title: "Compiler Error C2049"
description: "Learn more about: Compiler Error C2049"
ms.date: 08/18/2022
f1_keywords: ["C2049"]
helpviewer_keywords: ["C2049"]
---
# Compiler Error C2049

> '*namespace-name*': non-inline namespace cannot be reopened as inline

## Remarks

The **`inline`** keyword may be used on a namespace definition extension only if it was also used on the original namespace definition.

To resolve this issue, make the use of the **`inline`** specifier consistent across all parts of the namespace.

## Example

The following example generates C2049:

```cpp
// C2049.cpp
namespace ns {}

inline namespace ns {}   // C2049
```

Possible resolution:

```cpp
// C2049b.cpp
namespace ns {}

namespace ns {}
```
