---
title: "Compiler Warning (level 1) C4926"
description: "Learn more about: Compiler Warning (level 1) C4926"
ms.date: 11/04/2016
f1_keywords: ["C4926"]
helpviewer_keywords: ["C4926"]
---
# Compiler Warning (level 1) C4926

> 'identifier': symbol is already defined: attributes ignored

## Remarks

A forward declaration was found but an attributed construct with the same name already exists. The attributes for the forward declaration are ignored.

## Example

The following example generates C4926:

```cpp
// C4926.cpp
// compile with: /W1
[module(name="MyLib")];

[coclass]
struct a {
};

[coclass]
struct a;   // C4926

int main() {
}
```
