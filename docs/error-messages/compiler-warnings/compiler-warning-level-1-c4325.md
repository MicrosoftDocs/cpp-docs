---
title: "Compiler Warning (level 1) C4325"
description: "Learn more about: Compiler Warning (level 1) C4325"
ms.date: 08/27/2018
f1_keywords: ["C4325"]
helpviewer_keywords: ["C4325"]
---
# Compiler Warning (level 1) C4325

> attributes for standard section '*section*' ignored

## Remarks

You may not change the attributes of a standard section.

## Example

For example:

```cpp
#pragma section(".sdata", long)
```

This would overwrite the `.sdata` standard section which uses the **`short`** data type with the **`long`** data type.

Standard sections whose attributes you may not change include,

- .data

- .sdata

- .bss

- .sbss

- .text

- .const

- .sconst

- .rdata

- .srdata

Additional sections may be added later.

## See also

[section](../../preprocessor/section.md)
