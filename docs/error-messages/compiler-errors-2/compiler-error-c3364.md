---
title: "Compiler Error C3364"
description: "Learn more about: Compiler Error C3364"
ms.date: 11/04/2016
f1_keywords: ["C3364"]
helpviewer_keywords: ["C3364"]
---
# Compiler Error C3364

> 'delegate': delegate constructor: argument must be pointer to member function of managed class or global function

## Remarks

The second parameter of the delegate's constructor takes either the address of a member function or the address of a static member function of any class. Both are treated as simple addresses.

## Example

The following example generates C3364:

```cpp
// C3364_2.cpp
// compile with: /clr

delegate int D( int, int );

ref class C {
public:
   int mf( int, int ) {
      return 1;
   }
};

int main() {
   C^ pC = gcnew C;
   System::Delegate^ pD = gcnew D( pC,pC->mf( 1, 2 ) ); // C3364

   // try the following line instead
   // System::Delegate^ pD = gcnew D(pC, &C::mf);
}
```
