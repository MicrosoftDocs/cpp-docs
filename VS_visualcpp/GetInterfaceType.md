---
title: "GetInterfaceType"
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
ms.assetid: cc6403a8-0c2b-47f7-a8f7-9db95df87d5a
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
# GetInterfaceType
Gets the type of interface.  
  
## Syntax  
  
```  
  
      function GetInterfaceType(   
   oInterface    
);  
```  
  
#### Parameters  
 *oInterface*  
 A <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeInterface?qualifyHint=False> object.  
  
## Return Value  
 The string indicating the type of interface, such as custom, dual, dispinterface, or oleautomation.  
  
## Remarks  
 Call this function to get the type of interface.  
  
## Example  
 See [GetMaxID](../VS_visualcpp/GetMaxID.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [GetInterfaceClasses](../VS_visualcpp/GetInterfaceClasses.md)