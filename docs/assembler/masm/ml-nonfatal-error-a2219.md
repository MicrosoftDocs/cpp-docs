---
title: "ML Nonfatal Error A2219 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A2219"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2219"]
ms.assetid: 5ebc2f40-e47e-4f8e-b7b9-960b9cfc9f6d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2219
**Bad alignment for offset in unwind code**  
  
 The operand for [.ALLOCSTACK](../../assembler/masm/dot-allocstack.md) and [.SAVEREG](../../assembler/masm/dot-savereg.md) must be a multiple of 8.  The operand for [.SAVEXMM128](../../assembler/masm/dot-savexmm128.md) and [.SETFRAME](../../assembler/masm/dot-setframe.md) must be a multiple of 16.  
  
## See Also  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)