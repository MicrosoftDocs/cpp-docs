---
title: "InsertIntoFunction | Microsoft Docs"
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
  - "InsertIntoFunction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InsertIntoFunction method"
ms.assetid: 50500c3c-bee3-4a9c-a403-7dcd752de23c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# InsertIntoFunction
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [InsertIntoFunction](https://docs.microsoft.com/cpp/ide/insertintofunction).  
  
  
Used by [AddATLSupportToProject](../ide/addatlsupporttoproject.md) to insert code into [InitInstance](../Topic/CWinApp::InitInstance.md).  
  
## Syntax  
  
```  
  
      function InsertIntoFunction(   
   oFunction,   
   strSearchString,   
   nStartLine,   
   nEndLine,   
   bInsideIfBlock    
);  
```  
  
#### Parameters  
 *oFunction*  
 The function object into which the insertion is made.  
  
 `strSearchString`  
 The string to find to determine insertion point.  
  
 *nStartLine*  
 The starting line to pass to [GetCodeForInitInstance](../ide/getcodeforinitinstance.md).  
  
 *nEndLine*  
 Ending line to pass to [GetCodeForInitInstance](../ide/getcodeforinitinstance.md).  
  
 *bInsideIfBlock*  
 Indicates whether the insertion is into a function block.  
  
## Return Value  
 **true** if successful; otherwise **false**.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetMemberfunction](../ide/getmemberfunction.md)

