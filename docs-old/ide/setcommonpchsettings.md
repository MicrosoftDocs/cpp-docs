---
title: "SetCommonPchSettings"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "SetCommonPchSettings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetCommonPchSettings method"
ms.assetid: 12f5524b-f654-4222-b979-8ee0d9f58c14
caps.latest.revision: 7
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
  
 This function sets the \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader*> property to the following:  
  
-   **pchUseUsingSpecific** Uses the [/Yu (Use Precompiled Header File)](../buildref/-yu--use-precompiled-header-file-.md) compiler setting.  
  
-   **pchCreateUsingSpecific** Uses the [/Yc (Create Precompiled Header File)](../buildref/-yc--create-precompiled-header-file-.md) compiler setting.  
  
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-c---wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-c---wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [SetNoPchSettings](../ide/setnopchsettings.md)   
 [AddCommonConfig](../ide/addcommonconfig.md)