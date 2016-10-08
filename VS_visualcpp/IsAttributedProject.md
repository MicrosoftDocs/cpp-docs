---
title: "IsAttributedProject"
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
ms.assetid: 8fe41c0c-40e7-42be-8e15-94a2bbbe87cc
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
# IsAttributedProject
Indicates whether a project is attributed.  
  
## Syntax  
  
```  
  
      function IsAttributedProject(   
   owizard    
);  
```  
  
#### Parameters  
 *owizard*  
 The wizard object.  
  
## Return Value  
 **true** if the project is attributed; otherwise, **false**.  
  
## Remarks  
 Indicates whether a project is attributed.  
  
## Example  
  
```  
function CheckAddtoProject(oProj)  
{  
   try  
   {  
      if (!IsAttributedProject(wizard))  
      {  
         if (!ConvertProjectToAttributed(oProj))  
            return false;  
       }  
   }  
   catch (e)  
   {  
      var L_ErrMsg1_Text = "Error in CheckAddtoProject: ";  
         wizard.ReportError( L_ErrMsg1_Text + e.description);  
         return false;  
   }  
  
   return true;  
}  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [IsATLProject](../VS_visualcpp/IsATLProject.md)   
 [IsMFCProject](../VS_visualcpp/IsMFCProject.md)