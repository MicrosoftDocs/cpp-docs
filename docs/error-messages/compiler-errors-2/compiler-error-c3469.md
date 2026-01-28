---
title: "Compiler Error C3469"
description: "Learn more about: Compiler Error C3469"
ms.date: 11/04/2016
f1_keywords: ["C3469"]
helpviewer_keywords: ["C3469"]
---
# Compiler Error C3469

> 'type' : a generic class cannot be forwarded

## Remarks

You cannot use type forwarding on a generic class.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3469.cpp
// compile with: /clr /LD
generic<typename T>
public ref class GR {};

public ref class GR2 {};
```

The following example generates C3469.

```cpp
// C3469_b.cpp
// compile with: /clr /c
#using "C3469.dll"
[assembly:TypeForwardedTo(GR::typeid)];   // C3469
[assembly:TypeForwardedTo(GR2::typeid)];   // OK
```
