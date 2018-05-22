---
title: "Project Build Error PRJ0002 | Microsoft Docs"
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
  - "PRJ0002"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0002"
ms.assetid: 1c820b1f-9a24-4681-80ed-4fcbfd7caa00
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0002
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0002](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0002).  
  
  
error result returned from 'command line'.  
  
 A command, ***command line***, which was formed from user input in the **Property Pages** dialog box, returned an error code but no information will appear in the Output window.  
  
 The resolution to this error depends on which tool generated the error. For MIDL, you will get an idea of what went wrong if /o (Redirect Output) is defined.  
  
 A batch file, such as a custom build step or build event, that is not informative about failure conditions could also be the reason for this error.

