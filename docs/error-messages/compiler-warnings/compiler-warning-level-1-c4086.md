---
description: "Learn more about: Compiler Warning (level 1) C4086"
title: "Compiler Warning (level 1) C4086"
ms.date: "11/04/2016"
f1_keywords: ["C4086"]
helpviewer_keywords: ["C4086"]
ms.assetid: 9248831b-22bf-47af-8684-bfadb17e94fc
---
# Compiler Warning (level 1) C4086

expected pragma parameter to be '1', '2', '4', '8', or '16'

The pragma parameter does not have the required value (1, 2, 4, 8, or 16).

## Example

```cpp
// C4086.cpp
// compile with: /W1 /LD
#pragma pack( 3 ) // C4086
```
