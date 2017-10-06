---
title: "Restrictions on Exception Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["restrictions, exception handlers", "exception handling [C++], exception handlers"]
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Restrictions on Exception Handlers
The principal limitation to using exception handlers in code is that you cannot use a `goto` statement to jump into a `__try` statement block. Instead, you must enter the statement block through normal flow of control. You can jump out of a `__try` statement block and nest exception handlers as you choose.  
  
## See Also  
 [Writing an Exception Handler](../cpp/writing-an-exception-handler.md)   
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)