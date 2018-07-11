---
title: "CInternetException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CInternetException", "AFXINET/CInternetException", "AFXINET/CInternetException::CInternetException", "AFXINET/CInternetException::m_dwContext", "AFXINET/CInternetException::m_dwError"]
dev_langs: ["C++"]
helpviewer_keywords: ["CInternetException [MFC], CInternetException", "CInternetException [MFC], m_dwContext", "CInternetException [MFC], m_dwError"]
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CInternetException Class
Represents an exception condition related to an Internet operation.  
  
## Syntax  
  
```  
class CInternetException : public CException  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetException::CInternetException](#cinternetexception)|Constructs a `CInternetException` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetException::m_dwContext](#m_dwcontext)|The context value associated with the operation that caused the exception.|  
|[CInternetException::m_dwError](#m_dwerror)|The error that caused the exception.|  
  
## Remarks  
 The `CInternetException` class includes two public data members: one holds the error code associated with the exception, and the other holds the context identifier of the Internet application associated with the error.  
  
 For more information about context identifiers for Internet applications, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CInternetException`  
  
## Requirements  
 **Header:** afxinet.h  
  
##  <a name="cinternetexception"></a>  CInternetException::CInternetException  
 This member function is called when a `CInternetException` object is created.  
  
```  
CInternetException(DWORD dwError);
```  
  
### Parameters  
 *dwError*  
 The error that caused the exception.  
  
### Remarks  
 To throw a CInternetException, call the MFC global function [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).  
  
##  <a name="m_dwcontext"></a>  CInternetException::m_dwContext  
 The context value associated with the related Internet operation.  
  
```  
DWORD_PTR m_dwContext;  
```  
  
### Remarks  
 The context identifier is originally specified in [CInternetSession](../../mfc/reference/cinternetsession-class.md) and passed by MFC to [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- and [CInternetFile](../../mfc/reference/cinternetfile-class.md)-derived classes. You can override this default and assign any *dwContext* parameter a value of your choosing. *dwContext* is associated with any operation of the given object. *dwContext* identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
##  <a name="m_dwerror"></a>  CInternetException::m_dwError  
 The error that caused the exception.  
  
```  
DWORD m_dwError;  
```  
  
### Remarks  
 This error value may be a system error code, found in WINERROR.H, or an error value from WININET.H.  
  
 For a list of Win32 error codes, see [Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms681381). For a list of Internet-specific error messages, see  . Both topics are in the Windows SDK.  
  
## See Also  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)
