---
title: "IRowsetNotifyCP::Fire_OnRowChange | Microsoft Docs"
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
  - "IRowsetNotifyCP.Fire_OnRowChange"
  - "ATL.IRowsetNotifyCP.Fire_OnRowChange"
  - "Fire_OnRowChange"
  - "ATL::IRowsetNotifyCP::Fire_OnRowChange"
  - "IRowsetNotifyCP::Fire_OnRowChange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Fire_OnRowChange method"
ms.assetid: 6f9beed6-7a69-4c92-936f-422e98f3de5c
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetNotifyCP::Fire_OnRowChange
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetNotifyCP::Fire_OnRowChange](https://docs.microsoft.com/cpp/data/oledb/irowsetnotifycp-fire-onrowchange).  
  
  
Broadcasts an [OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx) event to all listeners on the connection point **IID_IRowsetNotify** to notify consumers of a change affecting the rows.  
  
## Syntax  
  
```  
  
      HRESULT Fire_OnRowChange(  
   IRowset* pRowset,  
   DBCOUNTITEM cRows,  
   const HROW rghRows[],  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny   
);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowChange](https://msdn.microsoft.com/library/ms722694.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)

