---
title: "CComSimpleThreadAllocator Class"
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
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
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
# CComSimpleThreadAllocator Class
This class manages thread selection for the class `CComAutoThreadModule`.  
  
## Syntax  
  
```  
class CComSimpleThreadAllocator  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComSimpleThreadAllocator::GetThread](../Topic/CComSimpleThreadAllocator::GetThread.md)|Selects a thread.|  
  
## Remarks  
 `CComSimpleThreadAllocator` manages thread selection for [CComAutoThreadModule](../VS_visualcpp/CComAutoThreadModule-Class.md). `CComSimpleThreadAllocator::GetThread` simply cycles through each thread and returns the next one in the sequence.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomsimplethreadallocator__getthread"></a>  CComSimpleThreadAllocator::GetThread  
 Selects a thread by specifying the next thread in the sequence.  
  
```  
int GetThread(  
    CComApartment* /* pApt */,  
    int nThreads );  
```  
  
### Parameters  
 `pApt`  
 Not used in ATL's default implementation.  
  
 `nThreads`  
 The maximum number of threads in the EXE module.  
  
### Return Value  
 An integer between zero and ( `nThreads` – 1). Identifies one of the threads in the EXE module.  
  
### Remarks  
 You can override `GetThread` to provide a different method of selection or to make use of the `pApt` parameter.  
  
 `GetThread` is called by [CComAutoThreadModule::CreateInstance](../Topic/CComAutoThreadModule::CreateInstance.md).  
  
## See Also  
 [CComApartment Class](../VS_visualcpp/CComApartment-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)