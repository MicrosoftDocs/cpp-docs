---
description: "Learn more about: Compiler Error C3466"
title: "Compiler Error C3466"
ms.date: "11/04/2016"
f1_keywords: ["C3466"]
helpviewer_keywords: ["C3466"]
ms.assetid: 69a877d9-a749-474b-bfc3-8d3fd53ba8fd
---
# Compiler Error C3466

'type' : a specialization of a generic class cannot be forwarded

You cannot use type forwarding on a specialization of a generic class.

For more information, see [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md).

## Examples

The following sample creates a component.

```cpp
// C3466.cpp
// compile with: /clr /LD
generic<typename T>
public ref class GR {};

public ref class GR2 {};
```

The following sample generates C3466.

```cpp
// C3466_b.cpp
// compile with: /clr /c
#using "C3466.dll"
[assembly:TypeForwardedTo(GR<int>::typeid)];   // C3466
[assembly:TypeForwardedTo(GR2::typeid)];   // OK
```
