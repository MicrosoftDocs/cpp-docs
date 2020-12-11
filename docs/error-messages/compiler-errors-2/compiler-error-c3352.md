---
description: "Learn more about: Compiler Error C3352"
title: "Compiler Error C3352"
ms.date: "11/04/2016"
f1_keywords: ["C3352"]
helpviewer_keywords: ["C3352"]
ms.assetid: f233bed7-474e-425f-aad2-7801578169d4
---
# Compiler Error C3352

'function' : the specified function does not match the delegate type 'type'

The parameter lists for `function` and the delegate do not match.

For more information, see [delegate  (C++ Component Extensions)](../../extensions/delegate-cpp-component-extensions.md).

The following sample generates C3352:

```cpp
// C3352.cpp
// compile with: /clr
delegate int D( int, int );
ref class C {
public:
   int mf( int ) {
      return 1;
   }

   // Uncomment the following line to resolve.
   // int mf(int, int) { return 1; }
};

int main() {
   C^ pC = gcnew C;
   System::Delegate^ pD = gcnew D( pC, &C::mf );   // C3352
}
```
