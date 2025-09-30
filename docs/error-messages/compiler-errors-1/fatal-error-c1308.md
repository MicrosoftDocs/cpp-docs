---
title: "Fatal Error C1308"
description: "Learn more about: Fatal Error C1308"
ms.date: 11/04/2016
f1_keywords: ["C1308"]
helpviewer_keywords: ["C1308"]
---
# Fatal Error C1308

> linking assemblies is not supported

## Remarks

A .netmodule is allowed as input to the linker, but an assembly is not. This error can be generated when an attempt is made to link an assembly compiled with `/clr:safe`.

For more information, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).

## Example

The following example generates C1308:

```cpp
// C1308.cpp
// compile with: /clr:safe /LD
public ref class MyClass {
public:
   int i;
};
```

and then,

```cpp
// C1308b.cpp
// compile with: /clr /link C1308b.obj C1308.dll
// C1308 expected
#using "C1308.dll"
int main() {
   MyClass ^ my = gcnew MyClass();
}
```
