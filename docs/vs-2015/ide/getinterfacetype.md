---
title: "GetInterfaceType | Microsoft Docs"
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
  - "GetInterfaceType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInterfaceType method"
ms.assetid: cc6403a8-0c2b-47f7-a8f7-9db95df87d5a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# GetInterfaceType
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [GetInterfaceType](https://docs.microsoft.com/cpp/ide/getinterfacetype).  
  
  
Gets the type of interface.  
  
## Syntax  
  
```  
  
      function GetInterfaceType(   
   oInterface    
);  
```  
  
#### Parameters  
 *oInterface*  
 A <xref:Microsoft.VisualStudio.VCCodeModel.VCCodeInterface> object.  
  
## Return Value  
 The string indicating the type of interface, such as custom, dual, dispinterface, or oleautomation.  
  
## Remarks  
 Call this function to get the type of interface.  
  
## Example  
 See [GetMaxID](../ide/getmaxid.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetInterfaceClasses](../ide/getinterfaceclasses.md)

