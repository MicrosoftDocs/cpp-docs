---
title: "PROVIDER_COLUMN_ENTRY_GN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROVIDER_COLUMN_ENTRY_GN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROVIDER_COLUMN_ENTRY_GN macro"
ms.assetid: be77ba85-634c-4e28-832f-d2fa40413254
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
# PROVIDER_COLUMN_ENTRY_GN
Represents a specific column supported by the provider.  
  
## Syntax  
  
```  
  
PROVIDER_COLUMN_ENTRY_GN (  
name  
, ordinal, flags, colSize, dbtype, precision, scale, guid )  
```  
  
#### Parameters  
 *name*  
 [in] The column name.  
  
 `ordinal`  
 [in] The column number. Unless the column is a Bookmark column, the column number must not be 0.  
  
 `flags`  
 [in] Specifies how data is returned. See the `dwFlags` description in [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *colSize*  
 [in] The column size.  
  
 `dbtype`  
 [in] Indicates the data type of the value. See the **wType** description in [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *precision*  
 [in] Indicates the precision to use when getting data if *dbType* is `DBTYPE_NUMERIC` or **DBTYPE_DECIMAL**. See the **bPrecision** description in [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `scale`  
 [in] Indicates the scale to use when getting data if dbType is `DBTYPE_NUMERIC` or **DBTYPE_DECIMAL**. See the **bScale** description in [DBBINDING Structures](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `guid`  
 A schema rowset GUID. See [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in the *OLE DB Programmer's Reference* for a list of schema rowsets and their GUIDs.  
  
## Remarks  
 Allows you to specify the column's size, data type, precision, scale, and schema rowset GUID.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [Macros for OLE DB Provider Templates](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)