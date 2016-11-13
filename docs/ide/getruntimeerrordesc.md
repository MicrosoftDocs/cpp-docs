---
title: "GetRuntimeErrorDesc | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetRuntimeErrorDesc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyntaxError method"
  - "TypeError method"
  - "GetRuntimeErrorDesc method"
  - "RangeError method"
  - "URIError method"
  - "ConversionError method"
  - "RegExpError method"
  - "ReferenceError method"
ms.assetid: d56fdd2e-6ad0-4c49-9e98-bcf0105e1b12
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
# GetRuntimeErrorDesc
Returns a description for the exception type.  
  
## Syntax  
  
```  
  
      function GetRuntimeErrorDesc(   
   strRuntimeErrorName    
);  
```  
  
#### Parameters  
 *strRuntimeErrorName*  
 The name of the type of exception that has occurred.  
  
## Return Value  
 A description of the exception type.  
  
## Remarks  
 Returns a description for the exception type. Can be one of the following exception types:  
  
|Exception types|Description|  
|---------------------|-----------------|  
|ConversionError|Occurs whenever there is an attempt to convert an object into something to which it cannot be converted.|  
|RangeError|Occurs when a function is supplied with an argument that has exceeded its allowable range. For example, this error occurs if you attempt to construct an `Array` object with a length that is not a valid positive integer.|  
|ReferenceError|Occurs when an invalid reference has been detected. This error will occur, for example, if an expected reference is null.|  
|RegExpError|Occurs when a compilation error occurs with a regular expression. Once the regular expression is compiled, this error cannot occur. This example will occur, for example, when a regular expression is declared with a pattern that has an invalid syntax, or flags other than *i*, *g*, or *m*, or if it contains the same flag more than once.|  
|SyntaxError|Occurs when source text is parsed and that source text does not follow correct syntax. This error will occur, for example, if the `eval` function is called with an argument that is not valid program text.|  
|TypeError|Occurs whenever the actual type of an operand does not match the expected type. An example of when this error occurs is a function call made on something that is not an object or does not support the call.|  
|URIError|Occurs when an illegal Uniform Resource Indicator (URI) is detected. For example, this is error occurs when an illegal character is found in a string being encoded or decoded.|  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)