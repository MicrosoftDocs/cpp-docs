---
title: "PROVIDER_COLUMN_ENTRY_FIXED | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROVIDER_COLUMN_ENTRY_FIXED"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROVIDER_COLUMN_ENTRY_FIXED macro"
ms.assetid: 71f9c9aa-56a0-488b-96ba-5c72da9c71d0
caps.latest.revision: 7
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
# PROVIDER_COLUMN_ENTRY_FIXED
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_FIXED(  
name  
, ordinal, dbtype, member )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `dbtype`  
 [in] The data type in [DBTYPE](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
 `member`  
 [in] The member variable in `dataClass` that stores the data.  
  
## Remarks  
 Allows you to specify the column data type.  
  
## Example  
 See [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)