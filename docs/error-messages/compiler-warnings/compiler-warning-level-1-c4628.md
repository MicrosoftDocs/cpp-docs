---
description: "Learn more about: Compiler Warning (level 1) C4628"
title: "Compiler Warning (level 1) C4628"
ms.date: "11/04/2016"
f1_keywords: ["C4628"]
helpviewer_keywords: ["C4628"]
ms.assetid: 20fdc6f8-5f6a-40cc-aff8-c7ccf3d8ec26
---
# Compiler Warning (level 1) C4628

digraphs not supported with -Ze. Character sequence 'digraph' not interpreted as alternate token for 'char'

Digraphs are not supported under [/Ze](../../build/reference/za-ze-disable-language-extensions.md). This warning will be followed by an error.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4628:

```cpp
// C4628.cpp
// compile with: /WX
#pragma warning(default : 4628)
int main()
<%   // C4628 <% digraph for {
}
```
