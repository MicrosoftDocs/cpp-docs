---
title: "_com_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_com_error class"
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
caps.latest.revision: 10
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
# _com_error Class
**Microsoft Specific**  
  
 A `_com_error` object represents an exception condition detected by the error-handling wrapper functions in the header files generated from the type library or by one of the COM support classes. The `_com_error` class encapsulates the `HRESULT` error code and any associated `IErrorInfo Interface` object.  
  
### Construction  
  
|||  
|-|-|  
|[_com_error](../cpp/com-error-com-error.md)|Constructs a `_com_error` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../cpp/com-error-operator-equal.md)|Assigns an existing `_com_error` object to another.|  
  
### Extractor Functions  
  
|||  
|-|-|  
|[Error](../cpp/com-error-error.md)|Retrieves the `HRESULT` passed to the constructor.|  
|[ErrorInfo](../cpp/com-error-errorinfo.md)|Retrieves the `IErrorInfo` object passed to the constructor.|  
|[WCode](../cpp/com-error-wcode.md)|Retrieves the 16-bit error code mapped into the encapsulated `HRESULT`.|  
  
### IErrorInfo Functions  
  
|||  
|-|-|  
|[Description](../cpp/com-error-description.md)|Calls `IErrorInfo::GetDescription` function.|  
|[HelpContext](../cpp/com-error-helpcontext.md)|Calls `IErrorInfo::GetHelpContext` function.|  
|[HelpFile](../cpp/com-error-helpfile.md)|Calls `IErrorInfo::GetHelpFile` function|  
|[Source](../cpp/com-error-source.md)|Calls `IErrorInfo::GetSource` function.|  
|[GUID](../cpp/com-error-guid.md)|Calls `IErrorInfo::GetGUID` function.|  
  
### Format Message Extractor  
  
|||  
|-|-|  
|[ErrorMessage](../cpp/com-error-errormessage.md)|Retrieves the string message for HRESULT stored in the `_com_error` object.|  
  
### ExepInfo.wCode to HRESULT Mappers  
  
|||  
|-|-|  
|[HRESULTToWCode](../cpp/com-error-hresulttowcode.md)|Maps 32-bit `HRESULT` to 16-bit `wCode`.|  
|[WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)|Maps 16-bit `wCode` to 32-bit `HRESULT`.|  
  
## END Microsoft Specific  
  
## Requirements  
 `Header:` comdef.h  
  
 `Lib:` comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../build/reference/zc-wchar-t-wchar-t-is-native-type.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../cpp/compiler-com-support-classes.md)   
 [IErrorInfo Interface](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447)