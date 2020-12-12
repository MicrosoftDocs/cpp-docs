---
description: "Learn more about: Compiler Error C2715"
title: "Compiler Error C2715"
ms.date: "11/04/2016"
f1_keywords: ["C2715"]
helpviewer_keywords: ["C2715"]
ms.assetid: c81567a7-5b65-468f-aaf9-835f91e468e4
---
# Compiler Error C2715

'type' : cannot throw or catch this type

Value types are not valid arguments when using exception handling in managed code (see [Exception Handling](../../extensions/exception-handling-cpp-component-extensions.md) for more information).

```cpp
// C2715a.cpp
// compile with: /clr
using namespace System;

value struct V {
   int i;
};

void f1() {
   V v;
   v.i = 10;
   throw v;   // C2715
   // try the following line instead
   // throw ((V^)v);
}

int main() {
   try {
      f1();
   }

   catch(V v) { if ( v.i == 10 ) {   // C2715
   // try the following line instead
   // catch(V^ pv) { if ( pv->i == 10 ) {
         Console::WriteLine("caught 10 - looks OK");
      }
      else {
         Console::WriteLine("catch looks bad");
      }
   }
   catch(...) {
      Console::WriteLine("catch looks REALLY bad");
   }
}
```
