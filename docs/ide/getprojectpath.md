---
title: "GetProjectPath | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetProjectPath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProjectPath method"
ms.assetid: a5e51fe4-c068-47b7-9f2f-1a1d6c71a963
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
# GetProjectPath
Returns the project's directory path.  
  
## Syntax  
  
```  
  
      function GetProjectPath(   
   oProj    
);  
```  
  
#### Parameters  
 `oProj`  
 The selected project  
  
## Return Value  
 The project's directory path.  
  
## Remarks  
 Call this function to get the project's path.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetProjectFile](../ide/getprojectfile.md)