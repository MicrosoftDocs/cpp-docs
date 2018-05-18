---
title: "Project Build Error PRJ0044 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["PRJ0044"]
dev_langs: ["C++"]
helpviewer_keywords: ["PRJ0044"]
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Project Build Error PRJ0044
The 'Additional Dependencies' property for custom build rule 'rule' assigned to file 'file' is invalid. The property contained 'string' which evaluates to 'value'.  
  
 The **Additional Dependencies** property evaluated to an empty string, or to a string that contained invalid characters (any character that could not be in a file or directory name). Custom build rules need the output of the build action.  
  
 For more information, see [Specifying Custom Build Tools](../../ide/specifying-custom-build-tools.md).  
  
## See Also  
 [Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)