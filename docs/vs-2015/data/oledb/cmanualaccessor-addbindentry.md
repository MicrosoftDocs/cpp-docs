---
title: "CManualAccessor::AddBindEntry | Microsoft Docs"
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
  - "ATL::CManualAccessor::AddBindEntry"
  - "ATL.CManualAccessor.AddBindEntry"
  - "CManualAccessor::AddBindEntry"
  - "AddBindEntry"
  - "CManualAccessor.AddBindEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddBindEntry method"
ms.assetid: 8556dda9-dda1-4f67-96bc-6031e6c6a271
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CManualAccessor::AddBindEntry
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CManualAccessor::AddBindEntry](https://docs.microsoft.com/cpp/data/oledb/cmanualaccessor-addbindentry).  
  
  
Adds a bind entry to the output columns.  
  
## Syntax  
  
```  
  
      void AddBindEntry(  
   DBORDINAL nOrdinal,  
   DBTYPE wType,  
   DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL   
) throw ( );  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] Column number.  
  
 `wType`  
 [in] Data type.  
  
 `nColumnSize`  
 [in] Column size in bytes.  
  
 `pData`  
 [in] A pointer to the column data stored in the buffer.  
  
 `pLength`  
 [in] A pointer to the field length, if required.  
  
 `pStatus`  
 [in] A pointer to the variable to be bound to the column status, if required.  
  
## Remarks  
 To use this function, you must first call [CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md). You cannot add more entries than the number of columns specified in `CreateAccessor`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)   
 [DBViewer sample](../../top/visual-cpp-samples.md)

