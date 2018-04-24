---
title: "CreateProject | Microsoft Docs"
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
  - "CreateProject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateProject method"
ms.assetid: b5598b46-fe29-4ad0-8bfe-a4dc789aeebd
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CreateProject
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CreateProject](https://docs.microsoft.com/cpp/ide/createproject).  
  
  
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
 See [AddFilesToProject](../ide/addfilestoproject.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

