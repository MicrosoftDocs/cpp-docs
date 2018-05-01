---
title: "Project Build Error PRJ0024 | Microsoft Docs"
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
  - "PRJ0024"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0024"
ms.assetid: 8bde6368-6c1b-4e04-bc5e-3c6d0b8fa1d7
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0024
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0024](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0024).  
  
  
Unicode path 'path' could not be translated to user's ANSI code page.  
  
 ***path***  is the original Unicode version of the path string. This error can occur in cases where there is a Unicode path that cannot be directly translated to ANSI for the current system code page.  
  
 This error may occur if you are working with a project that was developed on a system using a code page that is not on your computer.  
  
 The resolution for this error is to update the path to use ANSI text or to install the code page on your computer and set it as the system default.

