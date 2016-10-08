---
title: "IWorkerThreadClient Interface"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
caps.latest.revision: 18
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
# IWorkerThreadClient Interface
`IWorkerThreadClient` is the interface implemented by clients of the             [CWorkerThread](../VS_visualcpp/CWorkerThread-Class.md) class.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the                 Windows Runtime.  
  
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
  
HRESULT CloseHandle(  
   HANDLE   
hHandle  
);  
  
```  
  
### Parameters  
 *hHandle*  
 The handle to be closed.  
  
### Return Value  
 Return S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The handle passed to this method was previously associated with this object by a call to                         [CWorkerThread::AddHandle](../VS_visualcpp/CWorkerThread-Class.md#cworkerthread__addhandle).  
  
### Example  
 The following code shows a simple implementation of                                 `IWorkerThreadClient::CloseHandle`.  
  
 [!CODE [NVC_ATL_Utilities#135](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#135)]  
  
##  <a name="iworkerthreadclient__execute"></a>  IWorkerThreadClient::Execute  
 Implement this method to execute code when the handle associated with this object becomes signaled.  
  
```  
  
HRESULT Execute(  
   DWORD_PTR   
dwParam  
,  
   HANDLE   
hObject  
);  
  
```  
  
### Parameters  
 `dwParam`  
 The user parameter.  
  
 `hObject`  
 The handle that has become signaled.  
  
### Return Value  
 Return S_OK on success, or an error HRESULT on failure.  
  
### Remarks  
 The handle and DWORD/pointer passed to this method were previously associated with this object by a call to                         [CWorkerThread::AddHandle](../VS_visualcpp/CWorkerThread-Class.md#cworkerthread__addhandle).  
  
### Example  
 The following code shows a simple implementation of                                 `IWorkerThreadClient::Execute`.  
  
 [!CODE [NVC_ATL_Utilities#136](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#136)]  
  
## See Also  
 [Classes](../VS_visualcpp/ATL-Classes.md)   
 [CWorkerThread Class](../VS_visualcpp/CWorkerThread-Class.md)