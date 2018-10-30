---
title: "ML Warning A4012"
ms.date: "08/30/2018"
ms.topic: "error-reference"
f1_keywords: ["A4012"]
helpviewer_keywords: ["A4012"]
ms.assetid: 842b1259-9679-4eeb-a02d-672a583a94e5
---
# ML Warning A4012

**line number information for segment without class 'CODE'**

There were instructions in a segment that did not have a class name that ends with "CODE." The assembler did not generate CodeView information for these instructions.

CodeView cannot process modules with code in segments with class names that do not end with "CODE."

## See also

[ML Error Messages](../../assembler/masm/ml-error-messages.md)<br/>