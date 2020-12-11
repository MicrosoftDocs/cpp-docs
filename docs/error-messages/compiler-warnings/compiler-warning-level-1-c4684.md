---
description: "Learn more about: Compiler Warning (level 1) C4684"
title: "Compiler Warning (level 1) C4684"
ms.date: "11/04/2016"
f1_keywords: ["C4684"]
helpviewer_keywords: ["C4684"]
ms.assetid: e95f1a83-2784-4b05-ae94-12148e056e26
---
# Compiler Warning (level 1) C4684

'attribute' : WARNING!! attribute may cause invalid code generation: use with caution

You used an attribute that should not commonly be used.

The following sample generates C4684:

```cpp
// C4684.cpp
// compile with: /W1 /LD
[module(name="xx")]; // C4684 expected
[no_injected_text];
```
