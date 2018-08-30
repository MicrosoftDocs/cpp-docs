---
title: "ML Nonfatal Error A2119 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-masm"]
ms.topic: "error-reference"
f1_keywords: ["A2119"]
dev_langs: ["C++"]
helpviewer_keywords: ["A2119"]
ms.assetid: 4d4ee6da-3a58-495c-a1da-c3a405c4c18d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ML Nonfatal Error A2119
**language type must be specified**

A procedure definition or prototype was not given a language type.

A language type must be declared in each procedure definition or prototype if a default language type is not specified. A default language type is set using either the [.MODEL](../../assembler/masm/dot-model.md) directive, **OPTION LANG**, or the ML command-line options **/Gc** or **/Gd**.

## See Also
[ML Error Messages](../../assembler/masm/ml-error-messages.md)<br/>