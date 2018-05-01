---
title: "Project Build Error PRJ0033 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0033"
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0033
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0033](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0033).  
  
  
The 'Additional Dependencies' property for the custom build step for file 'file' contained 'macro' which evaluates out to 'macro_expansion'.  
  
 A custom build step on a file contained an error in its additional dependency probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.  
  
 To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.

