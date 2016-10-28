---
title: "IsAttributedProject"
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
  - "IsAttributedProject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsAttributedProject method"
ms.assetid: 8fe41c0c-40e7-42be-8e15-94a2bbbe87cc
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-c---wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-c---wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [IsATLProject](../ide/isatlproject.md)   
 [IsMFCProject](../ide/ismfcproject.md)