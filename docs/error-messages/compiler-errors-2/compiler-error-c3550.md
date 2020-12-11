---
description: "Learn more about: Compiler Error C3550"
title: "Compiler Error C3550"
ms.date: "11/04/2016"
f1_keywords: ["C3550"]
helpviewer_keywords: ["C3550"]
ms.assetid: 9f2d5ffc-e429-41a1-89e3-7acc4fd47e14
---
# Compiler Error C3550

only plain 'decltype(auto)' is allowed in this context

If `decltype(auto)` is used as a placeholder for the return type of a function, it must be used by itself. It cannot be used as part of a pointer declaration (`decltype(auto*)`), a reference declaration (`decltype(auto&)`), or any other such qualification.

## See also

[auto](../../cpp/auto-cpp.md)
