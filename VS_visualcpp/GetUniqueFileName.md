---
title: "GetUniqueFileName"
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
ms.assetid: f9760e1a-82d0-4d8b-b00a-6f4c36f6b2c6
caps.latest.revision: 8
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
# GetUniqueFileName
Returns a unique file name.  
  
## Syntax  
  
```  
  
      function GetUniqueFileName(   
   strDirectory,   
   strFileName    
);  
```  
  
#### Parameters  
 *strDirectory*  
 Directory to look for file name in  
  
 `strFileName`  
 File name to check.  
  
## Return Value  
 The file name indicated in `strFileName` if unique; otherwise this function returns `strFileName`, appended with a number from 1 to 9999999, to make it unique. If `strFileName` is not provided, this function returns a unique file name by using [GetTempName Method](jsmthGetTempName).  
  
## Remarks  
 Returns a unique file name.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [GetProjectFile](../VS_visualcpp/GetProjectFile.md)