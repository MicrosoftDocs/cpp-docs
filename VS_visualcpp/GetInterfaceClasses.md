---
title: "GetInterfaceClasses"
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
ms.assetid: 712c112f-b4ff-43c4-ad49-c4f4c13c48bd
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
# GetInterfaceClasses
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
 The <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeClass?qualifyHint=False> object associated with an interface.  
  
## Remarks  
 Call this function to retrieve the classes associated with an interface.  
  
## Example  
  
```  
var aryClasses = new Array();  
GetInterfaceClasses(oInterface.Name, selProj, aryClasses);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [GetInterfaceType](../VS_visualcpp/GetInterfaceType.md)