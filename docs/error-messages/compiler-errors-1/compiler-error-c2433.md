---
description: "Learn more about: Compiler Error C2433"
title: "Compiler Error C2433"
ms.date: "11/04/2016"
f1_keywords: ["C2433"]
helpviewer_keywords: ["C2433"]
ms.assetid: 7079fedd-6059-4125-82ef-ebe275f1f9d1
---
# Compiler Error C2433

'identifier' : 'modifier' not permitted on data declarations

The **`friend`**, **`virtual`**, and **`inline`** modifiers cannot be used for data declarations.

## Example

The following sample generates C2433.

```cpp
// C2433.cpp
class C{};

int main() {
   inline C c;   // C2433
}
```
