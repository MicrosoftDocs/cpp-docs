---
title: "_com_error Class"
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
ms.topic: language-reference
ms.assetid: 70dafa69-b1fb-4a5c-9249-e857e0793d42
caps.latest.revision: 10
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
# _com_error Class
**Microsoft Specific**  
  
 A `_com_error` object represents an exception condition detected by the error-handling wrapper functions in the header files generated from the type library or by one of the COM support classes. The `_com_error` class encapsulates the `HRESULT` error code and any associated `IErrorInfo Interface` object.  
  
### Construction  
  
|||  
|-|-|  
|[_com_error](../VS_visualcpp/_com_error--_com_error.md)|Constructs a `_com_error` object.|  
  
### Operators  
  
|||  
|-|-|  
|[operator =](../VS_visualcpp/_com_error--operator-=.md)|Assigns an existing `_com_error` object to another.|  
  
### Extractor Functions  
  
|||  
|-|-|  
|[Error](../VS_visualcpp/_com_error--Error.md)|Retrieves the `HRESULT` passed to the constructor.|  
|[ErrorInfo](../VS_visualcpp/_com_error--ErrorInfo.md)|Retrieves the `IErrorInfo` object passed to the constructor.|  
|[WCode](../VS_visualcpp/_com_error--WCode.md)|Retrieves the 16-bit error code mapped into the encapsulated `HRESULT`.|  
  
### IErrorInfo Functions  
  
|||  
|-|-|  
|[Description](../VS_visualcpp/_com_error--Description.md)|Calls `IErrorInfo::GetDescription` function.|  
|[HelpContext](../VS_visualcpp/_com_error--HelpContext.md)|Calls `IErrorInfo::GetHelpContext` function.|  
|[HelpFile](../VS_visualcpp/_com_error--HelpFile.md)|Calls `IErrorInfo::GetHelpFile` function|  
|[Source](../VS_visualcpp/_com_error--Source.md)|Calls `IErrorInfo::GetSource` function.|  
|[GUID](../VS_visualcpp/_com_error--GUID.md)|Calls `IErrorInfo::GetGUID` function.|  
  
### Format Message Extractor  
  
|||  
|-|-|  
|[ErrorMessage](../VS_visualcpp/_com_error--ErrorMessage.md)|Retrieves the string message for HRESULT stored in the `_com_error` object.|  
  
### ExepInfo.wCode to HRESULT Mappers  
  
|||  
|-|-|  
|[HRESULTToWCode](../VS_visualcpp/_com_error--HRESULTToWCode.md)|Maps 32-bit `HRESULT` to 16-bit `wCode`.|  
|[WCodeToHRESULT](../VS_visualcpp/_com_error--WCodeToHRESULT.md)|Maps 16-bit `wCode` to 32-bit `HRESULT`.|  
  
## END Microsoft Specific  
  
## Requirements  
 `Header:` comdef.h  
  
 `Lib:` comsuppw.lib or comsuppwd.lib (see [/Zc:wchar_t (wchar_t Is Native Type)](../VS_visualcpp/-Zc-wchar_t--wchar_t-Is-Native-Type-.md) for more information)  
  
## See Also  
 [Compiler COM Support Classes](../VS_visualcpp/Compiler-COM-Support-Classes.md)   
 [IErrorInfo Interface](assetId:///4dda6909-2d9a-4727-ae0c-b5f90dcfa447)