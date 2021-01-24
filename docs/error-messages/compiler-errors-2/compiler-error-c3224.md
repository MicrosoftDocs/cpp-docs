---
description: "Learn more about: Compiler Error C3224"
title: "Compiler Error C3224"
ms.date: "11/04/2016"
f1_keywords: ["C3224"]
helpviewer_keywords: ["C3224"]
ms.assetid: 129be22f-8f3e-4fc6-9ccd-d27d8ef91251
---
# Compiler Error C3224

'type' : no overloaded generic class takes 'number' generic type arguments

The compiler failed to find an appropriate overload.

The following sample generates C3224:

```
// C3224.cs
// compile with: /target:library
public class C<T> {}
public class C<T,U> {}
```

And then,

```cpp
// C3224b.cpp
// compile with: /clr
#using "C3224.dll"
int main() {
   C<int,int,int>^ c = gcnew C<int,int,int>();   // C3224
   C<int,int>^ c2 = gcnew C<int,int>();   // OK
}
```
