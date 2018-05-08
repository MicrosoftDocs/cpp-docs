---
title: "IRowsetCreatorImpl::SetSite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IRowsetCreatorImpl.SetSite", "IRowsetCreatorImpl<T>::SetSite", "IRowsetCreatorImpl::SetSite", "SetSite", "ATL.IRowsetCreatorImpl.SetSite", "ATL::IRowsetCreatorImpl<T>::SetSite", "ATL::IRowsetCreatorImpl::SetSite", "ATL.IRowsetCreatorImpl<T>.SetSite"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetSite method"]
ms.assetid: e92e63d5-93e4-4ee0-9ef7-bb6583cc8091
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetCreatorImpl::SetSite
Sets the site that contains the rowset object. For more information, see [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869).  
  
## Syntax  
  
```cpp
      STDMETHOD(SetSite )(IUnknown* pCreator);  
```  
  
#### Parameters  
 `pCreator`  
 [in] Pointer to the **IUnknown** interface pointer of the site managing the rowset object.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 In addition, `IRowsetCreatorImpl::SetSite` enables the OLE DB **DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS** properties.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetCreatorImpl Class](../../data/oledb/irowsetcreatorimpl-class.md)