---
title: "GetProjectFile"
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
  - "GetProjectFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProjectFile method"
ms.assetid: e5fdc468-755a-4b4e-81bd-e63881531bed
caps.latest.revision: 6
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-c---wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-c---wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetProjectPath](../ide/getprojectpath.md)   
 [GetUniqueFileName](../ide/getuniquefilename.md)