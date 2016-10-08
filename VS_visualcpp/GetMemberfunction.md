---
title: "GetMemberfunction"
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
ms.assetid: 1e610977-9bc7-4ff2-a79f-132c8e913b4d
caps.latest.revision: 7
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
# GetMemberfunction
Call this function to get a function object based on the given name.  
  
## Syntax  
  
```  
  
      function GetMemberfunction(   
   oClass,   
   strFuncName,   
   oProj    
);  
```  
  
#### Parameters  
 *oClass*  
 The selected class object.  
  
 `strFuncName`  
 The function name to retrieve.  
  
 `oProj`  
 The selected project.  
  
## Return Value  
 The function indicated by `strFuncName`.  
  
## Remarks  
 Call this function to get a function object based on the given name. See <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeModel.Functions?qualifyHint=False> in the Visual C++ Code Model for more information.  
  
## Example  
  
```  
// Gets the function ExitInstance from the class CWinApp in the   
// current project.  
var oExitInstance = GetMemberFunction(oCWinApp, "ExitInstance", oProj);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)