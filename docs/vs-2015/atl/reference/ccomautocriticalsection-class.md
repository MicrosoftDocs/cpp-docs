---
title: "CComAutoCriticalSection Class | Microsoft Docs"
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
  - "ATL.CComAutoCriticalSection"
  - "ATL::CComAutoCriticalSection"
  - "CComAutoCriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComAutoCriticalSection class"
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComAutoCriticalSection Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CComAutoCriticalSection Class](https://docs.microsoft.com/cpp/atl/reference/ccomautocriticalsection-class).  
  
  
CComAutoCriticalSection` provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```
class CComAutoCriticalSection : public CComCriticalSection
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection__ccomautocriticalsection)|The constructor.|  
|[CComAutoCriticalSection::~CComAutoCriticalSection](#ccomautocriticalsection___dtorccomautocriticalsection)|The destructor.|  
  
## Remarks  
 `CComAutoCriticalSection` is similar to class [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), except `CComAutoCriticalSection` automatically initializes the critical section object in the constructor.  
  
 Typically, you use `CComAutoCriticalSection` through the `typedef` name [AutoCriticalSection](http://msdn.microsoft.com/library/8ebe567d-38eb-4661-9204-d64d8c48d47b). This name references `CComAutoCriticalSection` when [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) is being used.  
  
 The `Init` and `Term` methods from [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) are not available when using this class.  
  
## Inheritance Hierarchy  
 [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)  
  
 `CComAutoCriticalSection`  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="ccomautocriticalsection__ccomautocriticalsection"></a>  CComAutoCriticalSection::CComAutoCriticalSection  
 The constructor.  
  
```
CComAutoCriticalSection();
```  
  
### Remarks  
 Calls the Win32 function [InitializeCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms683472), which initializes the critical section object.  
  
##  <a name="ccomautocriticalsection___dtorccomautocriticalsection"></a>  CComAutoCriticalSection::~CComAutoCriticalSection  
 The destructor.  
  
```
~CComAutoCriticalSection() throw();
```  
  
### Remarks  
 The destructor calls [DeleteCriticalSection](http://msdn.microsoft.com/library/windows/desktop/ms682552), which releases all system resources used by the critical section object.  
  
## See Also  
 [CComFakeCriticalSection Class](../../atl/reference/ccomfakecriticalsection-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComCriticalSection Class](../../atl/reference/ccomcriticalsection-class.md)








