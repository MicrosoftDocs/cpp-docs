---
description: "Learn more about: Compiler Error C2825"
title: "Compiler Error C2825"
ms.date: "11/04/2016"
f1_keywords: ["C2825"]
helpviewer_keywords: ["C2825"]
ms.assetid: c832f1c1-5184-4fc2-9356-12b21daa7af3
---
# Compiler Error C2825

var : must be a class or namespace when followed by '::'

An unsuccessful attempt was made to form a qualified name.

For example, make sure that your code does not contain a function declaration where the function name begins with ::.

## Example

The following sample generates C2825:

```cpp
// C2825.cpp
typedef int i;
int main() {
   int* p = new int;
   p->i::i();   // C2825
   // try the following line instead
   // p->i::~i();
}
```
