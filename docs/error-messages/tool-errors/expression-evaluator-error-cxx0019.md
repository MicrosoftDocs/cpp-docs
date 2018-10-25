---
title: "Expression Evaluator Error CXX0019 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["CXX0019"]
dev_langs: ["C++"]
helpviewer_keywords: ["CXX0019", "CAN0019"]
ms.assetid: 4c6431fd-3310-4a61-934d-58b070b330fe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Expression Evaluator Error CXX0019

bad type cast

The C expression evaluator cannot perform the type cast as written.

This error is identical to CAN0019.

### To fix by checking the following possible causes

1. The specified type is unknown.

1. There were too many levels of pointer types. For example, the type cast

    ```
    (char **)h_message
    ```

   cannot be evaluated by the C expression evaluator.