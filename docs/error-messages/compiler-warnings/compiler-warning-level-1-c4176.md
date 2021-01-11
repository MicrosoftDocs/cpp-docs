---
description: "Learn more about: Compiler Warning (level 1) C4176"
title: "Compiler Warning (level 1) C4176"
ms.date: "11/04/2016"
f1_keywords: ["C4176"]
helpviewer_keywords: ["C4176"]
ms.assetid: cfffb934-219a-4a63-9df6-ba54405bf766
---
# Compiler Warning (level 1) C4176

'subcomponent' : unknown subcomponent for #pragma component browser

The **component** pragma contains an invalid subcomponent. To exclude references to a particular name, you must use the **references** option before the name.

## Example

```cpp
// C4176.cpp
// compile with: /W1 /LD
#pragma component(browser, off, i)  // C4176
#pragma component(browser, off, references, i) // ok
```
