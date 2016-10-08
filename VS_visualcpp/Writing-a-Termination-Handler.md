---
title: "Writing a Termination Handler"
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
ms.topic: language-reference
ms.assetid: 52aa1f8f-f8dd-44b8-be94-5e2fc88d44fb
caps.latest.revision: 7
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
# Writing a Termination Handler
Unlike an exception handler, a termination handler is always executed, regardless of whether the protected block of code terminated normally. The sole purpose of the termination handler should be to ensure that resources, such as memory, handles, and files, are properly closed regardless of how a section of code finishes executing.  
  
 Termination handlers use the try-finally statement.  
  
## What do you want to know more about?  
  
-   [The try-finally statement](../VS_visualcpp/try-finally-Statement.md)  
  
-   [Cleaning up resources](../VS_visualcpp/Cleaning-up-Resources.md)  
  
-   [Timing of actions in exception handling](../VS_visualcpp/Timing-of-Exception-Handling--A-Summary.md)  
  
-   [Restrictions on termination handlers](../VS_visualcpp/Restrictions-on-Termination-Handlers.md)  
  
## See Also  
 [Structured Exception Handling (C/C++)](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)