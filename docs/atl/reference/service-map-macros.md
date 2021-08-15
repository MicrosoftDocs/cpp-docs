---
description: "Learn more about: Service Map Macros"
title: "Service Map Macros"
ms.date: "11/04/2016"
f1_keywords: ["atlcom/ATL::BEGIN_SERVICE_MAP", "atlcom/ATL::END_SERVICE_MAP", "atlcom/ATL::SERVICE_ENTRY", "atlcom/ATL::SERVICE_ENTRY_CHAIN"]
ms.assetid: ca02a125-454a-4cf6-aac2-1c5585025ed4
---
# Service Map Macros

These macros define service maps and entries.

|Name|Description|
|-|-|
|[BEGIN_SERVICE_MAP](#begin_service_map)|Marks the beginning of an ATL service map.|
|[END_SERVICE_MAP](#end_service_map)|Marks the end of an ATL service map.|
|[SERVICE_ENTRY](#service_entry)|Indicates that the object supports a specific service ID.|
|[SERVICE_ENTRY_CHAIN](#service_entry_chain)|Instructs [IServiceProviderImpl::QueryService](#queryservice) to chain to the specified object.|

## Requirements

**Header:** atlcom.h

## <a name="begin_service_map"></a> BEGIN_SERVICE_MAP

Marks the beginning of the service map.

```
BEGIN_SERVICE_MAP(theClass)
```

### Parameters

*theClass*<br/>
[in] Specifies the class containing the service map.

### Remarks

Use the service map to implement service provider functionality on your COM object. First, you must derive your class from [IServiceProviderImpl](../../atl/reference/iserviceproviderimpl-class.md). There are two types of entries:

- [SERVICE_ENTRY](#service_entry)   Indicates support for the specified service ID (SID).

- [SERVICE_ENTRY_CHAIN](#service_entry_chain)   Instructs [IServiceProviderImpl::QueryService](#queryservice) to chain to another, specified object.

### Example

[!code-cpp[NVC_ATL_COM#57](../../atl/codesnippet/cpp/service-map-macros_1.h)]

## <a name="end_service_map"></a> END_SERVICE_MAP

Marks the end of the service map.

```
END_SERVICE_MAP()
```

### Example

See the example for [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="service_entry"></a> SERVICE_ENTRY

Indicates that the object supports the service id specified by *SID*.

```
SERVICE_ENTRY( SID )
```

### Parameters

*SID*<br/>
The service ID.

### Example

See the example for [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="service_entry_chain"></a> SERVICE_ENTRY_CHAIN

Instructs [IServiceProviderImpl::QueryService](#queryservice) to chain to the object specified by *punk*.

```
SERVICE_ENTRY_CHAIN( punk )
```

### Parameters

*punk*<br/>
A pointer to the **IUnknown** interface to which to chain.

### Example

See the example for [BEGIN_SERVICE_MAP](#begin_service_map).

## <a name="queryservice"></a> IServiceProviderImpl::QueryService

Creates or accesses the specified service and returns an interface pointer to the specified interface for the service.

```
STDMETHOD(QueryService)(
    REFGUID guidService,
    REFIID riid,
    void** ppvObject);
```

### Parameters

*guidService*<br/>
[in] Pointer to a service identifier (SID).

*riid*<br/>
[in] Identifier of the interface to which the caller is to gain access.

*ppvObj*<br/>
[out] Indirect pointer to the requested interface.

### Return Value

The returned HRESULT value is one of the following:

|Return value|Meaning|
|------------------|-------------|
|S_OK|The service was successfully created or retrieved.|
|E_INVALIDARG|One or more of the arguments is invalid.|
|E_OUTOFMEMORY|Memory is insufficient to create the service.|
|E_UNEXPECTED|An unknown error occurred.|
|E_NOINTERFACE|The requested interface is not part of this service, or the service is unknown.|

### Remarks

`QueryService` returns an indirect pointer to the requested interface in the specified service. The caller is responsible for releasing this pointer when it is no longer required.

When you call `QueryService`, you pass both a service identifier (*guidService*) and an interface identifier (*riid*). The *guidService* specifies the service to which you want access, and the *riid* identifies an interface that is part of the service. In return, you receive an indirect pointer to the interface.

The object that implements the interface might also implement interfaces that are part of other services. Consider the following:

- Some of these interfaces might be optional. Not all interfaces defined in the service description are necessarily present on every implementation of the service or on every returned object.

- Unlike calls to `QueryInterface`, passing a different service identifier does not necessarily mean that a different Component Object Model (COM) object is returned.

- The returned object might have additional interfaces that are not part of the definition of the service.

Two different services, such as SID_SMyService and SID_SYourService, can both specify the use of the same interface, even though the implementation of the interface might have nothing in common between the two services. This works, because a call to `QueryService` (SID_SMyService, IID_IDispatch) can return a different object than `QueryService` (SID_SYourService, IID_IDispatch). Object identity is not assumed when you specify a different service identifier.

## See also

[Macros](../../atl/reference/atl-macros.md)
