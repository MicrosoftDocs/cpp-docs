---
title: "Restrictions on Exception Handlers"
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
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
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
# Restrictions on Exception Handlers
The principal limitation to using exception handlers in code is that you cannot use a `goto` statement to jump into a `__try` statement block. Instead, you must enter the statement block through normal flow of control. You can jump out of a `__try` statement block and nest exception handlers as you choose.  
  
## See Also  
 [Writing an Exception Handler](../VS_visualcpp/Writing-an-Exception-Handler.md)   
 [Structured Exception Handling (C/C++)](../VS_visualcpp/Structured-Exception-Handling--C-C---.md)