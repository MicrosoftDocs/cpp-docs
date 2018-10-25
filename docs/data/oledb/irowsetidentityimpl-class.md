---
title: "IRowsetIdentityImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::IRowsetIdentityImpl", "ATL.IRowsetIdentityImpl", "IRowsetIdentityImpl", "IsSameRow", "IRowsetIdentityImpl.IsSameRow", "ATL.IRowsetIdentityImpl.IsSameRow", "IRowsetIdentityImpl::IsSameRow", "ATL::IRowsetIdentityImpl::IsSameRow"]
dev_langs: ["C++"]
helpviewer_keywords: ["IRowsetIdentityImpl class", "IsSameRow method"]
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetIdentityImpl Class

Implements the OLE DB [IRowsetIdentity](/previous-versions/windows/desktop/ms715913) interface, which enables testing for row identity.  

## Syntax

```cpp
template <class T, class RowClass = CSimpleRow>
class ATL_NO_VTABLE IRowsetIdentityImpl   
   : public IRowsetIdentity
```  

### Parameters  

*T*<br/>
A class derived from `IRowsetIdentityImpl`.  

*RowClass*<br/>
The storage unit for the `HROW`.  

## Requirements  

**Header:** atldb.h  

## Members  

### Methods  

|||
|-|-|
|[IsSameRow](#issamerow)|Compares two row handles to see if they refer to the same row.|  

## <a name="issamerow"></a> IRowsetIdentityImpl::IsSameRow

Compares two row handles to see if they refer to the same row.  

### Syntax  

```cpp
STDMETHOD(IsSameRow )(HROW hThisRow,  
   HROW hThatRow);
```  

#### Parameters  

See [IRowsetIdentity::IsSameRow](/previous-versions/windows/desktop/ms719629) in the *OLE DB Programmer's Reference*.  

### Remarks  

To compare row handles, this method casts the `HROW` handles to `RowClass` members and calls `memcmp` on the pointers.  

## See Also  

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)