---
title: "IRowsetUpdateImpl::GetOriginalData | Microsoft Docs"
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
  - "ATL.IRowsetUpdateImpl.GetOriginalData"
  - "IRowsetUpdateImpl.GetOriginalData"
  - "GetOriginalData"
  - "ATL::IRowsetUpdateImpl::GetOriginalData"
  - "IRowsetUpdateImpl::GetOriginalData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetOriginalData method"
ms.assetid: 7477b3b7-6b1b-49a7-8167-b34323f0fdcc
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetUpdateImpl::GetOriginalData
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetUpdateImpl::GetOriginalData](https://docs.microsoft.com/cpp/data/oledb/irowsetupdateimpl-getoriginaldata).  
  
  
Gets the data most recently transmitted to or obtained from the data source, ignoring pending changes.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetOriginalData )(  
   HROW hRow,  
   HACCESSOR hAccessor,  
   void* pData   
);  
```  
  
#### Parameters  
 See [IRowsetUpdate::GetOriginalData](https://msdn.microsoft.com/library/ms709947.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md)

