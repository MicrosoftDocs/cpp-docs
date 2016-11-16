---
title: "abort Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
ms.assetid: 3352bcc4-1a8a-4e1f-8dcc-fe30f6b50f2d
caps.latest.revision: 7
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
# abort Function
The **abort** function, also declared in the standard include file STDLIB.H, terminates a C++ program. The difference between **exit** and **abort** is that **exit** allows the C++ run-time termination processing to take place (global object destructors will be called), whereas **abort** terminates the program immediately. For more information, see [abort](../c-runtime-library/reference/abort.md) in the *Run-Time Library Reference*.  
  
## See Also  
 [Program Termination](../cpp/program-termination.md)