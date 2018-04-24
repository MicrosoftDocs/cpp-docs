---
title: "ISupportErrorInfoImpl Class | Microsoft Docs"
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
  - "ATL::ISupportErrorInfoImpl<piid>"
  - "ATL::ISupportErrorInfoImpl"
  - "ISupportErrorInfoImpl"
  - "ATL.ISupportErrorInfoImpl<piid>"
  - "ATL.ISupportErrorInfoImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISupportErrorInfo ATL implementation"
  - "ISupportErrorInfoImpl class"
  - "error information, ATL"
ms.assetid: e33a4b11-a123-41cf-bcea-7b19743902af
caps.latest.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ISupportErrorInfoImpl Class
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [ISupportErrorInfoImpl Class](https://docs.microsoft.com/cpp/atl/reference/isupporterrorinfoimpl-class).  
  
  
This class provides a default implementation of the [ISupportErrorInfo Interface](http://msdn.microsoft.com/en-us/42d33066-36b4-4a5b-aa5d-46682e560f32) and can be used when only a single interface generates errors on an object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)].  
  
## Syntax  
  
```
template<const IID* piid>  
class ATL_NO_VTABLE ISupportErrorInfoImpl 
   : public ISupportErrorInfo
```  
  
#### Parameters  
 `piid`  
 A pointer to the IID of an interface that supports [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447).  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ISupportErrorInfoImpl::InterfaceSupportsErrorInfo](#isupporterrorinfoimpl__interfacesupportserrorinfo)|Indicates whether the interface identified by `riid` supports the [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447) interface.|  
  
## Remarks  
 The [ISupportErrorInfo Interface](http://msdn.microsoft.com/en-us/42d33066-36b4-4a5b-aa5d-46682e560f32) ensures that error information can be returned to the client. Objects that use **IErrorInfo** must implement **ISupportErrorInfo**.  
  
 Class `ISupportErrorInfoImpl` provides a default implementation of **ISupportErrorInfo** and can be used when only a single interface generates errors on an object. For example:  
  
 [!code-cpp[NVC_ATL_COM#48](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_COM/Cpp/MySuppErrClass.h#48)]  
  
## Inheritance Hierarchy  
 `ISupportErrorInfo`  
  
 `ISupportErrorInfoImpl`  
  
## Requirements  
 **Header:** atlcom.h  
  
##  <a name="isupporterrorinfoimpl__interfacesupportserrorinfo"></a>  ISupportErrorInfoImpl::InterfaceSupportsErrorInfo  
 Indicates whether the interface identified by `riid` supports the [IErrorInfo](http://msdn.microsoft.com/en-us/4dda6909-2d9a-4727-ae0c-b5f90dcfa447) interface.  
  
```
STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);
```  
  
### Remarks  
 See [ISupportErrorInfo::InterfaceSupportsErrorInfo](http://msdn.microsoft.com/en-us/a54ef18d-ee3f-4483-ac4a-99d758f0960a) in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
##  <a name="ithreadpoolconfig__getsize"></a>  IThreadPoolConfig::GetSize  
 Call this method to get the number of threads in the pool.  
  
```
STDMETHOD(GetSize)(int* pnNumThreads);
```  
  
### Parameters  
 `pnNumThreads`  
 [out] Address of the variable that, on success, receives the number of threads in the pool.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#134](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Utilities/Cpp/NVC_ATL_Utilities.cpp#134)]  
  
##  <a name="ithreadpoolconfig__gettimeout"></a>  IThreadPoolConfig::GetTimeout  
 Call this method to get the maximum time in milliseconds that the thread pool will wait for a thread to shut down.  
  
```
STDMETHOD(GetTimeout)(DWORD* pdwMaxWait);
```  
  
### Parameters  
 `pdwMaxWait`  
 [out] Address of the variable that, on success, receives the maximum time in milliseconds that the thread pool will wait for a thread to shut down.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Example  
 See [IThreadPoolConfig::GetSize](#ithreadpoolconfig__getsize).  
  
##  <a name="ithreadpoolconfig__setsize"></a>  IThreadPoolConfig::SetSize  
 Call this method to set the number of threads in the pool.  
  
```
STDMETHOD(SetSize)(int nNumThreads);
```  
  
### Parameters  
 `nNumThreads`  
 The requested number of threads in the pool.  
  
 If `nNumThreads` is negative, its absolute value will be multiplied by the number of processors in the machine to get the total number of threads.  
  
 If `nNumThreads` is zero, [ATLS_DEFAULT_THREADSPERPROC](../Topic/ATLS_DEFAULT_THREADSPERPROC.md) will be multiplied by the number of processors in the machine to get the total number of threads.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Example  
 See [IThreadPoolConfig::GetSize](#ithreadpoolconfig__getsize).  
  
##  <a name="ithreadpoolconfig__settimeout"></a>  IThreadPoolConfig::SetTimeout  
 Call this method to set the maximum time in milliseconds that the thread pool will wait for a thread to shut down.  
  
```
STDMETHOD(SetTimeout)(DWORD dwMaxWait);
```  
  
### Parameters  
 `dwMaxWait`  
 The requested maximum time in milliseconds that the thread pool will wait for a thread to shut down.  
  
### Return Value  
 Returns S_OK on success, or an error HRESULT on failure.  
  
### Example  
 See [IThreadPoolConfig::GetSize](#ithreadpoolconfig__getsize).  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)








