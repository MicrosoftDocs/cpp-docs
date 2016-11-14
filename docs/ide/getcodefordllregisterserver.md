---
title: "GetCodeForDllRegisterServer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetCodeForDllRegisterServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCodeForDllRegisterServer method"
ms.assetid: 2fe733ad-3f1e-4020-9ce3-68956da7d41d
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
# GetCodeForDllRegisterServer
Gets the appropriate code for registering a server.  
  
## Syntax  
  
```  
  
      function GetCodeForDllRegisterServer(   
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
 A string containing the code for registering the server  
  
## Remarks  
 Call this member function to retrieve the appropriate code for registering a server:  
  
|Line number|Code|  
|-----------------|----------|  
|0|AFX_MANAGE_STATE(AfxGetStaticModuleState());|  
|1|_AtlModule.UpdateRegistryAppId(TRUE);|  
|2|HRESULT hRes = _AtlModule.RegisterServer(TRUE);|  
|3|if (hRes != S_OK)|  
|4|\treturn hRes;|  
|5|if (!COleObjectFactory::UpdateRegistryAll(TRUE))|  
|6|\treturn ResultFromScode(SELFREG_E_CLASS);|  
|7|return S_OK;|  
  
 For each of the lines returned, `GetCodeForDllRegisterServer` adds a leading tab (`\t`) and a trailing "CR-LF" (carriage return - linefeed) character pair (`\r\n`).  
  
## Example  
  
```  
// Get the lines numbered 2 and 3 above  
GetCodeForDllRegisterServer(2, 3)  
  
// returns the following string  
// "\tHRESULT hRes = _AtlModule.RegisterServer(TRUE);\r\n\tif (hRes != S_OK)\r\n"  
  
```  
  
## See Also  
 [Customizing C++ Wizards with Common JScript Functions](../ide/customizing-cpp-wizards-with-common-jscript-functions.md)   
 [JScript Functions for C++ Wizards](../ide/jscript-functions-for-cpp-wizards.md)   
 [Creating a Custom Wizard](../ide/creating-a-custom-wizard.md)   
 [Designing a Wizard](../ide/designing-a-wizard.md)   
 [GetCodeForDllUnregisterServer](../ide/getcodefordllunregisterserver.md)