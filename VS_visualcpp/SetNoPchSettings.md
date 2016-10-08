---
title: "SetNoPchSettings"
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
ms.assetid: 52373c98-ad5e-4e9b-9e0f-9f58ddb2a636
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
# SetNoPchSettings
Sets up a project configuration properties when no precompiled header is used.  
  
## Syntax  
  
```  
  
      function SetNoPchSettings(   
   oProj    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
## Remarks  
 Call this function to configure the project when the project uses no precompiled header settings.  
  
## Example  
 See [SetCommonPchSettings](../VS_visualcpp/SetCommonPchSettings.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [SetCommonPchSettings](../VS_visualcpp/SetCommonPchSettings.md)   
 [AddCommonConfig](../VS_visualcpp/AddCommonConfig.md)