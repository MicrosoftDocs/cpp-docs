---
title: "CAtlAutoThreadModuleT Class"
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
ms.assetid: ae1667c6-3fb8-47bc-b35d-9ea5e9896d7f
caps.latest.revision: 14
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
# CAtlAutoThreadModuleT Class
This class provides methods for implementing a thread-pooled, apartment-model COM server.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template <  
    class T,  
    class ThreadAllocator = CComSimpleThreadAllocator,  
    DWORD dwWait = INFINITE >  
    class ATL_NO_VTABLE CAtlAutoThreadModuleT :  
    public IAtlAutoThreadModule  
```  
  
#### Parameters  
 `T`  
 The class which will implement the COM server.  
  
 `ThreadAllocator`  
 The class managing thread selection. The default value is [CComSimpleThreadAllocator](../VS_visualcpp/CComSimpleThreadAllocator-Class.md).  
  
 `dwWait`  
 Specifies the time-out interval, in milliseconds. The default is INFINITE, which means the method's time-out interval never elapses.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlAutoThreadModuleT::GetDefaultThreads](../Topic/CAtlAutoThreadModuleT::GetDefaultThreads.md)|This static function dynamically calculates and returns the maximum number of threads for the EXE module, based on the number of processors.|  
  
## Remarks  
 The class [CAtlAutoThreadModule](../VS_visualcpp/CAtlAutoThreadModule-Class.md) derives from `CAtlAutoThreadModuleT` in order to implement a thread-pooled, apartment-model COM server. It replaces the obsolete class [CComAutoThreadModule](../VS_visualcpp/CComAutoThreadModule-Class.md).  
  
> [!NOTE]
>  This class should not be used in a DLL, as the default `dwWait` value of INFINITE will cause a deadlock when the DLL is unloaded.  
  
## Inheritance Hierarchy  
 `IAtlAutoThreadModule`  
  
 `CAtlAutoThreadModuleT`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="catlautothreadmodulet__getdefaultthreads"></a>  CAtlAutoThreadModuleT::GetDefaultThreads  
 This static function dynamically calculates and returns the maximum number of threads for the EXE module, based on the number of processors.  
  
```  
static int GetDefaultThreads();  
```  
  
### Return Value  
 The number of threads to be created in the EXE module.  
  
### Remarks  
 Override this method if you want to use a different method for calculating the number of threads. By default, the number of threads is based on the number of processors.  
  
## See Also  
 [IAtlAutoThreadModule Class](../VS_visualcpp/IAtlAutoThreadModule-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)   
 [IAtlAutoThreadModule Class](../VS_visualcpp/IAtlAutoThreadModule-Class.md)   
 [Module Classes](../VS_visualcpp/ATL-Module-Classes.md)