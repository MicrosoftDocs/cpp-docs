---
title: "ConvertProjectToAttributed"
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
ms.assetid: 56a2d6e1-7e8e-4595-b2be-ade026593798
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
# ConvertProjectToAttributed
Converts an ATL nonattributed project to attributed.  
  
## Syntax  
  
```  
  
function ConvertProjectToAttributed( );  
  
```  
  
## Return Value  
 **true** if the project was converted successfully; otherwise **false**.  
  
## Remarks  
 Call this function to convert an ATL project from nonattributed to attributed. See [Attributed Programming](../VS_visualcpp/Attributed-Programming-Concepts.md) for more information.  
  
## Example  
  
```  
// Create a function called CheckAddtoProject.  
function CheckAddtoProject(oProj)  
{  
// Is the project attributed already?  
   try  
   {  
      if (!IsAttributedProject(wizard))  
      {  
         // If the project is not converted to attributed, return false.  
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
 [CanAddNonAttributed](../VS_visualcpp/CanAddNonAttributed.md)