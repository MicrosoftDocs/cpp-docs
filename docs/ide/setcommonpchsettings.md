---
title: "SetCommonPchSettings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetCommonPchSettings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetCommonPchSettings method"
ms.assetid: 12f5524b-f654-4222-b979-8ee0d9f58c14
caps.latest.revision: 7
author: "mikeblome"
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
  
 This function sets the <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.UsePrecompiledHeader%2A> property to the following:  
  
-   **pchUseUsingSpecific** Uses the [/Yu (Use Precompiled Header File)](../build/reference/yu-use-precompiled-header-file.md) compiler setting.  
  
-   **pchCreateUsingSpecific** Uses the [/Yc (Create Precompiled Header File)](../build/reference/yc-create-precompiled-header-file.md) compiler setting.  
  
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [SetNoPchSettings](../ide/setnopchsettings.md)   
 [AddCommonConfig](../ide/addcommonconfig.md)