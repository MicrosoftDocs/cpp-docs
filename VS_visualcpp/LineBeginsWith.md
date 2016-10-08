---
title: "LineBeginsWith"
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
ms.assetid: cbdd08ad-7309-4504-9f23-1c22bb3e4bd0
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
# LineBeginsWith
Called by [InsertIntoFunction](../VS_visualcpp/InsertIntoFunction.md) to determine if a line begins with the specified string.  
  
## Syntax  
  
```  
  
      function LineBeginsWith(   
   strBody,   
   strSearchString,   
   nStartPos    
);  
```  
  
#### Parameters  
 *strBody*  
 The body of the function.  
  
 `strSearchString`  
 The string to find.  
  
 *nStartPos*  
 The starting position for the search.  
  
## Return Value  
 **true** if the string is found; otherwise **false**.  
  
## Remarks  
 This function is called by `InsertIntoFunction` to determine if the specified line begins with the specified string.  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../VS_visualcpp/Customizing-C---Wizards-with-Common-JScript-Functions.md)   
 [JScript Functions for C++ Wizards](../VS_visualcpp/JScript-Functions-for-C---Wizards.md)   
 [Creating a Custom Wizard](../VS_visualcpp/Creating-a-Custom-Wizard.md)   
 [Designing a Wizard](../VS_visualcpp/Designing-a-Wizard.md)   
 [OffsetToLineNumber](../VS_visualcpp/OffsetToLineNumber.md)