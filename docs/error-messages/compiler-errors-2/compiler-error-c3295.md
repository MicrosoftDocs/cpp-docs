---
description: "Learn more about: Compiler Error C3295"
title: "Compiler Error C3295"
ms.date: "11/04/2016"
f1_keywords: ["C3295"]
helpviewer_keywords: ["C3295"]
ms.assetid: 83f0aa4d-0e0a-4905-9f66-fcf9991fc07a
---
# Compiler Error C3295

'#pragma pragma' can only be used at global or namespace scope

Some pragmas cannot be used in a function.  See [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md) for more information.

## Example

The following sample generates C3295.

```cpp
// C3295.cpp
int main() {
   #pragma managed   // C3295
}
```
