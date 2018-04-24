---
title: "IWorkerThreadClient Interface | Microsoft Docs"
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
  - "ATL.IWorkerThreadClient"
  - "ATL::IWorkerThreadClient"
  - "IWorkerThreadClient"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IWorkerThreadClient interface"
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
caps.latest.revision: 30
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IWorkerThreadClient Interface
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IWorkerThreadClient Interface](https://docs.microsoft.com/cpp/atl/reference/iworkerthreadclient-interface).  
  
  
IWorkerThreadClient` is the interface implemented by clients of the [CWorkerThread](../../atl/reference/cworkerthread-class.md) class.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
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
HRESULT CloseHandle(HANDLE hHandle);
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
  
 [!code-cpp[NVC_ATL_Utilities#135](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#135)]  
  
##  <a name="iworkerthreadclient__execute"></a>  IWorkerThreadClient::Execute  
 Implement this method to execute code when the handle associated with this object becomes signaled.  
  
```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
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
  
 [!code-cpp[NVC_ATL_Utilities#136](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#136)]  
  
## See Also  
 [Classes](../../atl/reference/atl-classes.md)   
 [CWorkerThread Class](../../atl/reference/cworkerthread-class.md)








