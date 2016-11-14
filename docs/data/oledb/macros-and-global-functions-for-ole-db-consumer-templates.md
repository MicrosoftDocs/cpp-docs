---
title: "Macros and Global Functions for OLE DB Consumer Templates | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.templates.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB consumer templates, macros"
  - "macros, OLE DB consumer template"
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
caps.latest.revision: 6
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
# Macros and Global Functions for OLE DB Consumer Templates
The OLE DB Consumer Templates include the following macros and global functions:  
  
### Global Functions  
  
|||  
|-|-|  
|[AtlTraceErrorRecords](../../data/oledb/atltraceerrorrecords.md)|Dumps OLE DB Error Record information to the dump device if an error is returned.|  
  
### Accessor Map Macros  
  
|||  
|-|-|  
|[BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)|Marks the beginning of an accessor entry.|  
|[BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)|Marks the beginning of the accessor map entries.|  
|[END_ACCESSOR](../../data/oledb/end-accessor.md)|Marks the end of an accessor entry.|  
|[END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)|Marks the end of the accessor map entries.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)|Marks the beginning of the column map entries in the user record class.|  
|[BLOB_ENTRY](../../data/oledb/blob-entry.md)|Used to bind a binary large object (BLOB).|  
|[BLOB_ENTRY_LENGTH](../../data/oledb/blob-entry-length.md)|Reports the length of the BLOB data column.|  
|[BLOB_ENTRY_LENGTH_STATUS](../../data/oledb/blob-entry-length-status.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_ENTRY_STATUS](../../data/oledb/blob-entry-status.md)|Reports the status of the BLOB data column.|  
|[BLOB_NAME](../../data/oledb/blob-name.md)|Used to bind a binary large object by column name.|  
|[BLOB_NAME_LENGTH](../../data/oledb/blob-name-length.md)|Reports the length of the BLOB data column.|  
|[BLOB_NAME_LENGTH_STATUS](../../data/oledb/blob-name-length-status.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_NAME_STATUS](../../data/oledb/blob-name-status.md)|Reports the status of the BLOB data column.|  
|[BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md)|Represents a bookmark entry on the rowset. A bookmark entry is a special kind of column entry.|  
|[COLUMN_ENTRY](../../data/oledb/column-entry.md)|Represents a binding to a specific column in the database.|  
|[COLUMN_ENTRY_EX](../../data/oledb/column-entry-ex.md)|Represents a binding to the specific column in the database. Supports `type`, *length*, *precision*, `scale`, and *status* parameters.|  
|[COLUMN_ENTRY_LENGTH](../../data/oledb/column-entry-length.md)|Represents a binding to the specific column in the database. Supports the *length* variable.|  
|[COLUMN_ENTRY_LENGTH_STATUS](../../data/oledb/column-entry-length-status.md)|Represents a binding to the specific column in the database. Supports *status* and *length* parameters.|  
|[COLUMN_ENTRY_PS](../../data/oledb/column-entry-ps.md)|Represents a binding to the specific column in the database. Supports *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH](../../data/oledb/column-entry-ps-length.md)|Represents a binding to the specific column in the database. Supports the *length* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH_STATUS](../../data/oledb/column-entry-ps-length-status.md)|Represents a binding to the specific column in the database. Supports *status* and *length* variables, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_STATUS](../../data/oledb/column-entry-ps-status.md)|Represents a binding to the specific column in the database. Supports the *status* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_STATUS](../../data/oledb/column-entry-status.md)|Represents a binding to the specific column in the database. Supports the *status* variable.|  
|[COLUMN_ENTRY_TYPE](../../data/oledb/column-entry-type.md)|Represents a binding to a specific column in the database. Supports `type` parameter.|  
|[COLUMN_ENTRY_TYPE_SIZE](../../data/oledb/column-entry-type-size.md)|Represents a binding to the specific column in the database. Supports `type` and `size` parameters.|  
|[COLUMN_NAME](../../data/oledb/column-name.md)|Represents a binding to a specific column in the database by name.|  
|[COLUMN_NAME_EX](../../data/oledb/column-name-ex.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, size, precision, scale, column length, and column status.|  
|[COLUMN_NAME_LENGTH](../../data/oledb/column-name-length.md)|Represents a binding to a specific column in the database by name. Supports specification of column length.|  
|[COLUMN_NAME_LENGTH_STATUS](../../data/oledb/column-name-length-status.md)|Represents a binding to a specific column in the database by name. Supports specification of column length and status.|  
|[COLUMN_NAME_PS](../../data/oledb/column-name-ps.md)|Represents a binding to a specific column in the database by name. Supports specification of precision and scale.|  
|[COLUMN_NAME_PS_LENGTH](../../data/oledb/column-name-ps-length.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column length.|  
|[COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, column length, and column status.|  
|[COLUMN_NAME_PS_STATUS](../../data/oledb/column-name-ps-status.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column status.|  
|[COLUMN_NAME_STATUS](../../data/oledb/column-name-status.md)|Represents a binding to a specific column in the database by name. Supports specification of column status.|  
|[COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)|Represents a binding to a specific column in the database by name. Supports specification of data type.|  
|[COLUMN_NAME_TYPE_PS](../../data/oledb/column-name-type-ps.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, precision, and scale.|  
|[COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and size.|  
|[COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and column status.|  
|[END_COLUMN_MAP](../../data/oledb/end-column-map.md)|Marks the end of the column map entries.|  
  
### Command Macros  
  
|||  
|-|-|  
|[DEFINE_COMMAND](../../data/oledb/define-command.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Accepts only string types matching the specified application type (ANSI or Unicode). It is recommended that you use [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) instead of `DEFINE_COMMAND`.|  
|[DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../../data/oledb/ccommand-class.md) class. Supports ANSI and Unicode applications.|  
  
### Parameter Map Macros  
  
|||  
|-|-|  
|[BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md)|Marks the beginning of the parameter map entries in the user record class.|  
|[END_PARAM_MAP](../../data/oledb/end-param-map.md)|Marks the end of the parameter map entries.|  
|[SET_PARAM_TYPE](../../data/oledb/set-param-type.md)|Specifies `COLUMN_ENTRY` macros that follow the `SET_PARAM_TYPE` macro as input, output, or input/output.|  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)