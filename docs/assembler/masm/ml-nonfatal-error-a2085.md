---
title: "ML Nonfatal Error A2085 | Microsoft Docs"
ms.custom: ""
ms.date: "08/30/2018"
ms.technology: ["cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A2085"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2085"]
ms.assetid: c2fef415-a32b-4249-896c-6d981fc6e327
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2085

**instruction or register not accepted in current CPU mode**

An attempt was made to use an instruction, register, or keyword that was not valid for the current processor mode.

For example, 32-bit registers require [.386](../../assembler/masm/dot-386.md) or above. Control registers such as CR0 require privileged mode [.386P](../../assembler/masm/dot-386p.md) or above. This error will also be generated for the **NEAR32**, **FAR32**, and **FLAT** keywords, which require .**386** or above.

## See also

[ML Error Messages](../../assembler/masm/ml-error-messages.md)<br/>