---
title: "Compiler Error C3462"
description: "Learn more about: Compiler Error C3462"
ms.date: 11/04/2016
f1_keywords: ["C3462"]
helpviewer_keywords: ["C3462"]
---
# Compiler Error C3462

> 'type': only an imported type can be forwarded

## Remarks

The TypeForwardedTo attribute must be applied to a type in referenced metadata.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Example

The following example creates a component.

```cpp
// C3462.cpp
// compile with: /clr /LD
public ref class R {};
```

The following example generates C3462.

```cpp
// C3462b.cpp
// compile with: /clr /c
#using "C3462.dll"
ref class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3462
[assembly:TypeForwardedTo(R::typeid)];
```
