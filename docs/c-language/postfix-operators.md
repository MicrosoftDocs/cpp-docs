---
title: "Postfix Operators | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "operators [C], postfix"
  - "postfix operators"
ms.assetid: 76260011-1624-484e-8bef-72ae7ab556cc
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
# Postfix Operators
The postfix operators have the highest precedence (the tightest binding) in expression evaluation.  
  
## Syntax  
 *postfix-expression*:  
 *primary-expression*  
  
 *postfix-expression*  **[**  *expression*  **]**  
  
 *postfix-expression*  **(**  *argument-expression-list* opt**)**  
  
 *postfix-expression*  **.**  *identifier*  
  
 *postfix-expression*  **–>**  *identifier*  
  
 *postfix-expression*  **++**  
  
 *postfix-expression*  **––**  
  
 Operators in this precedence level are the array subscripts, function calls, structure and union members, and postfix increment and decrement operators.  
  
## See Also  
 [C Operators](../c-language/c-operators.md)