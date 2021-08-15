---
description: "Learn more about: IAccessorImpl Class"
title: "IAccessorImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IAccessorImpl", "ATL.IAccessorImpl.IAccessorImpl", "ATL::IAccessorImpl::IAccessorImpl", "IAccessorImpl::IAccessorImpl", "IAccessorImpl.IAccessorImpl", "ATL::IAccessorImpl::AddRefAccessor", "AddRefAccessor", "IAccessorImpl::AddRefAccessor", "IAccessorImpl.AddRefAccessor", "ATL.IAccessorImpl.AddRefAccessor", "IAccessorImpl::CreateAccessor", "CreateAccessor", "ATL::IAccessorImpl::CreateAccessor", "IAccessorImpl.CreateAccessor", "ATL.IAccessorImpl.CreateAccessor", "IAccessorImpl.GetBindings", "ATL::IAccessorImpl::GetBindings", "IAccessorImpl::GetBindings", "GetBindings", "ATL.IAccessorImpl.GetBindings", "ReleaseAccessor", "IAccessorImpl::ReleaseAccessor", "ATL.IAccessorImpl.ReleaseAccessor", "ATL::IAccessorImpl::ReleaseAccessor", "IAccessorImpl.ReleaseAccessor"]
helpviewer_keywords: ["IAccessorImpl class", "IAccessorImpl class, constructor", "IAccessorImpl constructor", "AddRefAccessor method", "CreateAccessor method", "GetBindings method", "ReleaseAccessor method"]
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
---
# IAccessorImpl Class

Provides an implementation of the [IAccessor](/previous-versions/windows/desktop/ms719672(v=vs.85)) interface.

## Syntax

```cpp
template <class T,
   class BindType = ATLBINDINGS,
   class BindingVector = CAtlMap <HACCESSOR hAccessor, BindType* pBindingsStructure>>
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>
```

### Parameters

*T*<br/>
Your rowset or command object class.

*BindType*<br/>
Storage unit for binding information. The default is the `ATLBINDINGS` structure (see atldb.h).

*BindingVector*<br/>
Storage unit for column information. The default is [CAtlMap](../../atl/reference/catlmap-class.md) where the key element is an HACCESSOR value and the value element is a pointer to a `BindType` structure.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[IAccessorImpl](#iaccessorimpl)|The constructor.|

### Interface Methods

| Name | Description |
|-|-|
|[AddRefAccessor](#addrefaccessor)|Adds a reference count to an existing accessor.|
|[CreateAccessor](#createaccessor)|Creates an accessor from a set of bindings.|
|[GetBindings](#getbindings)|Returns the bindings in an accessor.|
|[ReleaseAccessor](#releaseaccessor)|Releases an accessor.|

## Remarks

This is mandatory on rowsets and commands. OLE DB requires providers to implement an HACCESSOR, which is a tag to an array of [DBBINDING](/previous-versions/windows/desktop/ms716845(v=vs.85)) structures. HACCESSORs provided by `IAccessorImpl` are addresses of the `BindType` structures. By default, `BindType` is defined as an `ATLBINDINGS` in `IAccessorImpl`'s template definition. `BindType` provides a mechanism used by `IAccessorImpl` to track the number of elements in its `DBBINDING` array as well as a reference count and accessor flags.

## <a name="iaccessorimpl"></a> IAccessorImpl::IAccessorImpl

The constructor.

### Syntax

```cpp
IAccessorImpl();
```

## <a name="addrefaccessor"></a> IAccessorImpl::AddRefAccessor

Adds a reference count to an existing accessor.

### Syntax

```cpp
STDMETHOD(AddRefAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### Parameters

See [IAccessor::AddRefAccessor](/previous-versions/windows/desktop/ms714978(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="createaccessor"></a> IAccessorImpl::CreateAccessor

Creates an accessor from a set of bindings.

### Syntax

```cpp
STDMETHOD(CreateAccessor)(DBACCESSORFLAGS dwAccessorFlags,
   DBCOUNTITEM cBindings,
   const DBBINDING rgBindings[],
   DBLENGTH cbRowSize,
   HACCESSOR* phAccessor,
   DBBINDSTATUS rgStatus[]);
```

#### Parameters

See [IAccessor::CreateAccessor](/previous-versions/windows/desktop/ms720969(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getbindings"></a> IAccessorImpl::GetBindings

Returns the basic columns bindings from the consumer in an accessor.

### Syntax

```cpp
STDMETHOD(GetBindings)(HACCESSOR hAccessor,
   DBACCESSORFLAGS* pdwAccessorFlags,
   DBCOUNTITEM* pcBindings,
   DBBINDING** prgBindings);
```

#### Parameters

See [IAccessor::GetBindings](/previous-versions/windows/desktop/ms721253(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="releaseaccessor"></a> IAccessorImpl::ReleaseAccessor

Releases an accessor.

### Syntax

```cpp
STDMETHOD(ReleaseAccessor)(HACCESSOR hAccessor,
   DBREFCOUNT* pcRefCount);
```

#### Parameters

See [IAccessor::ReleaseAccessor](/previous-versions/windows/desktop/ms719717(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
