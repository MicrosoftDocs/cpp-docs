---
title: "CreateInfFile"
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
ms.assetid: 941ea2ce-db10-428e-b423-8dc2a7e825cf
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
# CreateInfFile
Creates the wizard's Templates.inf file.  
  
## Syntax  
  
```  
  
function CreateInfFile( );  
  
```  
  
## Return Value  
 The wizard template file.  
  
## Remarks  
 Call this function to create the wizard's Templates.inf file from Templatesinf.txt, a temporary text file it first creates in the temporary directory, based on the user's selections. Templates.inf contains the list of file names that the wizard creates. See [The Template File](../VS_visualcpp/Template-Files.md) for more information.  
  
 If this function cannot create the Templatesinf.txt file in the temporary directory, it displays an error.  
  
## Example  
 See [AddFilesToProject](../VS_visualcpp/AddFilesToProject.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [AddFilesToProject](../VS_visualcpp/AddFilesToProject.md)   
 [SetFilters](../VS_visualcpp/SetFilters.md)   
 [AddFilesToProject](../VS_visualcpp/AddFilesToProject.md)