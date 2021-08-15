---
description: "Learn more about: Connection Point Global Functions"
title: "Connection Point Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlbase/ATL::AtlAdvise", "atlbase/ATL::AtlUnadvise", "atlbase/ATL::AtlAdviseSinkMap"]
helpviewer_keywords: ["connection points [C++], global functions"]
ms.assetid: bcb4bf50-2155-4e20-b8bb-f2908b03a6e7
---
# Connection Point Global Functions

These functions provide support for connection points and sink maps.

> [!IMPORTANT]
> The functions listed in the following table cannot be used in applications that execute in the Windows Runtime.

|Function|Description|
|-|-|
|[AtlAdvise](#atladvise)|Creates a connection between an object's connection point and a client's sink.|
|[AtlUnadvise](#atlunadvise)|Terminates the connection established through `AtlAdvise`.|
|[AtlAdviseSinkMap](#atladvisesinkmap)|Advises or unadvises entries in an event sink map.|

## Requirements

**Header:** atlbase.h

## <a name="atladvise"></a> AtlAdvise

Creates a connection between an object's connection point and a client's sink.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
HRESULT    AtlAdvise(
    IUnknown* pUnkCP,
    IUnknown* pUnk,
    const IID& iid,
    LPDWORD pdw);
```

### Parameters

*pUnkCP*<br/>
[in] A pointer to the `IUnknown` of the object the client wants to connect with.

*pUnk*<br/>
[in] A pointer to the client's `IUnknown`.

*iid*<br/>
[in] The GUID of the connection point. Typically, this is the same as the outgoing interface managed by the connection point.

*pdw*<br/>
[out] A pointer to the cookie that uniquely identifies the connection.

### Return Value

A standard HRESULT value.

### Remarks

The sink implements the outgoing interface supported by the connection point. The client uses the *pdw* cookie to remove the connection by passing it to [AtlUnadvise](#atlunadvise).

### Example

[!code-cpp[NVC_ATL_Windowing#91](../../atl/codesnippet/cpp/connection-point-global-functions_1.cpp)]

## <a name="atlunadvise"></a> AtlUnadvise

Terminates the connection established through [AtlAdvise](#atladvise).

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
HRESULT    AtlUnadvise(
    IUnknown* pUnkCP,
    const IID& iid,
    DWORD dw);
```

### Parameters

*pUnkCP*<br/>
[in] A pointer to the `IUnknown` of the object that the client is connected with.

*iid*<br/>
[in] The GUID of the connection point. Typically, this is the same as the outgoing interface managed by the connection point.

*dw*<br/>
[in] The cookie that uniquely identifies the connection.

### Return Value

A standard HRESULT value.

### Example

[!code-cpp[NVC_ATL_Windowing#96](../../atl/codesnippet/cpp/connection-point-global-functions_2.cpp)]

## <a name="atladvisesinkmap"></a> AtlAdviseSinkMap

Call this function to advise or unadvise all entries in the object's sink event map.

> [!IMPORTANT]
> This function cannot be used in applications that execute in the Windows Runtime.

```
HRESULT AtlAdviseSinkMap(T* pT, bool bAdvise);
```

### Parameters

*pT*<br/>
[in] A pointer to the object containing the sink map.

*bAdvise*<br/>
[in] TRUE if all sink entries are to be advised; FALSE if all sink entries are to be unadvised.

### Return Value

A standard HRESULT value.

### Example

[!code-cpp[NVC_ATL_Windowing#92](../../atl/codesnippet/cpp/connection-point-global-functions_3.h)]

## See also

[Functions](../../atl/reference/atl-functions.md)<br/>
[Connection Point Macros](../../atl/reference/connection-point-macros.md)
