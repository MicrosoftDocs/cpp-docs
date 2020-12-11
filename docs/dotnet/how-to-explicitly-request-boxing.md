---
description: "Learn more about: How to: Explicitly Request Boxing"
title: "How to: Explicitly Request Boxing"
ms.date: "11/04/2016"
helpviewer_keywords: ["boxing, explicitly requesting"]
ms.assetid: 1359e6e5-162d-4f5d-9b6a-1690d93df3ee
---
# How to: Explicitly Request Boxing

You can explicitly request boxing by assigning a variable to a variable of type `Object`.

## Example

```cpp
// vcmcppv2_explicit_boxing3.cpp
// compile with: /clr
using namespace System;

void f(int i) {
   Console::WriteLine("f(int i)");
}

void f(Object ^o) {
   Console::WriteLine("f(Object^ o)");
}

int main() {
   int i = 5;
   Object ^ O = i;   // forces i to be boxed
   f(i);
   f(O);
   f( (Object^)i );  // boxes i
}
```

```Output
f(int i)
f(Object^ o)
f(Object^ o)
```

## See also

[Boxing](../extensions/boxing-cpp-component-extensions.md)
