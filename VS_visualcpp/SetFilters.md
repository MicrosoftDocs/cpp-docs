---
title: "SetFilters"
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
ms.assetid: ae934e1b-8ead-4c1d-a0f8-e9c80d182340
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
# SetFilters
Adds source, include, and resource filters for the project folders.  
  
## Syntax  
  
```  
  
      function SetFilters(   
   oProj    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
## Remarks  
 Call this function to add source, include, and resource filters for the project folders. This function finds the following symbols in the project:  
  
-   SOURCE_FILTER  
  
-   INCLUDE_FILTER  
  
-   RESOURCE_FILTER  
  
 These symbols contain the file extensions used in filtering.  
  
## Example  
  
```  
// Create and set the project name and path.  
selProj = CreateProject(strProjectName, strProjectPath);  
// Add the previously-identified configurations to the project.  
AddConfigurations(selProj, strProjectName);  
// Set filters for the project.  
SetFilters (selproj);  
// Indicate that the project is an ATL project.  
selProj.Object.keyword = "AtlProj";  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)