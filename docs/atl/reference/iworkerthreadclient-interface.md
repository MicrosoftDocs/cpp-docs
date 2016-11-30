---
title: "IWorkerThreadClient Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IWorkerThreadClient"
  - "ATL::IWorkerThreadClient"
  - "IWorkerThreadClient"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IWorkerThreadClient interface"
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
caps.latest.revision: 24
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
# IWorkerThreadClient Interface
`IWorkerThreadClient` is the interface implemented by clients of the [CWorkerThread](../../atl/reference/cworkerthread-class.md) class.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
__interface IWorkerThreadClient
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[CloseHandle](#iworkerthreadclient__closehandle)|Implement this method to close the handle associated with this object.|  
|[Execute](#iworkerthreadclient__execute)|Implement this method to execute code when the handle associated with this object becomes signaled.|  
  
## Remarks  
 Implement this interface when you have code that needs to execute on a worker thread in response to a handle becoming signaled.  
  
## Requirements  
 **Header:** atlutil.h  
  
##  <a name="iworkerthreadclient__closehandle"></a>  IWorkerThreadClient::CloseHandle  
 Implement this method to close the handle associated with this object.  
  
```
HRESULT CloseHandle(HANDLE    hHandle);
```  
  
### Parameters  
 *hHandle*  
 The handle to be closed.  
  
### Return Value  
 Return S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The handle passed to this method was previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__addhandle).  
  
### Example  
 The following code shows a simple implementation of `IWorkerThreadClient::CloseHandle`.  
  
 [!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]  
  
##  <a name="iworkerthreadclient__execute"></a>  IWorkerThreadClient::Execute  
 Implement this method to execute code when the handle associated with this object becomes signaled.  
  
```
HRESULT Execute(
    DWORD_PTR
dwParam,
 HANDLE   hObject);
```  
  
### Parameters  
 `dwParam`  
 The user parameter.  
  
 `hObject`  
 The handle that has become signaled.  
  
### Return Value  
 Return S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The handle and DWORD/pointer passed to this method were previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__addhandle).  
  
### Example  
 The following code shows a simple implementation of `IWorkerThreadClient::Execute`.  
  
 [!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]  
  
## See Also  
 [Classes](../../atl/reference/atl-classes.md)   
 [CWorkerThread Class](../../atl/reference/cworkerthread-class.md)
