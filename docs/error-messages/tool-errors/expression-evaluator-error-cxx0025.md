---
title: "Expression Evaluator Error CXX0025 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0025"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0025"
  - "CXX0025"
ms.assetid: 3e2fb541-63b3-46ac-9f93-3dadb253bcf6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# Expression Evaluator Error CXX0025
operator needs struct/union  
  
 An operator that takes an expression of `struct` or **union** type was applied to an expression that is not a `struct` or **union**.  
  
 Components of class, structure, or union variables must have a fully qualified name. Components cannot be entered without full specification.  
  
 This error is identical to CAN0025.