---
title: "Compiler Error C3461"
description: "Learn more about: Compiler Error C3461"
ms.date: 11/04/2016
f1_keywords: ["C3461"]
helpviewer_keywords: ["C3461"]
---
# Compiler Error C3461

> 'type': only a managed type can be forwarded

## Remarks

Type forwarding can only occur on CLR types.  See [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md) for more information.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3461.cpp
// compile with: /clr /LD
public ref class R {};
```

The following example generates C3461.

```cpp
// C3461b.cpp
// compile with: /clr /c
#using "C3461.dll"
class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3461
[assembly:TypeForwardedTo(R::typeid)];   // OK
```
