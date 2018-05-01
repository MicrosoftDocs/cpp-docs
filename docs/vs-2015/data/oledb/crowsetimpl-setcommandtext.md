---
title: "CRowsetImpl::SetCommandText | Microsoft Docs"
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
  - "CRowsetImpl.SetCommandText"
  - "CRowsetImpl::SetCommandText"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetCommandText method"
ms.assetid: e016d7df-c1a0-4dee-b19b-c876680221fd
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowsetImpl::SetCommandText
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowsetImpl::SetCommandText](https://docs.microsoft.com/cpp/data/oledb/crowsetimpl-setcommandtext).  
  
  
Validates and stores the **DBID**s in the two strings ([m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) and [m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)).  
  
## Syntax  
  
```  
  
      HRESULT CRowsetBaseImpl::SetCommandText(  
   DBID* pTableID,  
   DBID* pIndexID   
);  
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

