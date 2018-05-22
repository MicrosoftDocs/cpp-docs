---
title: "MSBuild Error MSB3021 | Microsoft Docs"
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
  - "MSBuild.Copy.Error"
helpviewer_keywords: 
  - "MSB3021"
ms.assetid: 8cb3a860-6916-4406-b5c7-b1106b44b92a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3021
**Unable to copy file "'\<file>'" to file "'\<file>'". '\<error>'**  
  
 The `Copy` task cannot copy the specified file.  
  
### To correct this error  
  
-   Check to see if the target file is locked (in use) by another application. Be sure you have permission to read the source file and to write the target file to the target folder. If the destination file path is extremely long, you may need to copy to a different location.  
  
## See Also  
 [Copy Task](http://msdn.microsoft.com/library/a46ba9da-3e4e-4890-b4ea-09a099b6bc40)   
 [Tasks](http://msdn.microsoft.com/library/5d3cc4a7-e5db-4f73-b707-8b6882fddcf8)