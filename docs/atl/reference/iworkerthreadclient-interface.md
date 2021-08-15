---
description: "Learn more about: IWorkerThreadClient Interface"
title: "IWorkerThreadClient Interface"
ms.date: "11/04/2016"
f1_keywords: ["IWorkerThreadClient", "ATLUTIL/ATL::IWorkerThreadClient", "ATLUTIL/ATL::CloseHandle", "ATLUTIL/ATL::Execute"]
helpviewer_keywords: ["IWorkerThreadClient interface"]
ms.assetid: 56f4a2f5-007e-4a33-9e20-05187629f715
---
# IWorkerThreadClient Interface

`IWorkerThreadClient` is the interface implemented by clients of the [CWorkerThread](../../atl/reference/cworkerthread-class.md) class.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
__interface IWorkerThreadClient
```

## Members

### Methods

|Name|Description|
|-|-|
|[CloseHandle](#closehandle)|Implement this method to close the handle associated with this object.|
|[Execute](#execute)|Implement this method to execute code when the handle associated with this object becomes signaled.|

## Remarks

Implement this interface when you have code that needs to execute on a worker thread in response to a handle becoming signaled.

## Requirements

**Header:** atlutil.h

## <a name="closehandle"></a> IWorkerThreadClient::CloseHandle

Implement this method to close the handle associated with this object.

```
HRESULT CloseHandle(HANDLE  hHandle);
```

### Parameters

*hHandle*<br/>
The handle to be closed.

### Return Value

Return S_OK on success, or an error HRESULT on failure.

### Remarks

The handle passed to this method was previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### Example

The following code shows a simple implementation of `IWorkerThreadClient::CloseHandle`.

[!code-cpp[NVC_ATL_Utilities#135](../../atl/codesnippet/cpp/iworkerthreadclient-interface_1.cpp)]

## <a name="execute"></a> IWorkerThreadClient::Execute

Implement this method to execute code when the handle associated with this object becomes signaled.

```
HRESULT Execute(DWORD_PTR dwParam, HANDLE hObject);
```

### Parameters

*dwParam*<br/>
The user parameter.

*hObject*<br/>
The handle that has become signaled.

### Return Value

Return S_OK on success, or an error HRESULT on failure.

### Remarks

The handle and DWORD/pointer passed to this method were previously associated with this object by a call to [CWorkerThread::AddHandle](../../atl/reference/cworkerthread-class.md#addhandle).

### Example

The following code shows a simple implementation of `IWorkerThreadClient::Execute`.

[!code-cpp[NVC_ATL_Utilities#136](../../atl/codesnippet/cpp/iworkerthreadclient-interface_2.cpp)]

## See also

[Classes](../../atl/reference/atl-classes.md)<br/>
[CWorkerThread Class](../../atl/reference/cworkerthread-class.md)
