---
description: "Learn more about: Linker Tools Warning LNK4248"
title: "Linker Tools Warning LNK4248"
ms.date: "11/04/2016"
f1_keywords: ["LNK4248"]
helpviewer_keywords: ["LNK4248"]
ms.assetid: e40523ff-e3cb-4ba6-ab79-23f0f339f6cf
---
# Linker Tools Warning LNK4248

unresolved typeref token (token) for 'type'; image may not run

A type doesn’t have a definition in MSIL metadata.

LNK4248 can occur when there is only a forward declaration for a type in an MSIL module (compiled with **/clr**), where the type is referenced in the MSIL module, and where the MSIL module is linked with a native module that has a definition for the type.

In this situation, the linker will provide the native type definition in the MSIL metadata, and this may provide for the correct behavior.

However, if a forward type declaration is a CLR type, then the linker's native type definition may not be correct

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

### To correct this error

1. Provide the type definition in the MSIL module.

## Examples

The following sample generates LNK4248. Define struct A to resolve.

```cpp
// LNK4248.cpp
// compile with: /clr /W1
// LNK4248 expected
struct A;
void Test(A*){}

int main() {
   Test(0);
}
```

The following sample has a forward definition of a type.

```cpp
// LNK4248_2.cpp
// compile with: /clr /c
class A;   // provide a definition for A here to resolve
A * newA();
int valueA(A * a);

int main() {
   A * a = newA();
   return valueA(a);
}
```

The following sample generates LNK4248.

```cpp
// LNK4248_3.cpp
// compile with: /c
// post-build command: link LNK4248_2.obj LNK4248_3.obj
class A {
public:
   int b;
};

A* newA() {
   return new A;
}

int valueA(A * a) {
   return (int)a;
}
```
