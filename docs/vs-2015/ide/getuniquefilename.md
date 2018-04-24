---
title: "GetUniqueFileName | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetUniqueFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetUniqueFilename method"
ms.assetid: f9760e1a-82d0-4d8b-b00a-6f4c36f6b2c6
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetUniqueFileName
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [GetUniqueFileName](https://docs.microsoft.com/cpp/ide/getuniquefilename).  
  
  
Returns a unique file name.  
  
## Syntax  
  
```  
  
      function GetUniqueFileName(   
   strDirectory,   
   strFileName    
);  
```  
  
#### Parameters  
 *strDirectory*  
 Directory to look for file name in  
  
 `strFileName`  
 File name to check.  
  
## Return Value  
 The file name indicated in `strFileName` if unique; otherwise this function returns `strFileName`, appended with a number from 1 to 9999999, to make it unique. If `strFileName` is not provided, this function returns a unique file name by using [GetTempName Method](jsmthGetTempName).  
  
## Remarks  
 Returns a unique file name.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetProjectFile](../ide/getprojectfile.md)
