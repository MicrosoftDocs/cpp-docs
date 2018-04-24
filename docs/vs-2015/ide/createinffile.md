---
title: "CreateInfFile | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CreateInfFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateInfFile method"
ms.assetid: 941ea2ce-db10-428e-b423-8dc2a7e825cf
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CreateInfFile
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CreateInfFile](https://docs.microsoft.com/cpp/ide/createinffile).  
  
  
Creates the wizard's Templates.inf file.  
  
## Syntax  
  
```  
  
function CreateInfFile( );  
  
```  
  
## Return Value  
 The wizard template file.  
  
## Remarks  
 Call this function to create the wizard's Templates.inf file from Templatesinf.txt, a temporary text file it first creates in the temporary directory, based on the user's selections. Templates.inf contains the list of file names that the wizard creates. See [The Template File](../ide/template-files.md) for more information.  
  
 If this function cannot create the Templatesinf.txt file in the temporary directory, it displays an error.  
  
## Example  
 See [AddFilesToProject](../ide/addfilestoproject.md).  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [AddFilesToProject](../ide/addfilestoproject.md)   
 [SetFilters](../ide/setfilters.md)   
 [AddFilesToProject](../ide/addfilestoproject.md)

