---
title: "GetCodeForDllCanUnloadNow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllCanUnloadNow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllCanUnloadNow method"
ms.assetid: 24ee3ef7-45be-4778-99e8-6df493f0782b
caps.latest.revision: 7
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
# GetCodeForDllCanUnloadNow
Gets the appropriate code for unloading the DLL.  
  
## Syntax  
  
```  
  
      function GetCodeForDllCanUnloadNow(   
   nLineStart,   
   nLineEnd    
);  
```  
  
#### Parameters  
 `nLineStart`  
 The zero-based line number for the start of the function.  
  
 `nLineEnd`  
 The zero-based line number for the end of the function.  
  
## Return Value  
 A string containing the code for unloading the DLL.  
  
## Remarks  
 Call this member function to retrieve the appropriate code for unloading the DLL. Calling this function creates a single string by concatenating the array elements you specify.  
  
 The following table shows code for unloading the DLL.  
  
|Line number|Code|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|if (_AtlModule.GetLockCount() > 0)|  
|2|\treturn S_FALSE;|  
|3|return S_OK;|  
  
 For each of the lines returned, `GetCodeForDllCanUnloadNow` adds a leading tab (`\t`) and a trailing "CR-LF" (carriage return - linefeed) character pair (`\r\n`).  
  
## Example  
  
```  
// Get the lines numbered 1 and 2 above  
GetCodeForDllCanUnloadNow(1, 2)  
  
// returns the following string  
// "\tif (_AtlModule.GetLockCount() > 0)\r\n\t\treturn S_FALSE;\r\n"  
  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetCodeForDllGetClassObject](../ide/getcodefordllgetclassobject.md)   
 [GetCodeForExitInstance](../ide/getcodeforexitinstance.md)