---
description: "Learn more about: Compiler Warning (Level 1) C4729"
title: "Compiler Warning (Level 1) C4729"
ms.date: "11/04/2016"
f1_keywords: ["C4729"]
helpviewer_keywords: ["C4729"]
ms.assetid: 36a0151f-f258-48d9-9444-ae6d41ff70a4
---
# Compiler Warning (Level 1) C4729

function too big for flow graph based warnings

This warning is generated when a function is too big to be compiled with reliable checking for situations that would generate a warning. This warning is only generated when the [/Od](../../build/reference/od-disable-debug.md) compiler option used.

To resolve this warning, break the function into smaller functions.
