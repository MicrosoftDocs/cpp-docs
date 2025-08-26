---
title: "Compiler Warning (level 1) C4174"
description: "Learn more about: Compiler Warning (level 1) C4174"
ms.date: 11/04/2016
f1_keywords: ["C4174"]
helpviewer_keywords: ["C4174"]
---
# Compiler Warning (level 1) C4174

> 'name' : not available as a #pragma component

## Example

The following example generates C4174:

```cpp
// C4174.cpp
// compile with: /W1
#pragma component(info)  // C4174; unknown
#pragma component(browser, off)  // turn off browse info
int main()
{
}
```
