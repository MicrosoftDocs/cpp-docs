---
title: "Using abort | Microsoft Docs"
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
  - "Abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "abort function"
ms.assetid: 3ba39b78-ef74-4a8d-8dee-2d62442de174
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Using abort
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Using abort](https://docs.microsoft.com/cpp/cpp/using-abort).  
  
Calling the [abort](../c-runtime-library/reference/abort.md) function causes immediate termination. It bypasses the normal destruction process for initialized global static objects. It also bypasses any special processing that was specified using the `atexit` function.  
  
## See Also  
 [Additional Termination Considerations](../cpp/additional-termination-considerations.md)





