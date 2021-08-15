---
description: "Learn more about: IDBCreateSessionImpl Class"
title: "IDBCreateSessionImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IDBCreateSessionImpl", "ATL.IDBCreateSessionImpl", "ATL::IDBCreateSessionImpl", "IDBCreateSessionImpl::CreateSession", "IDBCreateSessionImpl.CreateSession", "CreateSession"]
helpviewer_keywords: ["IDBCreateSessionImpl class", "CreateSession method"]
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
---
# IDBCreateSessionImpl Class

Provides an implementation for the [IDBCreateSession](/previous-versions/windows/desktop/ms724076(v=vs.85)) interface.

## Syntax

```cpp
template <class T, class SessionClass>
class ATL_NO_VTABLE IDBCreateSessionImpl
   : public IDBCreateSession
```

### Parameters

*T*<br/>
YOUR CLASS, DERIVED FROM

*SessionClass*<br/>
The session object.

## Requirements

**Header:** atldb.h

## Members

### Interface Methods

| Name | Description |
|-|-|
|[CreateSession](#createsession)|Creates a new session from the data source object and returns the requested interface on the newly created session.|

## Remarks

A mandatory interface on data source objects.

## <a name="createsession"></a> IDBCreateSessionImpl::CreateSession

Creates a new session from the data source object and returns the requested interface on the newly created session.

### Syntax

```cpp
STDMETHOD(CreateSession)(IUnknown * pUnkOuter,
   REFIID riid,
   IUnknown ** ppDBSession);
```

#### Parameters

See [IDBCreateSession::CreateSession](/previous-versions/windows/desktop/ms714942(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)
