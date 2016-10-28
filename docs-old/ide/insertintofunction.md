---
title: "InsertIntoFunction"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "InsertIntoFunction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InsertIntoFunction method"
ms.assetid: 50500c3c-bee3-4a9c-a403-7dcd752de23c
caps.latest.revision: 6
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# InsertIntoFunction
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-c---wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-c---wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetMemberfunction](../ide/getmemberfunction.md)