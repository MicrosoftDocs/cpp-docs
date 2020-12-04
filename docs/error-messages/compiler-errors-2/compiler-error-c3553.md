---
description: "Learn more about: Compiler Error C3553"
title: "Compiler Error C3553"
ms.date: "11/04/2016"
f1_keywords: ["C3553"]
helpviewer_keywords: ["C3553"]
ms.assetid: 7f84bf37-6419-4ad3-ab30-64266100b930
---
# Compiler Error C3553

> decltype expects an expression not a type

The `decltype()` keyword requires an expression as an argument, not the name of a type. For example, the last statement in the following code fragment yields error C3553.

```cpp
int x = 0;
decltype(x+1);
decltype(int); // C3553
```
