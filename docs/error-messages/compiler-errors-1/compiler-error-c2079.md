---
description: "Learn more about: Compiler Error C2079"
title: "Compiler Error C2079"
ms.date: "11/04/2016"
f1_keywords: ["C2079"]
helpviewer_keywords: ["C2079"]
ms.assetid: ca58d6d5-eccd-40b7-ba14-c003223c5bc7
---
# Compiler Error C2079

'identifier' uses undefined class/struct/union 'name'

The specified identifier is an undefined class, structure, or union.

This error can be caused by initializing an anonymous union.

The following sample generates C2079:

```cpp
// C2079.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   std::ifstream g;   // C2079
}
```

Possible resolution:

```cpp
// C2079b.cpp
// compile with: /EHsc
#include <fstream>
int main( ) {
   std::ifstream g;
}
```

C2079 can also occur if you attempt to declare an object on the stack of a type whose forward declaration is only in scope.

```cpp
// C2079c.cpp
class A;

class B {
   A a;   // C2079
};

class A {};
```

Possible resolution:

```cpp
// C2079d.cpp
// compile with: /c
class A;
class C {};

class B {
   A * a;
   C c;
};

class A {};
```
