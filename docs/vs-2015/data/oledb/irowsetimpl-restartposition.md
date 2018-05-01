---
title: "IRowsetImpl::RestartPosition | Microsoft Docs"
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
  - "ATL.IRowsetImpl.RestartPosition"
  - "IRowsetImpl::RestartPosition"
  - "RestartPosition"
  - "ATL::IRowsetImpl::RestartPosition"
  - "IRowsetImpl.RestartPosition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RestartPosition method"
ms.assetid: 14de66ef-8d2c-4404-adb6-3f6c74ac6cf1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::RestartPosition
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetImpl::RestartPosition](https://docs.microsoft.com/cpp/data/oledb/irowsetimpl-restartposition).  
  
  
Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.  
  
## Syntax  
  
```  
  
      STDMETHOD( RestartPosition )(  
   HCHAPTER /* hReserved */   
);  
```  
  
#### Parameters  
 See [IRowset::RestartPosition](https://msdn.microsoft.com/library/ms712877.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 The rowset position is undefined until **GetNextRow** is called. You can move backwards in a rowet by calling [RestartPosition](#vcrefirowsetimplrestartposition) and then fetching or scrolling backwards.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)

