---
title: "Project Build Error PRJ0032 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["PRJ0032"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0032"]
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0032
The 'Outputs' property for the project-level custom build step contained 'macro' which evaluates out to 'macro_expansion'.  
  
 A custom build step on a project had bad output probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.  
  
 To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.