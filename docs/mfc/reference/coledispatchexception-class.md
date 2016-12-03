---
title: "COleDispatchException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDispatchException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleDispatchException class"
  - "Automation, exceptions"
  - "exceptions, OLE"
  - "OLE exceptions, to IDispatch interface"
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
caps.latest.revision: 22
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
# COleDispatchException Class
Handles exceptions specific to the OLE `IDispatch` interface, which is a key part of OLE automation.  
  
## Syntax  
  
```  
class COleDispatchException : public CException  
```  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleDispatchException::m_dwHelpContext](#coledispatchexception__m_dwhelpcontext)|Help context for error.|  
|[COleDispatchException::m_strDescription](#coledispatchexception__m_strdescription)|Verbal error description.|  
|[COleDispatchException::m_strHelpFile](#coledispatchexception__m_strhelpfile)|Help file to use with `m_dwHelpContext`.|  
|[COleDispatchException::m_strSource](#coledispatchexception__m_strsource)|Application that generated the exception.|  
|[COleDispatchException::m_wCode](#coledispatchexception__m_wcode)|`IDispatch`-specific error code.|  
  
## Remarks  
 Like the other exception classes derived from the `CException` base class, `COleDispatchException` can be used with the **THROW**, `THROW_LAST`, **TRY**, **CATCH**, `AND_CATCH`, and `END_CATCH` macros.  
  
 In general, you should call [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) to create and throw a `COleDispatchException` object.  
  
 For more information on exceptions, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: OLE Exceptions](../../mfc/exceptions-ole-exceptions.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleDispatchException`  
  
## Requirements  
 **Header:** afxdisp.h  
  
##  <a name="coledispatchexception__m_dwhelpcontext"></a>  COleDispatchException::m_dwHelpContext  
 Identifies a help context in your application's help (.HLP) file.  
  
```  
DWORD m_dwHelpContext;  
```  
  
### Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
### Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__createdispatch).  
  
##  <a name="coledispatchexception__m_strdescription"></a>  COleDispatchException::m_strDescription  
 Contains a verbal error description, such as "Disk full."  
  
```  
CString m_strDescription;  
```  
  
### Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
### Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__createdispatch).  
  
##  <a name="coledispatchexception__m_strhelpfile"></a>  COleDispatchException::m_strHelpFile  
 The framework fills in this string with the name of the application's help file.  
  
```  
CString m_strHelpFile;  
```  
  
##  <a name="coledispatchexception__m_strsource"></a>  COleDispatchException::m_strSource  
 The framework fills in this string with the name of the application that generated the exception.  
  
```  
CString m_strSource;  
```  
  
### Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#coledispatchdriver__createdispatch).  
  
##  <a name="coledispatchexception__m_wcode"></a>  COleDispatchException::m_wCode  
 Contains an error code specific to your application.  
  
```  
WORD m_wCode;  
```  
  
### Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
## See Also  
 [MFC Sample CALCDRIV](../../visual-cpp-samples.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)   
 [COleException Class](../../mfc/reference/coleexception-class.md)
