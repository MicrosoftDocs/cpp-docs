---
description: "Learn more about: Compiler Error C2470"
title: "Compiler Error C2470"
ms.date: "11/04/2016"
f1_keywords: ["C2470"]
helpviewer_keywords: ["C2470"]
ms.assetid: e17d2cb8-b84c-447c-976a-625f0c96f3fe
---
# Compiler Error C2470

'function' : looks like a function definition, but there is no parameter list; skipping apparent body

A function definition is missing its argument list.

The following sample generates C2470:

```cpp
// C2470.cpp
int MyFunc {};  // C2470
void MyFunc2() {};  //OK

int main(){
   MyFunc();
   MyFunc2();
}
```
