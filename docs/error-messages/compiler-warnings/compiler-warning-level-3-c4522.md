---
title: "Compiler Warning (level 3) C4522"
description: "Learn more about: Compiler Warning (level 3) C4522"
ms.date: 11/04/2016
f1_keywords: ["C4522"]
helpviewer_keywords: ["C4522"]
---
# Compiler Warning (level 3) C4522

> 'class' : multiple assignment operators specified

## Remarks

The class has multiple assignment operators of a single type. This warning is informational; the constructors are callable in your program.

Use the [warning](../../preprocessor/warning.md) pragma to suppress this warning.

## Example

The following example generates C4522.

```cpp
// C4522.cpp
// compile with: /EHsc /W3
#include <iostream>

using namespace std;
class A {
public:
   A& operator=( A & o ) { cout << "A&" << endl; return *this; }
   A& operator=( const A &co ) { cout << "const A&" << endl; return *this; }   // C4522
};

int main() {
   A o1, o2;
   o2 = o1;
   const A o3;
   o1 = o3;
}
```
