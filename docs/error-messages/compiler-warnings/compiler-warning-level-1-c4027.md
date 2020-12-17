---
description: "Learn more about compiler warning (level 1) C4027"
title: "Compiler Warning (level 1) C4027"
ms.date: 12/16/2020
f1_keywords: ["C4027"]
helpviewer_keywords: ["C4027"]
---
# Compiler Warning (level 1) C4027

> function declared without formal parameter list

The function declaration had no formal parameters, but there are formal parameters in the function definition or actual parameters in a call.

The compiler accepts, but warns, on an old C-style forward declaration of a function name without a parameter list. On later calls to this function, the compiler assumes that the function takes actual parameters of the types found in the function definition or call. We recommend you modify your function declaration
to match the signature of the function definition.
