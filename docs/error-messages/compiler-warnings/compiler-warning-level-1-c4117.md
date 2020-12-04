---
description: "Learn more about: Compiler Warning (level 1) C4117"
title: "Compiler Warning (level 1) C4117"
ms.date: "11/04/2016"
f1_keywords: ["C4117"]
helpviewer_keywords: ["C4117"]
ms.assetid: c45aa281-4cc1-4dfd-bd32-bd7a60ddd577
---
# Compiler Warning (level 1) C4117

macro name 'name' is reserved; 'Command' ignored

### To fix by checking the following possible causes

1. Trying to define or undefine a predefined macro.

1. Trying to define or undefine the preprocessor operator **defined**.

The following sample generates C4117:

```cpp
// C4117.cpp
// compile with: /W1
#define __FILE__ test         // C4117. __FILE__ is a predefined macro
#define ValidMacroName test   // ok

int main() {
}
```
