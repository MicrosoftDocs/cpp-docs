---
title: "IRowsetNotifyCP::Fire_OnRowsetChange | Microsoft Docs"
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
  - "Fire_OnRowsetChange"
  - "IRowsetNotifyCP::Fire_OnRowsetChange"
  - "IRowsetNotifyCP.Fire_OnRowsetChange"
  - "ATL::IRowsetNotifyCP::Fire_OnRowsetChange"
  - "ATL.IRowsetNotifyCP.Fire_OnRowsetChange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Fire_OnRowsetChange method"
ms.assetid: 412a9ec2-5041-4c56-acda-dc8f8e9b35f3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetNotifyCP::Fire_OnRowsetChange
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetNotifyCP::Fire_OnRowsetChange](https://docs.microsoft.com/cpp/data/oledb/irowsetnotifycp-fire-onrowsetchange).  
  
  
Broadcasts an [OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) event to all listeners on the connection point **IID_IRowsetNotify** to notify consumers of a change affecting the entire rowset.  
  
## Syntax  
  
```  
  
      HRESULT Fire_OnRowsetChange(  
   IRowset* pRowset,  
   DBREASON eReason,  
   DBEVENTPHASE ePhase,  
   BOOL fCantDeny   
);  
```  
  
#### Parameters  
 See [IRowsetNotify::OnRowsetChange](https://msdn.microsoft.com/library/ms722669.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetNotifyCP Class](../../data/oledb/irowsetnotifycp-class.md)

