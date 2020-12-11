---
description: "Learn more about: Compiler Warning (level 4) C4960"
title: "Compiler Warning (level 4) C4960"
ms.date: "11/04/2016"
f1_keywords: ["C4960"]
helpviewer_keywords: ["C4960"]
ms.assetid: 3b4ed286-9e8d-46f1-af0c-00ba669693a9
---
# Compiler Warning (level 4) C4960

'function' is too big to be profiled

When using [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), the compiler detected an input module with a function larger than 65,535 instructions. Such a large function is not available for profile-guided optimizations.

To resolve this warning, reduce the size of the function.
