---
description: "Learn more about: Compiler Warning (level 4) C4400"
title: "Compiler Warning (level 4) C4400"
ms.date: "11/04/2016"
f1_keywords: ["C4400"]
helpviewer_keywords: ["C4400"]
ms.assetid: f135fe98-4f92-4e07-9d71-2621b36ee755
---
# Compiler Warning (level 4) C4400

'type' : const/volatile qualifiers on this type are not supported

The [const](../../cpp/const-cpp.md)and [volatile](../../cpp/volatile-cpp.md)qualifiers will not work with variables of common language runtime types.

## Example

The following sample generates C4400.

```cpp
// C4400.cpp
// compile with: /clr /W4
// C4401 expected
using namespace System;
#pragma warning (disable : 4101)
int main() {
   const String^ str;   // C4400
   volatile String^ str2;   // C4400
}
```
