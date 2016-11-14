---
title: "Writing a Termination Handler | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "structured exception handling, termination handlers"
  - "exceptions, terminating"
  - "termination handlers, writing"
  - "handlers"
  - "handlers, termination"
  - "termination handlers"
  - "exception handling, termination handlers"
  - "try-catch keyword [C++], termination handlers"
ms.assetid: 52aa1f8f-f8dd-44b8-be94-5e2fc88d44fb
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
# Writing a Termination Handler
Unlike an exception handler, a termination handler is always executed, regardless of whether the protected block of code terminated normally. The sole purpose of the termination handler should be to ensure that resources, such as memory, handles, and files, are properly closed regardless of how a section of code finishes executing.  
  
 Termination handlers use the try-finally statement.  
  
## What do you want to know more about?  
  
-   [The try-finally statement](../cpp/try-finally-statement.md)  
  
-   [Cleaning up resources](../cpp/cleaning-up-resources.md)  
  
-   [Timing of actions in exception handling](../cpp/timing-of-exception-handling-a-summary.md)  
  
-   [Restrictions on termination handlers](../cpp/restrictions-on-termination-handlers.md)  
  
## See Also  
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)