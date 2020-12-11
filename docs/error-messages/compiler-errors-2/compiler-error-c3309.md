---
description: "Learn more about: Compiler Error C3309"
title: "Compiler Error C3309"
ms.date: "11/04/2016"
f1_keywords: ["C3309"]
helpviewer_keywords: ["C3309"]
ms.assetid: 75ee16e3-7d4e-4c41-b3cb-64e9849c3aab
---
# Compiler Error C3309

'macro_name': module name cannot be a macro or a keyword

The value that you pass to the name property of the module attribute cannot be a symbol for the preprocessor to expand; it must be a string literal.

The following sample generates C3309:

```cpp
// C3309.cpp
#define NAME MyModule
[module(name="NAME")];   // C3309
// Try the following line instead
// [module(name="MyModule")];
[coclass]
class MyClass {
public:
   void MyFunc();
};

int main() {
}
```
