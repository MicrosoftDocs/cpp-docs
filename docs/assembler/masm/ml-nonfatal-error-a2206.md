---
title: "ML Nonfatal Error A2206 | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A2206"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2206"]
ms.assetid: 711846d0-5a09-4353-8857-60588c25526a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2206

**missing operator in expression**

An expression cannot be evaluated because it is missing an operator. This error message may also be a side-effect of a preceding program error.

The following line will generate this error:

```asm
value1 = ( 1 + 2 ) 3
```

## See also

[ML Error Messages](../../assembler/masm/ml-error-messages.md)<br/>