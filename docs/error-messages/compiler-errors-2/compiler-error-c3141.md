---
description: "Learn more about: Compiler Error C3141"
title: "Compiler Error C3141"
ms.date: "11/04/2016"
f1_keywords: ["C3141"]
helpviewer_keywords: ["C3141"]
ms.assetid: b4fd65c3-50cc-46cd-8de0-6a6d24cb9cda
---
# Compiler Error C3141

'interface_name' : interfaces only support public inheritance

Interfaces defined with the [interface (or __interface)](../../cpp/interface.md) keyword only support public inheritance.

The following sample generates C3141:

```cpp
// C3141.cpp
__interface IBase {};
__interface IDerived1 : protected IBase {};  // C3141
__interface IDerived2 : private IBase {};    // C3141
```
