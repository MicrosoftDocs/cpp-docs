---
title: "SetErrorInfo"
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
ms.assetid: 78bca763-3f90-4e04-b566-b4b7fe2431b1
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
# SetErrorInfo
Called by [OnWizFinish](../VS_visualcpp/OnWizFinish.md) and [CanUseFileName](../VS_visualcpp/CanUseFileName.md) to provide current error information.  
  
## Syntax  
  
```  
  
      function SetErrorInfo(   
   oErrorObj   
);  
```  
  
#### Parameters  
 *oErrorObj*  
 The error object.  
  
## Remarks  
 Called by [OnWizFinish](../VS_visualcpp/OnWizFinish.md) and [CanUseFileName](../VS_visualcpp/CanUseFileName.md) to provide current error information. See <xref:Microsoft.VisualStudio.VsWizard.VCWizCtlClass.SetErrorInfo?qualifyHint=False> in the Visual C++ Wizard Model documentation for more information.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)