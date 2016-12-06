---
title: "InsertIntoFunction | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 6
author: "mikeblome"
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
Used by [AddATLSupportToProject](../ide/addatlsupporttoproject.md) to insert code into [InitInstance](../mfc/reference/cwinapp-class.md#initinstance).  
  
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