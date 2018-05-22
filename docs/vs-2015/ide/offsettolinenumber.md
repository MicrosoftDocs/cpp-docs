---
title: "OffsetToLineNumber | Microsoft Docs"
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
  - "OffsetToLineNumber"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OffsetToLineNumber function"
ms.assetid: ac7e3c22-6b3b-432c-85cc-b50bbef9ce8c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# OffsetToLineNumber
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [OffsetToLineNumber](https://docs.microsoft.com/cpp/ide/offsettolinenumber).  
  
  
Called by [InsertIntoFunction](../ide/insertintofunction.md) to convert an index in a function body to a line number.  
  
## Syntax  
  
```  
  
      function OffsetToLineNumber(   
   strString,   
   nPos    
);  
```  
  
#### Parameters  
 `strString`  
 The string containing the function body. The function body is a multi-line string where its lines are delimited by cr-lf character pairs.  
  
 `nPos`  
 A position within the string.  
  
## Return Value  
 The line within the body function where `nPos` is located. The first line in the function is considered to be line 1 (not 0).  
  
## Remarks  
 Finds the line number for a given position in a function body.  
  
 This function is called by `InsertIntoFunction` to convert the index located at `nPos` in a function body to a line number.  
  
## Example  
  
```  
strString = "function DelFile(fso,  
 strWizTempFile)\r\n{\r\n\ttry\r\n\t{\r\nif   
(fso.FileExists(strWizTempFile))\r\nreturn true;\r\n";  
  
nLine =  OffsetToLineNumber(strString, 60);  
  
// The return value for the above is 5, because character 60 in the string   
// occurs in the 5th line within the string.  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [LineBeginsWith](../ide/linebeginswith.md)

