---
description: "Learn more about: Compiler Error C3467"
title: "Compiler Error C3467"
ms.date: "11/04/2016"
f1_keywords: ["C3467"]
helpviewer_keywords: ["C3467"]
ms.assetid: e2b844d0-4920-412f-99fd-cd8051c4aa41
---
# Compiler Error C3467

'type' : this type has already been forwarded

The compiler found more than one forward type declaration for the same type. Only one declaration per type is allowed.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Examples

The following sample creates a component.

```cpp
// C3467.cpp
// compile with: /LD /clr
public ref class R {};
```

The following sample generates C3467.

```cpp
// C3467_b.cpp
// compile with: /clr /c
#using "C3467.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
[ assembly:TypeForwardedTo(R::typeid) ];   // C3467
```
