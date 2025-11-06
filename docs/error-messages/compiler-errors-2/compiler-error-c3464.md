---
title: "Compiler Error C3464"
description: "Learn more about: Compiler Error C3464"
ms.date: 11/04/2016
f1_keywords: ["C3464"]
helpviewer_keywords: ["C3464"]
---
# Compiler Error C3464

> 'type' a nested type cannot be forwarded

## Remarks

Type forwarding does not work on nested types.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3464.cpp
// compile with: /LD /clr
public ref class R {
public:
   ref class N {};
};
```

The following example generates C3464.

```cpp
// C3464_b.cpp
// compile with: /clr /c
#using "C3464.dll"
[assembly:TypeForwardedTo(R::N::typeid)];   // C3464
[assembly:TypeForwardedTo(R::typeid)];   // OK
```
