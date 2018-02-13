---
title: "IRowsetIdentityImpl::IsSameRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["IsSameRow", "IRowsetIdentityImpl.IsSameRow", "ATL.IRowsetIdentityImpl.IsSameRow", "IRowsetIdentityImpl::IsSameRow", "ATL::IRowsetIdentityImpl::IsSameRow"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsSameRow method"]
ms.assetid: e35ad54e-73f1-4dc0-8d8c-9e98202baf0a
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetIdentityImpl::IsSameRow
Compares two row handles to see if they refer to the same row.  
  
## Syntax  
  
```cpp
      STDMETHOD(IsSameRow )(HROW hThisRow,  
   HROW hThatRow);  
```  
  
#### Parameters  
 See [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/en-us/library/ms719629.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 To compare row handles, this method casts the **HROW** handles to **RowClass** members and calls `memcmp` on the pointers.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetIdentityImpl Class](../../data/oledb/irowsetidentityimpl-class.md)