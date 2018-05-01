---
title: "Project Build Error PRJ0044 | Microsoft Docs"
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
  - "PRJ0044"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0044"
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Project Build Error PRJ0044
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Project Build Error PRJ0044](https://docs.microsoft.com/cpp/error-messages/tool-errors/project-build-error-prj0044).  
  
  
The 'Additional Dependencies' property for custom build rule 'rule' assigned to file 'file' is invalid. The property contained 'string' which evaluates to 'value'.  
  
 The **Additional Dependencies** property evaluated to an empty string, or to a string that contained invalid characters (any character that could not be in a file or directory name). Custom build rules need the output of the build action.  
  
 For more information, see [Specifying Custom Build Tools](../../ide/specifying-custom-build-tools.md).  
  
## See Also  
 [Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)

