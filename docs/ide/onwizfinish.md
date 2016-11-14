---
title: "OnWizFinish | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnWizFinish"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnWizFinish method"
ms.assetid: 5e0790c3-c5b4-43de-b9db-b18d07c19f41
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
# OnWizFinish
Called from the wizard HTML script when the user clicks **Finish**. This function in turn calls the wizard control's **Finish** function.  
  
## Syntax  
  
```  
  
      function OnWizFinish(   
   document    
);  
```  
  
#### Parameters  
 `document`  
 The HTML document object  
  
## Remarks  
 This function is called from the wizard HTML script when the user clicks **Finish**.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)