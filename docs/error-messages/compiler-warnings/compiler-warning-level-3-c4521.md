---
description: "Learn more about: Compiler Warning (level 3) C4521"
title: "Compiler Warning (level 3) C4521"
ms.date: "11/04/2016"
f1_keywords: ["C4521"]
helpviewer_keywords: ["C4521"]
ms.assetid: 057d770c-ebcf-44cd-b943-1b1bb1ceaa8c
---
# Compiler Warning (level 3) C4521

'class' : multiple copy constructors specified

The class has multiple copy constructors of a single type. This warning is informational; the constructors are callable in your program.

Use the [warning](../../preprocessor/warning.md) pragma to suppress this warning.

## Example

The following sample generates C4521.

```cpp
// C4521.cpp
// compile with: /EHsc /W3
#include <iostream>

using namespace std;
class A {
public:
   A() { cout << "A's default constructor" << endl; }
   A( A &o ) { cout << "A&" << endl; }
   A( const A &co ) { cout << "const A&" << endl; }   // C4521
};

int main() {
   A o1;         // Calls default constructor.
   A o2( o1 );   // Calls A( A& ).
   const A o3;   // Calls default constructor.
   A o4( o3 );   // Calls A( const A& ).
}
```
