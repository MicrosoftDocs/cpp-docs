---
title: "Compiler Warning (level 1) C4325 | Microsoft Docs"
ms.custom: ""
ms.date: "08/27/2018"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4325"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4325"]
ms.assetid: 8127a08c-d626-481b-aa7b-04a3fdc9a9ec
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4325

> attributes for standard section '*section*' ignored

## Remarks

You may not change the attributes of a standard section. For example:

```cpp
#pragma section(".sdata", long)
```

This would overwrite the `.sdata` standard section which uses the **short** data type with the **long** data type.

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