---
title: "BEGIN_SCHEMA_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["BEGIN_SCHEMA_MAP"]
dev_langs: ["C++"]
helpviewer_keywords: ["BEGIN_SCHEMA_MAP macro"]
ms.assetid: 4e751023-35bc-4efd-9018-5448dd1ad751
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# BEGIN_SCHEMA_MAP
Denotes the beginning of a schema map.  
  
## Syntax  
  
```cpp
      BEGIN_SCHEMA_MAP(SchemaClass);  
```  
  
#### Parameters  
 *SchemaClass*  
 The class that contains the MAP. Typically this will be the session class.  
  
## Remarks  
 See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the Windows SDK for more information about schema rowsets.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [SCHEMA_ENTRY](../../data/oledb/schema-entry.md)   
 [END_SCHEMA_MAP](../../data/oledb/end-schema-map.md)   
 [IDBSchemaRowsetImpl Class](../../data/oledb/idbschemarowsetimpl-class.md)