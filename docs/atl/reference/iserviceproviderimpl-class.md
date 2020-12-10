---
description: "Learn more about: IServiceProviderImpl Class"
title: "IServiceProviderImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IServiceProviderImpl", "ATLCOM/ATL::IServiceProviderImpl", "ATLCOM/ATL::IServiceProviderImpl::QueryService"]
helpviewer_keywords: ["IServiceProviderImpl class", "IServiceProvider interface, ATL implementation"]
ms.assetid: 251254d3-c4ce-40d7-aee0-3d676d1d72f2
---
# IServiceProviderImpl Class

This class provides a default implementation of the `IServiceProvider` interface.

## Syntax

```
template <class T>
class ATL_NO_VTABLE IServiceProviderImpl : public IServiceProvider
```

#### Parameters

*T*<br/>
Your class, derived from `IServiceProviderImpl`.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[IServiceProviderImpl::QueryService](#queryservice)|Creates or accesses the specified service and returns an interface pointer to the specified interface for the service.|

## Remarks

The `IServiceProvider` interface locates a service specified by its GUID and returns the interface pointer for the requested interface on the service. Class `IServiceProviderImpl` provides a default implementation of this interface.

`IServiceProviderImpl` specifies one method: [QueryService](#queryservice), which creates or accesses the specified service and returns an interface pointer to the specified interface for the service.

`IServiceProviderImpl` uses a service map, starting with [BEGIN_SERVICE_MAP](service-map-macros.md#begin_service_map) and ending with [END_SERVICE_MAP](service-map-macros.md#end_service_map).

The service map contains two entries: [SERVICE_ENTRY](service-map-macros.md#service_entry), which indicates a specified service id (SID) supported by the object, and [SERVICE_ENTRY_CHAIN](service-map-macros.md#service_entry_chain), which calls `QueryService` to chain to another object.

## Inheritance Hierarchy

`IServiceProvider`

`IServiceProviderImpl`

## Requirements

**Header:** atlcom.h

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

[Class Overview](../../atl/atl-class-overview.md)
