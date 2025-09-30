---
title: "Compiler Error C2713"
description: "Describes Microsoft C/C++ compiler error C2713."
ms.date: 08/25/2020
f1_keywords: ["C2713"]
helpviewer_keywords: ["C2713"]
---
# Compiler Error C2713

> only one form of exception handling permitted per function

## Remarks

You can't use structured exception handling (**`__try`**/**`__except`**) and C++ exception handling (**`try`**/**`catch`**) in the same function.
