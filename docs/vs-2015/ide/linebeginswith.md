---
title: "LineBeginsWith | Microsoft Docs"
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
  - "LineBeginsWith"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LineBeginsWith method"
ms.assetid: cbdd08ad-7309-4504-9f23-1c22bb3e4bd0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# LineBeginsWith
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [LineBeginsWith](https://docs.microsoft.com/cpp/ide/linebeginswith).  
  
  
Called by [InsertIntoFunction](../ide/insertintofunction.md) to determine if a line begins with the specified string.  
  
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
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [OffsetToLineNumber](../ide/offsettolinenumber.md)

