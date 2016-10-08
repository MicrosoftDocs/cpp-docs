---
title: "CComAutoCriticalSection Class"
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
ms.topic: reference
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
caps.latest.revision: 13
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
# CComAutoCriticalSection Class
`CComAutoCriticalSection` provides methods for obtaining and releasing ownership of a critical section object.  
  
## Syntax  
  
```  
class CComAutoCriticalSection : public CComCriticalSection  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComAutoCriticalSection::CComAutoCriticalSection](../Topic/CComAutoCriticalSection::CComAutoCriticalSection.md)|The constructor.|  
|[CComAutoCriticalSection::~CComAutoCriticalSection](../Topic/CComAutoCriticalSection::~CComAutoCriticalSection.md)|The destructor.|  
  
## Remarks  
 `CComAutoCriticalSection` is similar to class [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md), except `CComAutoCriticalSection` automatically initializes the critical section object in the constructor.  
  
 Typically, you use `CComAutoCriticalSection` through the `typedef` name [AutoCriticalSection](../Topic/CComMultiThreadModel::AutoCriticalSection.md). This name references `CComAutoCriticalSection` when [CComMultiThreadModel](../VS_visualcpp/CComMultiThreadModel-Class.md) is being used.  
  
 The `Init` and `Term` methods from [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md) are not available when using this class.  
  
## Inheritance Hierarchy  
 [CComCriticalSection](../VS_visualcpp/CComCriticalSection-Class.md)  
  
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
 [CComFakeCriticalSection Class](../VS_visualcpp/CComFakeCriticalSection-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [CComCriticalSection Class](../VS_visualcpp/CComCriticalSection-Class.md)