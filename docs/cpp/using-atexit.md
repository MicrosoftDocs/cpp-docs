---
title: "Using atexit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Using atexit
With the [atexit](../c-runtime-library/reference/atexit.md) function, you can specify an exit-processing function that executes prior to program termination. No global static objects initialized prior to the call to `atexit` are destroyed prior to execution of the exit-processing function.  
  
## See Also  
 [Additional Termination Considerations](../cpp/additional-termination-considerations.md)