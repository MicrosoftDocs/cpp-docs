---
title: "InsertIntoFunction"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 50500c3c-bee3-4a9c-a403-7dcd752de23c
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# InsertIntoFunction
Used by [AddATLSupportToProject](../VS_visualcpp/AddATLSupportToProject.md) to insert code into [InitInstance](../Topic/CWinApp::InitInstance.md).  
  
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
 The starting line to pass to [GetCodeForInitInstance](../VS_visualcpp/GetCodeForInitInstance.md).  
  
 *nEndLine*  
 Ending line to pass to [GetCodeForInitInstance](../VS_visualcpp/GetCodeForInitInstance.md).  
  
 *bInsideIfBlock*  
 Indicates whether the insertion is into a function block.  
  
## Return Value  
 **true** if successful; otherwise **false**.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [GetMemberfunction](../VS_visualcpp/GetMemberfunction.md)