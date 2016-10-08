---
title: "SetMergeProxySymbol"
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
ms.assetid: d6a9db59-2d5b-4431-98bc-785675e0eafe
caps.latest.revision: 6
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
# SetMergeProxySymbol
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
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)