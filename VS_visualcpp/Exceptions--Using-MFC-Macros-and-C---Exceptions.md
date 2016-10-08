---
title: "Exceptions: Using MFC Macros and C++ Exceptions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d664a83d-879b-44d4-bdf0-029f0aca69e9
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Exceptions: Using MFC Macros and C++ Exceptions
This article discusses considerations for writing code that uses both the MFC exception-handling macros and the C++ exception-handling keywords.  
  
 This article covers the following topics:  
  
-   [Mixing exception keywords and macros](#_core_mixing_exception_keywords_and_macros)  
  
-   [Try blocks inside catch blocks](#_core_try_blocks_inside_catch_blocks)  
  
##  <a name="_core_mixing_exception_keywords_and_macros"></a> Mixing Exception Keywords and Macros  
 You can mix MFC exception macros and C++ exception keywords in the same program. But you cannot mix MFC macros with C++ exception keywords in the same block because the macros delete exception objects automatically when they go out of scope, whereas code using the exception-handling keywords does not. For more information, see the article [Exceptions: Catching and Deleting Exceptions](../VS_visualcpp/Exceptions--Catching-and-Deleting-Exceptions.md).  
  
 The main difference between the macros and the keywords is that the macros "automatically" delete a caught exception when the exception goes out of scope. Code using the keywords does not; exceptions caught in a catch block must be explicitly deleted. Mixing macros and C++ exception keywords can cause memory leaks when an exception object is not deleted, or heap corruption when an exception is deleted twice.  
  
 The following code, for example, invalidates the exception pointer:  
  
 [!CODE [NVC_MFCExceptions#10](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#10)]  
  
 The problem occurs because `e` is deleted when execution passes out of the "inner" **CATCH** block. Using the `THROW_LAST` macro instead of the **THROW** statement will cause the "outer" **CATCH** block to receive a valid pointer:  
  
 [!CODE [NVC_MFCExceptions#11](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#11)]  
  
##  <a name="_core_try_blocks_inside_catch_blocks"></a> Try Blocks Inside Catch Blocks  
 You cannot re-throw the current exception from within a **try** block that is inside a **CATCH** block. The following example is invalid:  
  
 [!CODE [NVC_MFCExceptions#12](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCExceptions#12)]  
  
 For more information, see [Exceptions: Examining Exception Contents](../VS_visualcpp/Exceptions--Examining-Exception-Contents.md).  
  
## See Also  
 [Exception Handling](../VS_visualcpp/Exception-Handling-in-MFC.md)