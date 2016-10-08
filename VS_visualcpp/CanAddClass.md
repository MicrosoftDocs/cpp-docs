---
title: "CanAddClass"
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
ms.assetid: 76739742-1e34-470c-910d-8784f0adfbf0
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
# CanAddClass
Called by the wizard to verify that the project is compatible with the code wizard the user is trying to run.  
  
## Syntax  
  
```  
  
      function CanAddClass(   
   oProj,   
   oObject    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
 `oObject`  
 The selected object. In this case, the current project.  
  
## Return Value  
 **true** if the class can be added; otherwise **false**.  
  
## Remarks  
 The wizard calls this function when the parameter PREPROCESS_FUNCTION is in the [project control's .vsz file](../VS_visualcpp/.Vsz-File--Project-Control-.md).  
  
 It verifies if the [Visual C++ Code Model](assetId:///dd6452c2-1054-44a1-b0eb-639a94a1216b) object is available. If the code model is not available, the function reports an error and returns **false**.  
  
## Example  
  
```  
// Determine if a class can be added to the project  
if (CanAddClass(selProj, selObj))  
{  
   return true;  
}  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [CanAddMFCClass](../VS_visualcpp/CanAddMFCClass.md)   
 [CanAddATLClass](../VS_visualcpp/CanAddATLClass.md)   
 [IsMFCProject](../VS_visualcpp/IsMFCProject.md)