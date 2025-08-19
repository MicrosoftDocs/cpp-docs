---
title: "Compiler Error C3467"
description: "Learn more about: Compiler Error C3467"
ms.date: 11/04/2016
f1_keywords: ["C3467"]
helpviewer_keywords: ["C3467"]
---
# Compiler Error C3467

> 'type' : this type has already been forwarded

## Remarks

The compiler found more than one forward type declaration for the same type. Only one declaration per type is allowed.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3467.cpp
// compile with: /LD /clr
public ref class R {};
```

The following example generates C3467.

```cpp
// C3467_b.cpp
// compile with: /clr /c
#using "C3467.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
[ assembly:TypeForwardedTo(R::typeid) ];   // C3467
```
