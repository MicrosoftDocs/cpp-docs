---
description: "Learn more about: Compiler Error C2783"
title: "Compiler Error C2783"
ms.date: "11/04/2016"
f1_keywords: ["C2783"]
helpviewer_keywords: ["C2783"]
ms.assetid: 1ce94a11-bb8b-4be3-a222-f1f105da74b3
---
# Compiler Error C2783

'declaration' : could not deduce template argument for 'identifier'

The compiler cannot determine a template argument. Default arguments cannot be used to deduce a template argument.

The following sample generates C2783:

```cpp
// C2783.cpp
template<typename T1, typename T2>
T1 f(T2) {
   return 248;
}

int main() {
   f(1);   // C2783
   // try the following line instead
   int i = f<int>(1);
}
```

C2783 can also occur when using generics:

```cpp
// C2783b.cpp
// compile with: /clr
using namespace System;
generic<typename T1, typename T2>
T1 gf(T2) {
   T1 t1 = safe_cast<T1>( Activator::CreateInstance(T1::typeid));
   return t1;
}

ref class MyClass{};

int main() {
   int i;
   i = gf(9);   // C2783

   // OK
   i = gf<int>(9);
}
```
