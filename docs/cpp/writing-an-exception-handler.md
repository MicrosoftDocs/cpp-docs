---
title: "Writing an Exception Handler | Microsoft Docs"
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
  - "structured exception handling, exception handlers"
  - "exception handling, exception handlers"
ms.assetid: 71473fee-f773-4a34-bf12-82a3af79579c
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
# Writing an Exception Handler
Exception handlers are typically used to respond to specific errors. You can use the exception-handling syntax to filter out all exceptions other than those you know how to handle. Other exceptions should be passed to other handlers (possibly in the run-time library or the operating system) written to look for those specific exceptions.  
  
 Exception handlers use the try-except statement.  
  
## What do you want to know more about?  
  
-   [The try-except statement](../cpp/try-except-statement.md)  
  
-   [Writing an exception filter](../cpp/writing-an-exception-filter.md)  
  
-   [Raising software exceptions](../cpp/raising-software-exceptions.md)  
  
-   [Hardware exceptions](../cpp/hardware-exceptions.md)  
  
-   [Restrictions on exception handlers](../cpp/restrictions-on-exception-handlers.md)  
  
## See Also  
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)