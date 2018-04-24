---
title: "Using atexit | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "atexit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "atexit function"
ms.assetid: d28fda17-c3d4-4af6-ba44-f44886bbb237
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using atexit
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using atexit](https://docs.microsoft.com/cpp/cpp/using-atexit).  
  
With the [atexit](../c-runtime-library/reference/atexit.md) function, you can specify an exit-processing function that executes prior to program termination. No global static objects initialized prior to the call to `atexit` are destroyed prior to execution of the exit-processing function.  
  
## See Also  
 [Additional Termination Considerations](../cpp/additional-termination-considerations.md)





