---
title: "IRowsetCreatorImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::IRowsetCreatorImpl", "ATL.IRowsetCreatorImpl", "ATL::IRowsetCreatorImpl<T>", "ATL.IRowsetCreatorImpl<T>", "IRowsetCreatorImpl", "IRowsetCreatorImpl.SetSite", "IRowsetCreatorImpl<T>::SetSite", "IRowsetCreatorImpl::SetSite", "SetSite", "ATL.IRowsetCreatorImpl.SetSite", "ATL::IRowsetCreatorImpl<T>::SetSite", "ATL::IRowsetCreatorImpl::SetSite", "ATL.IRowsetCreatorImpl<T>.SetSite"]
dev_langs: ["C++"]
helpviewer_keywords: ["IRowsetCreatorImpl class", "SetSite method"]
ms.assetid: 92cc950f-7978-4754-8d9a-defa63867d82
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetCreatorImpl Class

Performs the same functions as `IObjectWithSite` but also enables the OLE DB properties `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS`.

## Syntax

```cpp
template < class T >
class ATL_NO_VTABLE IRowsetCreatorImpl
   : public IObjectWithSiteImpl< T >
```

### Parameters

*T*<br/>
A class derived from `IRowsetCreator`.

## Requirements

**Header:** atldb.h

## Members

### Methods

|||
|-|-|
|[SetSite](#setsite)|Sets the site that contains the rowset object.|

## Remarks

This class inherits from [IObjectWithSite](/windows/desktop/api/ocidl/nn-ocidl-iobjectwithsite) and overrides [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite). When a provider command or session object creates a rowset, it calls `QueryInterface` on the rowset object looking for `IObjectWithSite` and calls `SetSite` passing the rowset object's `IUnkown` interface as the site interface.

## <a name="setsite"></a> IRowsetCreatorImpl::SetSite

Sets the site that contains the rowset object. For more information, see [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite).

### Syntax

```cpp
STDMETHOD(SetSite )(IUnknown* pCreator);
```

#### Parameters

*pCreator*<br/>
[in] Pointer to the `IUnknown` interface pointer of the site managing the rowset object.

### Return Value

A standard HRESULT.

### Remarks

In addition, `IRowsetCreatorImpl::SetSite` enables the OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS` properties.

## See Also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)