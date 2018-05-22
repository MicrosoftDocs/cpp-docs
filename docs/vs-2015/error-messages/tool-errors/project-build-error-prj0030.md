---
title: "Project Build Error PRJ0030 | Microsoft Docs"
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
  - "PRJ0030"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0030"
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0030
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0030](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0030).  
  
  
Macro expansion error. Evaluate recursion exceeded 32 levels for $(macro).  
  
 This error is caused by recursion in your macros. For example, if you set the **Intermediate Directory** property (see [General Property Page (Project)](../../ide/general-property-page-project.md)) to $(IntDir), you will have recursion.  
  
 To resolve this error, do not define macros or properties in terms of macros they are used to define.

