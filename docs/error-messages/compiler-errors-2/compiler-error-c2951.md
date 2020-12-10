---
description: "Learn more about: Compiler Error C2951"
title: "Compiler Error C2951"
ms.date: "11/04/2016"
f1_keywords: ["C2951"]
helpviewer_keywords: ["C2951"]
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
---
# Compiler Error C2951

type declarations are only permitted at global, namespace, or class scope

You cannot declare a generic or template class outside global or namespace scope. If you make your generic or template declarations in an include file, make sure the include file is at global scope.

The following sample generates C2951:

```cpp
// C2951.cpp
template <class T>
class A {};

int main() {
   template <class T>   // C2951
   class B {};
}
```

C2951 can also occur when using generics:

```cpp
// C2951b.cpp
// compile with: /clr /c

// OK
generic <class T>
ref class GC { };

int main() {
   generic <class T> ref class GC2 {};   // C2951
}
```
