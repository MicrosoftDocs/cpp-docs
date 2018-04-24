---
title: "CAtlException Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlException Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CAtlException Class](https://docs.microsoft.com/cpp/atl/reference/catlexception-class).  
  
  
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
  
```  
operator HRESULT() const throw ();
```  
  
##  <a name="catlexception__m_hr"></a>  CAtlException::m_hr  
 The `HRESULT` data member.  
  
```
HRESULT m_hr;
```  
  
### Remarks  
 The data member that stores the error condition. The HRESULT value is set by the constructor, [CAtlException::CAtlException](#catlexception__catlexception).  
  
## See Also  
 [AtlThrow](../Topic/AtlThrow.md)   
 [Class Overview](../../atl/atl-class-overview.md)








