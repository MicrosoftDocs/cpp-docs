---
title: "DoesIncludeExist"
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
ms.assetid: 39751a3d-dfe5-423c-bd94-a53771c3e360
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
# DoesIncludeExist
Indicates whether a `#include` statement for a specified header file exists in a file.  
  
## Syntax  
  
```  
  
      function DoesIncludeExist(   
   oProj,   
   strHeaderFile,   
   strInsertIntoFile    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
 *strHeaderFile*  
 The name of the header file to find.  
  
 `strInsertIntoFile`  
 The source file containing the `#include` statement for the header file (excluding the path).  
  
## Return Value  
 **true** if the specified header file is included; otherwise **false**.  
  
## Remarks  
 Indicates whether a #include for a specific header file exists in the file specified by `strInsertIntoFile`.  
  
## Example  
  
```  
// Check to see if #include for atlbase.h   
// is included in the project's stdafx.h.  
// and add it if it is not.  
if (!DoesIncludeExist(selProj, "<atlbase.h>", strSTDAFX))  
   oCM.AddInclude("<atlbase.h>", strSTDAFX, vsCMAddPositionEnd);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)