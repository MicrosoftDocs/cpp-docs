---
title: "CNoWorkerThread Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CNoWorkerThread"
  - "ATL.CNoWorkerThread"
  - "CNoWorkerThread"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoWorkerThread class"
ms.assetid: 29f06bae-b658-4aac-9c14-331e996d25d1
caps.latest.revision: 21
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
# CNoWorkerThread Class
Use this class as the argument for the `MonitorClass` template parameter to cache classes if you want to disable dynamic cache maintenance.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
class CNoWorkerThread
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CNoWorkerThread::AddHandle](#cnoworkerthread__addhandle)|Non-functional equivalent of [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__addhandle).|  
|[CNoWorkerThread::AddTimer](#cnoworkerthread__addtimer)|Non-functional equivalent of [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#cworkerthread__addtimer).|  
|[CNoWorkerThread::GetThreadHandle](#cnoworkerthread__getthreadhandle)|Non-functional equivalent of [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__getthreadhandle).|  
|[CNoWorkerThread::GetThreadId](#cnoworkerthread__getthreadid)|Non-functional equivalent of [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#cworkerthread__getthreadid).|  
|[CNoWorkerThread::Initialize](#cnoworkerthread__initialize)|Non-functional equivalent of [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#cworkerthread__initialize).|  
|[CNoWorkerThread::RemoveHandle](#cnoworkerthread__removehandle)|Non-functional equivalent of [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__removehandle).|  
|[CNoWorkerThread::Shutdown](#cnoworkerthread__shutdown)|Non-functional equivalent of [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#cworkerthread__shutdown).|  
  
## Remarks  
 This class provides the same public interface as [CWorkerThread](../../atl/reference/cworkerthread-class.md). This interface is expected to be provided by the `MonitorClass` template parameter to cache classes.  
  
 The methods in this class are implemented to do nothing. The methods that return an HRESULT always return S_OK, and the methods that return a HANDLE or thread ID always return 0.  
  
## Requirements  
 **Header:** atlutil.h  
  
##  <a name="cnoworkerthread__addhandle"></a>  CNoWorkerThread::AddHandle  
 Non-functional equivalent of [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__addhandle).  
  
```
HRESULT AddHandle(HANDLE /* hObject
 */,
    IWorkerThreadClient* /* pClient
 */,
    DWORD_PTR /* dwParam
 */) throw();
```  
  
### Return Value  
 Always returns S_OK.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__addtimer"></a>  CNoWorkerThread::AddTimer  
 Non-functional equivalent of [CWorkerThread::AddTimer](../../atl/reference/cworkerthread-class.md#cworkerthread__addtimer).  
  
```
HRESULT AddTimer(DWORD /* dwInterval
 */,
    IWorkerThreadClient* /* pClient
 */,
    DWORD_PTR /* dwParam
 */,
    HANDLE* /* phTimer
 */) throw();
```  
  
### Return Value  
 Always returns S_OK.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__getthreadhandle"></a>  CNoWorkerThread::GetThreadHandle  
 Non-functional equivalent of [CWorkerThread::GetThreadHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__getthreadhandle).  
  
```
HANDLE GetThreadHandle() throw();
```  
  
### Return Value  
 Always returns NULL.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__getthreadid"></a>  CNoWorkerThread::GetThreadId  
 Non-functional equivalent of [CWorkerThread::GetThreadId](../../atl/reference/cworkerthread-class.md#cworkerthread__getthreadid).  
  
```
DWORD GetThreadId() throw();
```  
  
### Return Value  
 Always returns 0.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__initialize"></a>  CNoWorkerThread::Initialize  
 Non-functional equivalent of [CWorkerThread::Initialize](../../atl/reference/cworkerthread-class.md#cworkerthread__initialize).  
  
```
HRESULT Initialize() throw();
```  
  
### Return Value  
 Always returns S_OK.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__removehandle"></a>  CNoWorkerThread::RemoveHandle  
 Non-functional equivalent of [CWorkerThread::RemoveHandle](../../atl/reference/cworkerthread-class.md#cworkerthread__removehandle).  
  
```
HRESULT RemoveHandle(HANDLE /* hObject
 */) throw();
```  
  
### Return Value  
 Always returns S_OK.  
  
### Remarks  
 The implementation provided by this class does nothing.  
  
##  <a name="cnoworkerthread__shutdown"></a>  CNoWorkerThread::Shutdown  
 Non-functional equivalent of [CWorkerThread::Shutdown](../../atl/reference/cworkerthread-class.md#cworkerthread__shutdown).  
  
```
HRESULT Shutdown(DWORD dwWait = ATL_WORKER_THREAD_WAIT) throw();
```  
  
### Return Value  
 Always returns S_OK.  
  
### Remarks  
 The implementation provided by this class does nothing.









