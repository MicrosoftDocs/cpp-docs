---
title: "Macros and Global Functions for OLE DB Consumer Templates"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
|[AtlTraceErrorRecords](../data/atltraceerrorrecords.md)|Dumps OLE DB Error Record information to the dump device if an error is returned.|  
  
### Accessor Map Macros  
  
|||  
|-|-|  
|[BEGIN_ACCESSOR](../data/begin_accessor.md)|Marks the beginning of an accessor entry.|  
|[BEGIN_ACCESSOR_MAP](../data/begin_accessor_map.md)|Marks the beginning of the accessor map entries.|  
|[END_ACCESSOR](../data/end_accessor.md)|Marks the end of an accessor entry.|  
|[END_ACCESSOR_MAP](../data/end_accessor_map.md)|Marks the end of the accessor map entries.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_COLUMN_MAP](../data/begin_column_map.md)|Marks the beginning of the column map entries in the user record class.|  
|[BLOB_ENTRY](../data/blob_entry.md)|Used to bind a binary large object (BLOB).|  
|[BLOB_ENTRY_LENGTH](../data/blob_entry_length.md)|Reports the length of the BLOB data column.|  
|[BLOB_ENTRY_LENGTH_STATUS](../data/blob_entry_length_status.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_ENTRY_STATUS](../data/blob_entry_status.md)|Reports the status of the BLOB data column.|  
|[BLOB_NAME](../data/blob_name.md)|Used to bind a binary large object by column name.|  
|[BLOB_NAME_LENGTH](../data/blob_name_length.md)|Reports the length of the BLOB data column.|  
|[BLOB_NAME_LENGTH_STATUS](../data/blob_name_length_status.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_NAME_STATUS](../data/blob_name_status.md)|Reports the status of the BLOB data column.|  
|[BOOKMARK_ENTRY](../data/bookmark_entry.md)|Represents a bookmark entry on the rowset. A bookmark entry is a special kind of column entry.|  
|[COLUMN_ENTRY](../data/column_entry.md)|Represents a binding to a specific column in the database.|  
|[COLUMN_ENTRY_EX](../data/column_entry_ex.md)|Represents a binding to the specific column in the database. Supports `type`, *length*, *precision*, `scale`, and *status* parameters.|  
|[COLUMN_ENTRY_LENGTH](../data/column_entry_length.md)|Represents a binding to the specific column in the database. Supports the *length* variable.|  
|[COLUMN_ENTRY_LENGTH_STATUS](../data/column_entry_length_status.md)|Represents a binding to the specific column in the database. Supports *status* and *length* parameters.|  
|[COLUMN_ENTRY_PS](../data/column_entry_ps.md)|Represents a binding to the specific column in the database. Supports *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH](../data/column_entry_ps_length.md)|Represents a binding to the specific column in the database. Supports the *length* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH_STATUS](../data/column_entry_ps_length_status.md)|Represents a binding to the specific column in the database. Supports *status* and *length* variables, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_STATUS](../data/column_entry_ps_status.md)|Represents a binding to the specific column in the database. Supports the *status* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_STATUS](../data/column_entry_status.md)|Represents a binding to the specific column in the database. Supports the *status* variable.|  
|[COLUMN_ENTRY_TYPE](../data/column_entry_type.md)|Represents a binding to a specific column in the database. Supports `type` parameter.|  
|[COLUMN_ENTRY_TYPE_SIZE](../data/column_entry_type_size.md)|Represents a binding to the specific column in the database. Supports `type` and `size` parameters.|  
|[COLUMN_NAME](../data/column_name.md)|Represents a binding to a specific column in the database by name.|  
|[COLUMN_NAME_EX](../data/column_name_ex.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, size, precision, scale, column length, and column status.|  
|[COLUMN_NAME_LENGTH](../data/column_name_length.md)|Represents a binding to a specific column in the database by name. Supports specification of column length.|  
|[COLUMN_NAME_LENGTH_STATUS](../data/column_name_length_status.md)|Represents a binding to a specific column in the database by name. Supports specification of column length and status.|  
|[COLUMN_NAME_PS](../data/column_name_ps.md)|Represents a binding to a specific column in the database by name. Supports specification of precision and scale.|  
|[COLUMN_NAME_PS_LENGTH](../data/column_name_ps_length.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column length.|  
|[COLUMN_NAME_PS_LENGTH_STATUS](../data/column_name_ps_length_status.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, column length, and column status.|  
|[COLUMN_NAME_PS_STATUS](../data/column_name_ps_status.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column status.|  
|[COLUMN_NAME_STATUS](../data/column_name_status.md)|Represents a binding to a specific column in the database by name. Supports specification of column status.|  
|[COLUMN_NAME_TYPE](../data/column_name_type.md)|Represents a binding to a specific column in the database by name. Supports specification of data type.|  
|[COLUMN_NAME_TYPE_PS](../data/column_name_type_ps.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, precision, and scale.|  
|[COLUMN_NAME_TYPE_SIZE](../data/column_name_type_size.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and size.|  
|[COLUMN_NAME_TYPE_STATUS](../data/column_name_type_status.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and column status.|  
|[END_COLUMN_MAP](../data/end_column_map.md)|Marks the end of the column map entries.|  
  
### Command Macros  
  
|||  
|-|-|  
|[DEFINE_COMMAND](../data/define_command.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../data/ccommand-class.md) class. Accepts only string types matching the specified application type (ANSI or Unicode). It is recommended that you use [DEFINE_COMMAND_EX](../data/define_command_ex.md) instead of `DEFINE_COMMAND`.|  
|[DEFINE_COMMAND_EX](../data/define_command_ex.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../data/ccommand-class.md) class. Supports ANSI and Unicode applications.|  
  
### Parameter Map Macros  
  
|||  
|-|-|  
|[BEGIN_PARAM_MAP](../data/begin_param_map.md)|Marks the beginning of the parameter map entries in the user record class.|  
|[END_PARAM_MAP](../data/end_param_map.md)|Marks the end of the parameter map entries.|  
|[SET_PARAM_TYPE](../data/set_param_type.md)|Specifies `COLUMN_ENTRY` macros that follow the `SET_PARAM_TYPE` macro as input, output, or input/output.|  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)