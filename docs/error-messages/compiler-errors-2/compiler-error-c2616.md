---
title: "Compiler Error C2616"
description: "Learn more about: Compiler Error C2616"
ms.date: 11/04/2016
f1_keywords: ["C2616"]
helpviewer_keywords: ["C2616"]
---
# Compiler Error C2616

> 'conversion' : cannot implicitly convert a non-lvalue 'type1' to a 'type2' that is not const

## Remarks

A reference cannot be initialized from a non-lvalue.

This is an error under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) and a warning under Microsoft extensions (**/Ze**).
