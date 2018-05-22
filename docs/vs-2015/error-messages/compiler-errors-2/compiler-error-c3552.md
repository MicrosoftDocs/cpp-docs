---
title: "Compiler Error C3552 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3552"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3552"
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3552
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3552](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3552).  
  
  
typename': a late specified return type cannot contain 'auto'  
  
 If you use the `auto` keyword as a placeholder for the return type of a function, you must provide a late-specified return type. However, you cannot use another `auto` keyword to specify the late-specified return type. For example, the following code fragment yields error C3552.  
  
 `auto myFunction->auto; // C3552`

