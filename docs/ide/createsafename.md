---
title: "CreateSafeName | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CreateSafeName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateSafeName method"
ms.assetid: 3a0dd4af-776d-4c25-aff9-4c539f173cb8
caps.latest.revision: 6
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
# CreateSafeName
Generates a C++ friendly name.  
  
## Syntax  
  
```  
  
      function CreateSafeName(   
   strName    
);  
```  
  
#### Parameters  
 `strName`  
 The old name.  
  
## Return Value  
 The new, safe name.  
  
## Remarks  
 Call this function to create a C++ friendly name from a name that contains characters that cannot be used by C++. An acceptable C++ name can contain upper- or lowercase letters, digits, or an underscore ("_").  
  
 This function checks the old name character by character, skipping any unusable characters. If the old name contains no friendly characters, the function returns the new name as "My". If the new friendly name begins with a digit, this function prepends the new name with "My".  
  
## Example  
  
```  
// Get the project name  
var strProjectName = wizard.FindSymbol("PROJECT_NAME");  
  
// Set the project name to the safe project name.   
var strSafeProjectName = CreateSafeName(strProjectName);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)