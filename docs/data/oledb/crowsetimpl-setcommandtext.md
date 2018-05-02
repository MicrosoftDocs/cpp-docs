---
title: "CRowsetImpl::SetCommandText | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CRowsetImpl.SetCommandText", "CRowsetImpl::SetCommandText"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetCommandText method"]
ms.assetid: e016d7df-c1a0-4dee-b19b-c876680221fd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowsetImpl::SetCommandText
Validates and stores the **DBID**s in the two strings ([m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) and [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)).  
  
## Syntax  
  
```cpp
HRESULT CRowsetBaseImpl::SetCommandText(DBID* pTableID,  
   DBID* pIndexID);  
```  
  
#### Parameters  
 `pTableID`  
 [in] A pointer to the **DBID** representing the table ID.  
  
 `pIndexID`  
 [in] A pointer to the **DBID** representing the index ID.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The **SetCommentText** method is called by `CreateRowset`, a static templatized method of `IOpenRowsetImpl`.  
  
 This method delegates its work by calling [ValidateCommandID](../../data/oledb/crowsetimpl-validatecommandid.md) and [GetCommandFromID](../../data/oledb/crowsetimpl-getcommandfromid.md) through an upcasted pointer.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../../data/oledb/crowsetimpl-class.md)