---
title: "OnWizFinish | Microsoft Docs"
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
  - "OnWizFinish"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnWizFinish method"
ms.assetid: 5e0790c3-c5b4-43de-b9db-b18d07c19f41
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OnWizFinish
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [OnWizFinish](https://docs.microsoft.com/cpp/ide/onwizfinish).  
  
  
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

