---
title: "GetCodeForDllUnregisterServer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllUnregisterServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllUnregisterServer method"
ms.assetid: 6b152943-8c30-49f4-a55c-d0cba8d27a17
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
# GetCodeForDllUnregisterServer
Gets the appropriate code for unregistering a server.  
  
## Syntax  
  
```  
  
      function GetCodeForDllUnregisterServer(   
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
 A string containing the code for unregistering the server.  
  
## Remarks  
 Call this member function to retrieve the appropriate code for unregistering the server:  
  
|Line number|Code|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|_AtlModule.UpdateRegistryAppId(FALSE);|  
|2|HRESULT hRes = _AtlModule.UnregisterServer(TRUE);|  
|3|if (hRes != S_OK)|  
|4|\treturn hRes;|  
|5|if (!COleObjectFactory::UpdateRegistryAll(FALSE))|  
|6|\treturn ResultFromScode(SELFREG_E_CLASS);|  
|7|return S_OK;|  
  
 For each of the lines returned, `GetCodeForDllUnregisterServer` adds a leading tab (`\t`) and a trailing "CR-LF" (carriage return - linefeed) character pair (`\r\n`).  
  
## Example  
  
```  
// Get the lines numbered 2 and 3 above  
GetCodeForDllUnregisterServer(2, 3)  
  
// returns the following string  
// "\tHRESULT hRes = _AtlModule.UnregisterServer(TRUE);\r\n\tif (hRes != S_OK)\r\n"  
  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetCodeForDllRegisterServer](../ide/getcodefordllregisterserver.md)