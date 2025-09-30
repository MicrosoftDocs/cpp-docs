---
title: "Compiler Error C2757"
description: "Learn more about: Compiler Error C2757"
ms.date: 11/04/2016
f1_keywords: ["C2757"]
helpviewer_keywords: ["C2757"]
---
# Compiler Error C2757

> 'symbol' : a symbol with this name already exists and therefore this name cannot be used as a namespace name

## Remarks

A symbol used in the current compilation as a namespace identifier is already being used in a referenced assembly.

## Example

The following example generates C2757:

```cpp
// C2757a.cpp
// compile with: /clr /LD
public ref class Nes {};
```

And then,

```cpp
// C2757b.cpp
// compile with: /clr /c
#using <C2757a.dll>

namespace Nes {    // C2757
// try the following line instead
// namespace Nes2 {
   public ref class X {};
}
```
