---
description: "Learn more about: Compiler Error C2814"
title: "Compiler Error C2814"
ms.date: "11/04/2016"
f1_keywords: ["C2814"]
helpviewer_keywords: ["C2814"]
ms.assetid: 7d165136-a08b-4497-a76d-60a21bb19404
---
# Compiler Error C2814

'member' : a native type cannot be nested within a managed or WinRT type 'type'

## Example

A native type cannot be nested in a CLR or WinRT type. The following sample generates C2814 and shows how to fix it.

```cpp
// C2814.cpp
// compile with: /clr /c
ref class A {
   class B {};   // C2814
   ref class C {};   // OK
};
```
