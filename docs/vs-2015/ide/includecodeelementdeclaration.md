---
title: "IncludeCodeElementDeclaration | Microsoft Docs"
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
  - "IncludeCodeElementDeclaration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IncludeCodeElementDeclaration method"
ms.assetid: 714e76e4-76bc-439a-982a-cf9d4ada7677
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IncludeCodeElementDeclaration
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [IncludeCodeElementDeclaration](https://docs.microsoft.com/cpp/ide/includecodeelementdeclaration).  
  
  
Adds the include statement to `strInFile`, including the header where `strCodeElemName` is implemented, if such a header found in the `oProj`.  
  
## Syntax  
  
```  
  
      function IncludeCodeElementDeclaration(   
   oProj,   
   strCodeElemName,   
   strInFile    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project.  
  
 `strCodeElemName`  
 The full name of the code element for which you are searching the definition header.  
  
 `strInFile`  
 The file that will include the definition header, if found.  
  
## Remarks  
 Adds the include statement to `strInFile`, including the header where `strCodeElemName` is implemented, if such a header found in `oProj`.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

