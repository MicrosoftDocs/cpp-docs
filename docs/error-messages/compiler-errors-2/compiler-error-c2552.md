---
description: "Learn more about: Compiler Error C2552"
title: "Compiler Error C2552"
ms.date: "11/04/2016"
f1_keywords: ["C2552"]
helpviewer_keywords: ["C2552"]
ms.assetid: 0e0ab759-788a-4faf-9337-80d4b9e2e8c9
---
# Compiler Error C2552

'identifier' : non-aggregates cannot be initialized with initializer list

The aggregate identifier was incorrectly initialized.

[Aggregates](../../c-language/initializing-aggregate-types.md) are defined as:

- Arrays

- Classes, structures, and unions that do not have:

  - Constructors

  - Private or protected members

  - Base classes

  - Virtual functions

In addition, Visual C++ does not allow data types in an aggregate that contains constructors.

The following represent the reasons C2552 may fire when an aggregate initialization is attempted on a type:

- The type has one or more user-defined constructors.

- The type has one ore more non-static, private data members.

- The type has one or more virtual functions.

- The type has a base class.

- The type is a ref class or CLR interface.

- The type has a non-fixed dimension array (zero-array) whose elements have destructors.

The following sample generates C2552:

```cpp
// C2552.cpp
// compile with: /clr
#include <string>
using namespace std;

struct Pair_Incorrect {
private:
   string m_name;
   double m_val;
};

struct Pair_Correct1 {
public:
   Pair_Correct1(string name, double val)
      : m_name(name), m_val(val) {}

private:
   string m_name;
   double m_val;
};

struct Pair_Correct2 {
public:
   string m_name;
   double m_val;
};

int main() {
   // To fix, add a constructor to this class and use it for
   // initializing the data members, see Pair_Correct1 (below)
   // or
   // Do not have any private or protected non-static data members,
   // see Pair_Correct2 (below).  Pair_Correct2 is not recommended in
   // case your object model requires some non-static data members to
   // be private or protected

   string name("John");
   Pair_Incorrect pair1 = { name, 0.0 };   // C2552

   // initialize a CLR immutable value type that has a constructor
   System::DateTime dt = {2001, 4, 12, 22, 16, 49, 844};   // C2552

   Pair_Correct1 pair2( name, 0.0 );
   Pair_Correct1 pair3 = Pair_Correct1( name, 0.0 );
   Pair_Correct2 pair4 = { name, 0.0 };
   System::DateTime dt2(2001, 4, 12, 22, 16, 49, 844);
}
```
