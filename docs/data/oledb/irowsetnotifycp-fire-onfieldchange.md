---
title: "IRowsetNotifyCP::Fire_OnFieldChange | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["Fire_OnFieldChange", "ATL::IRowsetNotifyCP::Fire_OnFieldChange", "ATL.IRowsetNotifyCP.Fire_OnFieldChange", "IRowsetNotifyCP.Fire_OnFieldChange", "IRowsetNotifyCP::Fire_OnFieldChange"]
dev_langs: ["C++"]
helpviewer_keywords: ["Fire_OnFieldChange method"]
ms.assetid: 03dad058-8d4f-4113-aea4-ef7764eab9ec
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetNotifyCP::Fire_OnFieldChange
Broadcasts an [OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx) event to notify consumers of a change to the value of a column.  
  
## Syntax  
  
```cpp
HRESULT Fire_OnFieldChange(IRowset* pRowset,  
   HROW hRow,  
   DBORDINAL cColumns,  
   DBORDINAL* rgColumns,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)