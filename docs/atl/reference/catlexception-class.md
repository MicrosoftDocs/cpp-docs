---
title: "CAtlException Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAtlException"
  - "ATL::CAtlException"
  - "ATL.CAtlException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlException class"
ms.assetid: 3fd7b041-f70d-4292-b947-0d70781d95a8
caps.latest.revision: 19
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
# CAtlException Class
This class defines an ATL exception.  
  
## Syntax  
  
```
class CAtlException
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlException::CAtlException](#catlexception__catlexception)|The constructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlException::operator HRESULT](#catlexception__operator_hresult)|Casts the current object to an HRESULT value.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlException::m_hr](#catlexception__m_hr)|The variable of type HRESULT created by the object and used to store the error condition.|  
  
## Remarks  
 A `CAtlException` object represents an exception condition related to an ATL operation. The `CAtlException` class includes a public data member that stores the status code indicating the reason for the exception and a cast operator that allows you to treat the exception as if it were an HRESULT.  
  
 In general, you will call `AtlThrow` rather than creating a `CAtlException` object directly.  
  
## Requirements  
 **Header:** atlexcept.h  
  
##  <a name="catlexception__catlexception"></a>  CAtlException::CAtlException  
 The constructor.  
  
```
CAtlException(HRESULT hr) throw();
CAtlException() throw();
```  
  
### Parameters  
 `hr`  
 The `HRESULT` error code.  
  
##  <a name="catlexception__operator_hresult"></a>  CAtlException::operator HRESULT  
 Casts the current object to an HRESULT value.  
  
```operator HRESULT() const throw ();
```  
  
##  <a name="catlexception__m_hr"></a>  CAtlException::m_hr  
 The `HRESULT` data member.  
  
```
HRESULT m_hr;
```  
  
### Remarks  
 The data member that stores the error condition. The HRESULT value is set by the constructor, [CAtlException::CAtlException](#catlexception__catlexception).  
  
## See Also  
 [AtlThrow](http://msdn.microsoft.com/library/2bd111da-8170-488d-914a-c9bf6b6765f7)   
 [Class Overview](../../atl/atl-class-overview.md)
