---
title: "CreateSafeName"
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
ms.assetid: 3a0dd4af-776d-4c25-aff9-4c539f173cb8
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
# CreateSafeName
Generates a C++ friendly name.  
  
## Syntax  
  
```  
  
      function CreateSafeName(   
   strName    
);  
```  
  
#### Parameters  
 `strName`  
 The old name.  
  
## Return Value  
 The new, safe name.  
  
## Remarks  
 Call this function to create a C++ friendly name from a name that contains characters that cannot be used by C++. An acceptable C++ name can contain upper- or lowercase letters, digits, or an underscore ("_").  
  
 This function checks the old name character by character, skipping any unusable characters. If the old name contains no friendly characters, the function returns the new name as "My". If the new friendly name begins with a digit, this function prepends the new name with "My".  
  
## Example  
  
```  
// Get the project name  
var strProjectName = wizard.FindSymbol("PROJECT_NAME");  
  
// Set the project name to the safe project name.   
var strSafeProjectName = CreateSafeName(strProjectName);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)