---
title: "IRowsetIdentityImpl::IsSameRow | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IsSameRow"
  - "IRowsetIdentityImpl.IsSameRow"
  - "ATL.IRowsetIdentityImpl.IsSameRow"
  - "IRowsetIdentityImpl::IsSameRow"
  - "ATL::IRowsetIdentityImpl::IsSameRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IsSameRow method"
ms.assetid: e35ad54e-73f1-4dc0-8d8c-9e98202baf0a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetIdentityImpl::IsSameRow
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetIdentityImpl::IsSameRow](https://docs.microsoft.com/cpp/data/oledb/irowsetidentityimpl-issamerow).  
  
  
Compares two row handles to see if they refer to the same row.  
  
## Syntax  
  
```  
  
      STDMETHOD( IsSameRow )(  
   HROW hThisRow,  
   HROW hThatRow   
);  
```  
  
#### Parameters  
 See [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 To compare row handles, this method casts the **HROW** handles to **RowClass** members and calls `memcmp` on the pointers.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetIdentityImpl Class](../../data/oledb/irowsetidentityimpl-class.md)

