---
title: "ConvertProjectToAttributed | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ConvertProjectToAttributed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ConvertProjectToAttributed method"
ms.assetid: 56a2d6e1-7e8e-4595-b2be-ade026593798
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
# ConvertProjectToAttributed
Converts an ATL nonattributed project to attributed.  
  
## Syntax  
  
```  
  
function ConvertProjectToAttributed( );  
  
```  
  
## Return Value  
 **true** if the project was converted successfully; otherwise **false**.  
  
## Remarks  
 Call this function to convert an ATL project from nonattributed to attributed. See [Attributed Programming](../windows/attributed-programming-concepts.md) for more information.  
  
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [CanAddNonAttributed](../ide/canaddnonattributed.md)