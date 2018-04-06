---
title: "IRowsetNotifyCP::Fire_OnRowsetChange | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["Fire_OnRowsetChange", "IRowsetNotifyCP::Fire_OnRowsetChange", "IRowsetNotifyCP.Fire_OnRowsetChange", "ATL::IRowsetNotifyCP::Fire_OnRowsetChange", "ATL.IRowsetNotifyCP.Fire_OnRowsetChange"]
dev_langs: ["C++"]
helpviewer_keywords: ["Fire_OnRowsetChange method"]
ms.assetid: 412a9ec2-5041-4c56-acda-dc8f8e9b35f3
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetNotifyCP::Fire_OnRowsetChange
Broadcasts an [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) event to all listeners on the connection point **IID_IRowsetNotify** to notify consumers of a change affecting the entire rowset.  
  
## Syntax  
  
```cpp
HRESULT Fire_OnRowsetChange(IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)