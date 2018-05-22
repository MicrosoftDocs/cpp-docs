---
title: "SetMergeProxySymbol | Microsoft Docs"
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
  - "SetMergeProxySymbol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetMergeProxySymbol method"
ms.assetid: d6a9db59-2d5b-4431-98bc-785675e0eafe
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SetMergeProxySymbol
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [SetMergeProxySymbol](https://docs.microsoft.com/cpp/ide/setmergeproxysymbol).  
  
  
This function is called by the wizard to add the _MERGE_PROXYSTUB symbol if needed.  
  
## Syntax  
  
```  
  
      function SetMergeProxySymbol(   
   oProj    
);  
```  
  
#### Parameters  
 `oProj`  
 Selected project object  
  
## Remarks  
 This function is called by the wizard to add the _MERGE_PROXYSTUB symbol if needed.  
  
## Example  
  
```  
SetMergeProxySymbol (selproj);  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)

