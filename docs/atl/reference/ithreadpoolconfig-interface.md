---
title: "IThreadPoolConfig Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IThreadPoolConfig"
  - "ATL::IThreadPoolConfig"
  - "ATL.IThreadPoolConfig"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IThreadPoolConfig interface"
ms.assetid: 69e642bf-6925-46e6-9a37-cce52231b1cc
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
# IThreadPoolConfig Interface
This interface provides methods for configuring a thread pool.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
__interface
    __declspec(uuid("B1F64757-6E88-4fa2-8886-7848B0D7E660")) IThreadPoolConfig :  public IUnknown
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetSize](#ithreadpoolconfig__getsize)|Call this method to get the number of threads in the pool.|  
|[GetTimeout](#ithreadpoolconfig__gettimeout)|Call this method to get the maximum time in milliseconds that the thread pool will wait for a thread to shut down.|  
|[SetSize](#ithreadpoolconfig__setsize)|Call this method to set the number of threads in the pool.|  
|[SetTimeout](#ithreadpoolconfig__settimeout)|Call this method to set the maximum time in milliseconds that the thread pool will wait for a thread to shut down.|  
  
## Remarks  
 This interface is implemented by [CThreadPool](../../atl/reference/cthreadpool-class.md).  
  
## Requirements  
 **Header:** atlutil.h  
  
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
 [!code-cpp[NVC_ATL_Utilities#134](../../atl/codesnippet/cpp/ithreadpoolconfig-interface_1.cpp)]  
  
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
  
 If `nNumThreads` is zero, [ATLS_DEFAULT_THREADSPERPROC](http://msdn.microsoft.com/library/e0dcf107-72a9-4122-abb4-83c63aa7d571) will be multiplied by the number of processors in the machine to get the total number of threads.  
  
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
 [Classes](../../atl/reference/atl-classes.md)   
 [CThreadPool Class](../../atl/reference/cthreadpool-class.md)
