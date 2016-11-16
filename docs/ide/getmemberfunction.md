---
title: "GetMemberfunction | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetMemberFunction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetMemberfunction method"
ms.assetid: 1e610977-9bc7-4ff2-a79f-132c8e913b4d
caps.latest.revision: 7
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
 Call this function to get a function object based on the given name. See <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeModel.Functions%2A> in the Visual C++ Code Model for more information.  
  
## Example  
  
```  
// Gets the function ExitInstance from the class CWinApp in the   
// current project.  
var oExitInstance = GetMemberFunction(oCWinApp, "ExitInstance", oProj);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)