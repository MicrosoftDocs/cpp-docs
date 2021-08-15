---
description: "Learn more about: Compiler Error C3238"
title: "Compiler Error C3238"
ms.date: "11/04/2016"
f1_keywords: ["C3238"]
helpviewer_keywords: ["C3238"]
ms.assetid: 19942497-b3c5-4df0-9144-142ced92468b
---
# Compiler Error C3238

'type' : a type with this name has already been forwarded to assembly 'assembly'

A type was defined in a client application that is also defined, via type forwarding syntax, in a referenced assembly. Both types cannot be defined in the scope of the application.

See [Type Forwarding (C++/CLI)](../../extensions/type-forwarding-cpp-cli.md) for more information.

## Examples

The following sample creates an assembly that contains a type that was forwarded from another assembly.

```cpp
// C3238.cpp
// compile with: /clr /LD
public ref class R {};
```

The following sample creates an assembly that used to contain the type definition, but not only contains type forwarding syntax.

```cpp
// C3238_b.cpp
// compile with: /clr /LD
#using "C3238.dll"
[ assembly:TypeForwardedTo(R::typeid) ];
```

The following sample generates C3238.

```cpp
// C3238_c.cpp
// compile with: /clr /c
// C3238 expected
// Delete the following line to resolve.
#using "C3238_b.dll"
public ref class R {};
```
