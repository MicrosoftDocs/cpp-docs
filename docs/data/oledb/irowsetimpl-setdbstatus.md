---
title: "IRowsetImpl::SetDBStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# IRowsetImpl::SetDBStatus
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
 The [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) flags to set for the column.  
  
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