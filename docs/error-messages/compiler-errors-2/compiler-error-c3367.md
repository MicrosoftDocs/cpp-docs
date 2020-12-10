---
description: "Learn more about: Compiler Error C3367"
title: "Compiler Error C3367"
ms.date: "11/04/2016"
f1_keywords: ["C3367"]
helpviewer_keywords: ["C3367"]
ms.assetid: e675d42b-f5b0-4d43-aab1-1f5024233102
---
# Compiler Error C3367

'static_member_function' : cannot use static function to create an unbound delegate

When you call an unbound delegate, you must pass an instance of an object. Since a static member function is called through the class name, you can only instantiate an unbound delegate with an instance member function.

For more information about unbound delegates, see [How to: Define and Use Delegates (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md).

## Example

The following sample generates C3367.

```cpp
// C3367.cpp
// compile with: /clr
ref struct R {
   void b() {}
   static void f() {}
};

delegate void Del(R^);

int main() {
   Del ^ a = gcnew Del(&R::b);   // OK
   Del ^ b = gcnew Del(&R::f);   // C3367
}
```
