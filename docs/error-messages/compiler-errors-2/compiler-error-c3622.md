---
description: "Learn more about: Compiler Error C3622"
title: "Compiler Error C3622"
ms.date: "11/04/2016"
f1_keywords: ["C3622"]
helpviewer_keywords: ["C3622"]
ms.assetid: 02836f78-0cf2-4947-b87e-710187d81014
---
# Compiler Error C3622

'class' : a class declared as 'keyword' cannot be instantiated

An attempt was made to instantiate a class marked as [abstract](../../extensions/abstract-cpp-component-extensions.md). A class marked as **`abstract`** can be a base class, but it cannot be instantiated.

## Example

The following sample generates C3622.

```cpp
// C3622.cpp
// compile with: /clr
ref class a abstract {};

int main() {
   a aa;   // C3622
}
```
