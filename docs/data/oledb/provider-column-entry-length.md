---
title: "PROVIDER_COLUMN_ENTRY_LENGTH | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["PROVIDER_COLUMN_ENTRY_LENGTH"]
dev_langs: ["C++"]
helpviewer_keywords: ["PROVIDER_COLUMN_ENTRY_LENGTH macro"]
ms.assetid: b4a67246-c049-4622-bb65-242cc8cae4be
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# PROVIDER_COLUMN_ENTRY_LENGTH
Represents a specific column supported by the provider.  
  
## Syntax  
  
```cpp
PROVIDER_COLUMN_ENTRY_LENGTH(name  
, ordinal, size, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `size`  
 [in] The column size in bytes.  
  
 `member`  
 [in] The member variable in `dataClass` that stores the column data.  
  
## Remarks  
 Allows you to specify the column size.  
  
## Example  
 See [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)