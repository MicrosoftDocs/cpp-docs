---
title: "PROVIDER_COLUMN_ENTRY_STR | Microsoft Docs"
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
  - "PROVIDER_COLUMN_ENTRY_STR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROVIDER_COLUMN_ENTRY_STR macro"
ms.assetid: f1c27dd6-9ab8-4821-8685-d4dd15e76e88
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# PROVIDER_COLUMN_ENTRY_STR
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [PROVIDER_COLUMN_ENTRY_STR](https://docs.microsoft.com/cpp/data/oledb/provider-column-entry-str).  
  
  
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_STR(  
name  
, ordinal, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `member`  
 [in] The member variable in the data class that stores the data.  
  
## Remarks  
 Use this macro when the column data is assumed to be [DBTYPE_STR](https://msdn.microsoft.com/library/ms711251.aspx).  
  
## Example  
 See [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)

