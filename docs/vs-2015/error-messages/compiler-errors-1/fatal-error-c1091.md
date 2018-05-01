---
title: "Fatal Error C1091 | Microsoft Docs"
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
  - "C1091"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1091"
ms.assetid: 812d4201-9154-48b0-b9af-5959c082ca33
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Fatal Error C1091
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Fatal Error C1091](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/fatal-error-c1091).  
  
  
compiler limit: string exceeds 'length' bytes in length  
  
 A string constant exceeded the current limit on the length of strings.  
  
 You might want to split the static string into two (or more) variables and use [strcpy_s](../../c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s.md) to join the result as part of the declaration or during run time.

