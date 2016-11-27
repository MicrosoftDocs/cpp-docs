---
title: "Exceptions: Using MFC Macros and C++ Exceptions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exception objects"
  - "memory leaks, exception object not deleted"
  - "exception handling, MFC"
  - "try-catch exception handling, mixing MFC macros and C++ keywords"
  - "exception objects, deleting"
  - "exceptions, MFC macros vs. C++ keywords"
  - "catch blocks, mixed"
  - "exception handling, mixed-language"
  - "nested try blocks"
  - "catch blocks, explicitly deleting code in"
  - "try-catch exception handling, nested try blocks"
  - "heap corruption"
  - "nested catch blocks"
ms.assetid: d664a83d-879b-44d4-bdf0-029f0aca69e9
caps.latest.revision: 10
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
# Exceptions: Using MFC Macros and C++ Exceptions
This article discusses considerations for writing code that uses both the MFC exception-handling macros and the C++ exception-handling keywords.  
  
 This article covers the following topics:  
  
-   [Mixing exception keywords and macros](#_core_mixing_exception_keywords_and_macros)  
  
-   [Try blocks inside catch blocks](#_core_try_blocks_inside_catch_blocks)  
  
##  <a name="_core_mixing_exception_keywords_and_macros"></a> Mixing Exception Keywords and Macros  
 You can mix MFC exception macros and C++ exception keywords in the same program. But you cannot mix MFC macros with C++ exception keywords in the same block because the macros delete exception objects automatically when they go out of scope, whereas code using the exception-handling keywords does not. For more information, see the article [Exceptions: Catching and Deleting Exceptions](../mfc/exceptions-catching-and-deleting-exceptions.md).  
  
 The main difference between the macros and the keywords is that the macros "automatically" delete a caught exception when the exception goes out of scope. Code using the keywords does not; exceptions caught in a catch block must be explicitly deleted. Mixing macros and C++ exception keywords can cause memory leaks when an exception object is not deleted, or heap corruption when an exception is deleted twice.  
  
 The following code, for example, invalidates the exception pointer:  
  
 [!code-cpp[NVC_MFCExceptions#10](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_1.cpp)]  
  
 The problem occurs because `e` is deleted when execution passes out of the "inner" **CATCH** block. Using the `THROW_LAST` macro instead of the **THROW** statement will cause the "outer" **CATCH** block to receive a valid pointer:  
  
 [!code-cpp[NVC_MFCExceptions#11](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_2.cpp)]  
  
##  <a name="_core_try_blocks_inside_catch_blocks"></a> Try Blocks Inside Catch Blocks  
 You cannot re-throw the current exception from within a **try** block that is inside a **CATCH** block. The following example is invalid:  
  
 [!code-cpp[NVC_MFCExceptions#12](../mfc/codesnippet/cpp/exceptions-using-mfc-macros-and-cpp-exceptions_3.cpp)]  
  
 For more information, see [Exceptions: Examining Exception Contents](../mfc/exceptions-examining-exception-contents.md).  
  
## See Also  
 [Exception Handling](../mfc/exception-handling-in-mfc.md)

