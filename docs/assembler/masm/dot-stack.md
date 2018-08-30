---
title: ".STACK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "reference"
f1_keywords: [".STACK"]
dev_langs: ["C++"]
helpviewer_keywords: [".STACK directive"]
ms.assetid: 70019463-5d4f-41b6-8464-023a8ac2466f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# .STACK
When used with [.MODEL](../../assembler/masm/dot-model.md), defines a stack segment (with segment name STACK). The optional `size` specifies the number of bytes for the stack (default 1,024). The `.STACK` directive automatically closes the stack statement.

## Syntax

```

.STACK [[size]]
```

## See Also
[Directives Reference](../../assembler/masm/directives-reference.md)<br/>