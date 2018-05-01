---
title: "Project Build Error PRJ0036 | Microsoft Docs"
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
  - "PRJ0036"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0036"
ms.assetid: ee215cd1-2d66-474d-9a63-b9096f1c4923
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0036
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0036](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0036).  
  
  
The 'Additional Files' property for the Web Deployment Tool contained an invalid entry.  
  
 The Additional Files property on the Web Deployment property page contained an error, possibly due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.  
  
 To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.  
  
 This error could also mean that one of the files referenced doesn't exist.

