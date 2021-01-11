---
description: "Learn more about: Compiler Error C3363"
title: "Compiler Error C3363"
ms.date: "11/04/2016"
f1_keywords: ["C3363"]
helpviewer_keywords: ["C3363"]
ms.assetid: 41aa922f-608e-4f7a-ba66-451fc1161935
---
# Compiler Error C3363

'type' : 'typeid' can only be applied to a type

The [typeid](../../extensions/typeid-cpp-component-extensions.md) operator was used incorrectly.

## Example

The following sample generates C3363.

```cpp
// C3363.cpp
// compile with: /clr
int main() {
   System::typeid;   // C3363
}
```
