---
title: "COLUMN_ENTRY_TYPE_SIZE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["COLUMN_ENTRY_TYPE_SIZE"]
dev_langs: ["C++"]
helpviewer_keywords: ["COLUMN_ENTRY_TYPE_SIZE macro"]
ms.assetid: d8b169e8-af22-464b-8cb3-eaa346f7a739
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# COLUMN_ENTRY_TYPE_SIZE
Represents a binding to the specific column in the database. Supports `type` and `size` parameters.  
  
## Syntax  
  
```cpp
COLUMN_ENTRY_TYPE_SIZE(nOrdinal, wType, nLength, data)  
  
```  
  
#### Parameters  
 `nOrdinal`  
 [in] The column number.  
  
 `wType`  
 [in] Data type of column entry.  
  
 `nLength`  
 [in] Size of column entry in bytes.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 This macro is a specialized variant of the [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro that provides a means of specifying data size and type.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)