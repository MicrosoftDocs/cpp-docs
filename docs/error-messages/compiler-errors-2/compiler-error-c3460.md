---
title: "Compiler Error C3460"
description: "Learn more about: Compiler Error C3460"
ms.date: 11/04/2016
f1_keywords: ["C3460"]
helpviewer_keywords: ["C3460"]
---
# Compiler Error C3460

> 'type': only a user-defined type can be forwarded

## Remarks

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3460.cpp
// compile with: /LD /clr
public ref class R {};
```

The following example generates C3460.

```cpp
// C3460_b.cpp
// compile with: /clr /c
#using "C3460.dll"
[assembly:TypeForwardedTo(int::typeid)];   // C3460
[assembly:TypeForwardedTo(R::typeid)];
```
