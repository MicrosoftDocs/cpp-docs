---
title: "Compiler Error C3380"
description: "Learn more about: Compiler Error C3380"
ms.date: 11/04/2016
f1_keywords: ["C3380"]
helpviewer_keywords: ["C3380"]
---
# Compiler Error C3380

> 'class' : invalid assembly access specifier - only 'public' or 'private' are allowed

## Remarks

When applied to a managed class or struct, the [public](../../cpp/public-cpp.md) and [private](../../cpp/private-cpp.md) keywords indicate whether the class will be exposed through assembly metadata. Only `public` or `private` can be applied to a class in a program compiled with [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

The `ref` and `value` keywords, when used with [/clr](../../build/reference/clr-common-language-runtime-compilation.md), indicate that a class is managed (see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md)).

## Example

The following example generates C3380:

```cpp
// C3380_2.cpp
// compile with: /clr
protected ref class A {   // C3380
// try the following line instead
// ref class A {
public:
   static int i = 9;
};

int main() {
   A^ myA = gcnew A;
   System::Console::WriteLine(myA->i);
}
```
