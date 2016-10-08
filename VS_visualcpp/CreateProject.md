---
title: "CreateProject"
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
ms.assetid: b5598b46-fe29-4ad0-8bfe-a4dc789aeebd
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
# CreateProject
Creates a C++ project.  
  
## Syntax  
  
```  
  
      function CreateProject(   
   strProjectName,   
   strProjectPath    
);  
```  
  
#### Parameters  
 `strProjectName`  
 A string containing the project name.  
  
 *strProjectPath*  
 A string containing the project path.  
  
## Return Value  
 The project object.  
  
## Remarks  
 Call this function to create a C++ project that you can open in Visual Studio. If the wizard's context parameter **WizardType** is specified as **vsWizardAddSubProject**, the project is added as a subproject to the existing project. See [ContextParams Enum](../Topic/Context%20Parameters%20for%20Launching%20Wizards.md) for more information.  
  
## Example  
 See [AddFilesToProject](../VS_visualcpp/AddFilesToProject.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)