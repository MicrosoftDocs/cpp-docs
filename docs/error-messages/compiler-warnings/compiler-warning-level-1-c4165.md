---
description: "Learn more about: Compiler Warning (level 3, off) C4165"
title: "Compiler Warning (level 3, off) C4165"
ms.date: "11/04/2016"
f1_keywords: ["C4165"]
helpviewer_keywords: ["C4165"]
---
# Compiler Warning (level 3, off) C4165

> '`HRESULT`' is being converted to '`bool`'; are you sure this is what you want?

When an `HRESULT` is used in an [`if`](../../cpp/if-else-statement-cpp.md) statement, the `HRESULT` is converted to a [`bool`](../../cpp/bool-cpp.md) unless you explicitly test for the variable as an `HRESULT`.

Warning C4165 is off by default. For more information, see [Compiler Warnings That Are Off By Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following sample generates C4165:

```cpp
// C4165.cpp
// compile with: /W3
#include <windows.h>
#pragma warning(3:4165)

extern HRESULT hr;
int main() {
   if (hr) {
   // try either of the following ...
   // if (FAILED(hr)) { // C4165 expected
   // if (hr != S_OK) {
   }
}
```
