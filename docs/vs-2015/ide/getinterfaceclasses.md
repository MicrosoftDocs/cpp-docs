---
title: "GetInterfaceClasses | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetInterfaceClasses"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfaceClasses method"
ms.assetid: 712c112f-b4ff-43c4-ad49-c4f4c13c48bd
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetInterfaceClasses
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [GetInterfaceClasses](https://docs.microsoft.com/cpp/ide/getinterfaceclasses).  
  
  
Returns the `VCCodeClass` object associated with an interface.  
  
## Syntax  
  
```  
  
      function GetInterfaceClasses(   
   strInterface,   
   oProject,   
   aryClasses    
);  
```  
  
#### Parameters  
 *strInterface*  
 The name of the interface containing the class objects.  
  
 *oProject*  
 The selected project.  
  
 *aryClasses*  
 [out] An array of class objects in the interface.  
  
## Return Value  
 The <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeClass> object associated with an interface.  
  
## Remarks  
 Call this function to retrieve the classes associated with an interface.  
  
## Example  
  
```  
var aryClasses = new Array();  
GetInterfaceClasses(oInterface.Name, selProj, aryClasses);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetInterfaceType](../ide/getinterfacetype.md)

