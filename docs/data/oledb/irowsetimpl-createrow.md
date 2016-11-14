---
title: "IRowsetImpl::CreateRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetImpl.CreateRow"
  - "ATL.IRowsetImpl.CreateRow"
  - "ATL::IRowsetImpl::CreateRow"
  - "CreateRow"
  - "IRowsetImpl::CreateRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateRow method"
ms.assetid: b01c430c-9484-4fef-a6cf-a2e8d9d99130
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IRowsetImpl::CreateRow
A helper method called by [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) to allocate a new **HROW**.  
  
## Syntax  
  
```  
  
      HRESULT CreateRow(  
   DBROWOFFSET lRowsOffset,  
   DBCOUNTITEM& cRowsObtained,  
   HROW* rgRows   
);  
```  
  
#### Parameters  
 *lRowsOffset*  
 Cursor position of the row being created.  
  
 *cRowsObtained*  
 A reference passed back to the user indicating the number of rows created.  
  
 *rgRows*  
 An array of **HROW**s returned to the caller with the newly created row handles.  
  
## Remarks  
 If the row exists, this method calls [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) and returns. Otherwise, it allocates a new instance of the RowClass template variable and adds it to [m_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)