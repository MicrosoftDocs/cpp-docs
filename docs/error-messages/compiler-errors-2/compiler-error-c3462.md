---
description: "Learn more about: Compiler Error C3462"
title: "Compiler Error C3462"
ms.date: "11/04/2016"
f1_keywords: ["C3462"]
helpviewer_keywords: ["C3462"]
ms.assetid: 56b75f35-9fad-42d9-a969-eeca5d709bec
---
# Compiler Error C3462

'type': only an imported type can be forwarded

The TypeForwardedTo attribute must be applied to a type in referenced metadata.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Examples

The following sample creates a component.

```cpp
// C3462.cpp
// compile with: /clr /LD
public ref class R {};
```

The following sample generates C3462.

```cpp
// C3462b.cpp
// compile with: /clr /c
#using "C3462.dll"
ref class N {};
[assembly:TypeForwardedTo(N::typeid)];   // C3462
[assembly:TypeForwardedTo(R::typeid)];
```
