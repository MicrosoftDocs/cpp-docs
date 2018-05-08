---
title: "Using abort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["Abort"]
dev_langs: ["C++"]
helpviewer_keywords: ["abort function"]
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Using abort
Calling the [abort](../c-runtime-library/reference/abort.md) function causes immediate termination. It bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the `atexit` function.  
  
## See Also  
 [Additional Termination Considerations](../cpp/additional-termination-considerations.md)