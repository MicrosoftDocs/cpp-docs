---
title: "SetCommonPchSettings"
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
ms.assetid: 12f5524b-f654-4222-b979-8ee0d9f58c14
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
# SetCommonPchSettings
Establishes the precompiled header settings for the project.  
  
## Syntax  
  
```  
  
      function SetCommonPchSettings(   
   oProj    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
## Remarks  
 Call this function to establish the precompiled header settings for the project.  
  
 This function sets the <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader?qualifyHint=False> property to the following:  
  
-   **pchUseUsingSpecific** Uses the [/Yu (Use Precompiled Header File)](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md) compiler setting.  
  
-   **pchCreateUsingSpecific** Uses the [/Yc (Create Precompiled Header File)](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md) compiler setting.  
  
## Example  
  
```  
if ((strAppType == "LIB" || ((strAppType == "CONSOLE") &&   
   wizard.FindSymbol(SUPPORT_MFC"))) && !Pch)  
   {  
      AddFilesToProject(selProj, strProjectName, InfFile);  
      SetNoCommonPchSettings(selProj);  
   }  
else  
   {  
      AddFilesToProject(selProj, strProjectName, InfFile);  
      SetcommonPchSettings(selProj);  
   }  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [SetNoPchSettings](../VS_visualcpp/SetNoPchSettings.md)   
 [AddCommonConfig](../VS_visualcpp/AddCommonConfig.md)