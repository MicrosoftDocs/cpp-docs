---
description: "Learn more about: Compiler Warning (level 1) C4616"
title: "Compiler Warning (level 1) C4616"
ms.date: "11/04/2016"
f1_keywords: ["C4616"]
helpviewer_keywords: ["C4616"]
ms.assetid: 71e15265-c5bc-42ce-a6a9-4879892472b1
---
# Compiler Warning (level 1) C4616

\#pragma warning : warning number 'number' not a valid compiler warning

The warning number specified in the [warning](../../preprocessor/warning.md) pragma cannot be reassigned. The pragma was ignored.

The following sample generates C4616:

```cpp
// C4616.cpp
// compile with: /W1 /c
#pragma warning( disable : 0 )   // C4616
#pragma warning( disable : 999 )   // OK
#pragma warning( disable : 4998 )   // OK
```
