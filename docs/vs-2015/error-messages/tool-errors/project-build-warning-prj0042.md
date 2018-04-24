---
title: "Project Build Warning PRJ0042 | Microsoft Docs"
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
  - "PRJ0042"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0042"
ms.assetid: 682c9999-6f85-409f-b102-00c93243f74f
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Warning PRJ0042
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Warning PRJ0042](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-warning-prj0042).  
  
  
The 'Outputs' property for the custom build step for file '**   
 ***file* ' is not set. The custom build step will be skipped.**  
  
 A custom build step was not executed because no output was specified.  
  
 To resolve this error, do one the following:  
  
-   Exclude the custom build step from the build.  
  
-   Add an output.  
  
-   Delete the contents of the custom build step's command.

