---
description: "Learn more about: Compiler Error C2249"
title: "Compiler Error C2249"
ms.date: "11/04/2016"
f1_keywords: ["C2249"]
helpviewer_keywords: ["C2249"]
ms.assetid: bdd6697c-e04b-49b9-8e40-d9eb6d74f2b6
---
# Compiler Error C2249

'member' : no accessible path to access member declared in virtual base 'class'

The `member` is inherited from a nonpublic **`virtual`** base class or structure.

## Examples

The following sample generates C2249.

```cpp
// C2249.cpp
class A {
private:
   void privFunc( void ) {};
public:
   void pubFunc( void ) {};
};

class B : virtual public A {} b;

int main() {
   b.privFunc();    // C2249, private member of A
   b.pubFunc();    // OK
}
```

C2249 can also occur if you try to assign a stream from the C++ Standard Library to another stream.  The following sample generates C2249.

```cpp
// C2249_2.cpp
#include <iostream>
using namespace std;
int main() {
   cout = cerr;   // C2249
   #define cout cerr;   // OK
}
```
