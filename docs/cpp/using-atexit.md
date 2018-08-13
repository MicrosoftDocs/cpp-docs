---
title: "Using atexit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["atexit"]
dev_langs: ["C++"]
helpviewer_keywords: ["atexit function"]
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Using atexit
With the [atexit](../c-runtime-library/reference/atexit.md) function, you can specify an exit-processing function that executes prior to program termination. No global static objects initialized prior to the call to **atexit** are destroyed prior to execution of the exit-processing function.  
  
## See also  
 [Additional Termination Considerations](../cpp/additional-termination-considerations.md)