---
title: "IRowsetImpl::SetDBStatus | Microsoft Docs"
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
  - "IRowsetImpl.SetDBStatus"
  - "IRowsetImpl::SetDBStatus"
  - "SetDBStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetDBStatus method"
ms.assetid: b73f526a-4fc6-4adb-9611-c3cca2cddb23
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::SetDBStatus
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetImpl::SetDBStatus](https://docs.microsoft.com/cpp/data/oledb/irowsetimpl-setdbstatus).  
  
  
Sets the `DBSTATUS` status flags for the specified field.  
  
## Syntax  
  
```  
  
      virtual HRESULT SetDBStatus(  
   DBSTATUS* statusFlags,  
   RowClass* currentRow,  
   ATLCOLUMNINFO* columnInfo   
);  
```  
  
#### Parameters  
 `statusFlags`  
 The [DBSTATUS](https://msdn.microsoft.com/library/ms722617.aspx) flags to set for the column.  
  
 `currentRow`  
 The current row.  
  
 *columnInfo*  
 The column for which status is being set.  
  
## Return Value  
 A standard `HRESULT` value.  
  
## Remarks  
 The provider overrides this function to provide special processing for **DBSTATUS_S_ISNULL** and **DBSTATUS_S_DEFAULT**.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)

