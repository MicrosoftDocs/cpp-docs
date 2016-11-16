---
title: "LineBeginsWith | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# LineBeginsWith
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