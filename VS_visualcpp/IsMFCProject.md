---
title: "IsMFCProject"
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
ms.assetid: 98dd57df-9fdb-40d7-afcf-4b99e9d54dad
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
# IsMFCProject
Checks if a project is MFC based.  
  
## Syntax  
  
```  
  
      function IsMFCProject(   
   oProj,   
   bCWinAppRequired    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project  
  
 *bCWinAppRequired*  
 Indicates whether extension DLLs are included in the check.  
  
## Return Value  
 **true** if the project is an MFC project; otherwise **false**.  
  
## Remarks  
 Use this function to determine if the selected project is an MFC project.  
  
## Example  
  
```  
if (!IsMFCProject(selProj, true))  
   {  
      if (gbExceptionThrown)  
         return false;  
      var L_ErrMsg2_Text = "ATL support can only be added to MFC EXEs or MFC Regular DLLs.";  
      wizard.ReportError(L_ErrMsg2_Text);  
      return false;  
   }  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [IsATLProject](../VS_visualcpp/IsATLProject.md)   
 [IsAttributedProject](../VS_visualcpp/IsAttributedProject.md)