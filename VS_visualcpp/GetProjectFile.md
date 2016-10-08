---
title: "GetProjectFile"
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
ms.assetid: e5fdc468-755a-4b4e-81bd-e63881531bed
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
# GetProjectFile
Returns the file name specified type.  
  
## Syntax  
  
```  
  
      function GetProjectFile(   
   oProj,   
   strType,   
   bFullPath,   
   bMFC    
);  
```  
  
#### Parameters  
 oProj  
 The selected project.  
  
 `strType`  
 The type of file to retrieve, such as STDAFX, RC, IDL, CPP, H, ODL, or DEF.  
  
 *bFullPath*  
 Flag indicating whether to return the full path name.  
  
 *bMFC*  
 Indicates if the project is an MFC-based project. If `strType` is .cpp or .h, it is considered MFC based. If not, the project is assumed to be ATL based.  
  
## Return Value  
 The file name of the per-project type of files.  
  
## Remarks  
 Call this function to get the file name of the specified type in the specified project.  
  
## Example  
  
```  
// The selected MFC project's CPP file is retrieved and   
// assigned to strFileName.  
var strFileName = GetProjectFile(selProj, "CPP", false, true);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [GetProjectPath](../VS_visualcpp/GetProjectPath.md)   
 [GetUniqueFileName](../VS_visualcpp/GetUniqueFileName.md)