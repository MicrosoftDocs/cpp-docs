---
description: "Learn more about: Compiler Error C2390"
title: "Compiler Error C2390"
ms.date: "11/04/2016"
f1_keywords: ["C2390"]
helpviewer_keywords: ["C2390"]
ms.assetid: 06b749ee-d072-4db1-b229-715f2c0728b5
---
# Compiler Error C2390

'identifier' : incorrect storage class 'specifier'

The storage class is not valid for the global-scope identifier. The default storage class is used in place of the invalid class.

Possible resolutions:

- If the identifier is a function, declare it with **`extern`** storage.

- If the identifier is a formal parameter or local variable, declare it with auto storage.

- If the identifier is a global variable, declare it with no storage class (auto storage).

## Example

- The following sample generates C2390:

```cpp
// C2390.cpp
register int i;   // C2390

int main() {
   register int j;   // OK
}
```
