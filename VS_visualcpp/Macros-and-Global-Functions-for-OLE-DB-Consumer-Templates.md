---
title: "Macros and Global Functions for OLE DB Consumer Templates"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Macros and Global Functions for OLE DB Consumer Templates
The OLE DB Consumer Templates include the following macros and global functions:  
  
### Global Functions  
  
|||  
|-|-|  
|[AtlTraceErrorRecords](../VS_visualcpp/AtlTraceErrorRecords.md)|Dumps OLE DB Error Record information to the dump device if an error is returned.|  
  
### Accessor Map Macros  
  
|||  
|-|-|  
|[BEGIN_ACCESSOR](../VS_visualcpp/BEGIN_ACCESSOR.md)|Marks the beginning of an accessor entry.|  
|[BEGIN_ACCESSOR_MAP](../VS_visualcpp/BEGIN_ACCESSOR_MAP.md)|Marks the beginning of the accessor map entries.|  
|[END_ACCESSOR](../VS_visualcpp/END_ACCESSOR.md)|Marks the end of an accessor entry.|  
|[END_ACCESSOR_MAP](../VS_visualcpp/END_ACCESSOR_MAP.md)|Marks the end of the accessor map entries.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_COLUMN_MAP](../VS_visualcpp/BEGIN_COLUMN_MAP.md)|Marks the beginning of the column map entries in the user record class.|  
|[BLOB_ENTRY](../VS_visualcpp/BLOB_ENTRY.md)|Used to bind a binary large object (BLOB).|  
|[BLOB_ENTRY_LENGTH](../VS_visualcpp/BLOB_ENTRY_LENGTH.md)|Reports the length of the BLOB data column.|  
|[BLOB_ENTRY_LENGTH_STATUS](../VS_visualcpp/BLOB_ENTRY_LENGTH_STATUS.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_ENTRY_STATUS](../VS_visualcpp/BLOB_ENTRY_STATUS.md)|Reports the status of the BLOB data column.|  
|[BLOB_NAME](../VS_visualcpp/BLOB_NAME.md)|Used to bind a binary large object by column name.|  
|[BLOB_NAME_LENGTH](../VS_visualcpp/BLOB_NAME_LENGTH.md)|Reports the length of the BLOB data column.|  
|[BLOB_NAME_LENGTH_STATUS](../VS_visualcpp/BLOB_NAME_LENGTH_STATUS.md)|Reports the length and status of the BLOB data column.|  
|[BLOB_NAME_STATUS](../VS_visualcpp/BLOB_NAME_STATUS.md)|Reports the status of the BLOB data column.|  
|[BOOKMARK_ENTRY](../VS_visualcpp/BOOKMARK_ENTRY.md)|Represents a bookmark entry on the rowset. A bookmark entry is a special kind of column entry.|  
|[COLUMN_ENTRY](../VS_visualcpp/COLUMN_ENTRY.md)|Represents a binding to a specific column in the database.|  
|[COLUMN_ENTRY_EX](../VS_visualcpp/COLUMN_ENTRY_EX.md)|Represents a binding to the specific column in the database. Supports `type`, *length*, *precision*, `scale`, and *status* parameters.|  
|[COLUMN_ENTRY_LENGTH](../VS_visualcpp/COLUMN_ENTRY_LENGTH.md)|Represents a binding to the specific column in the database. Supports the *length* variable.|  
|[COLUMN_ENTRY_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_LENGTH_STATUS.md)|Represents a binding to the specific column in the database. Supports *status* and *length* parameters.|  
|[COLUMN_ENTRY_PS](../VS_visualcpp/COLUMN_ENTRY_PS.md)|Represents a binding to the specific column in the database. Supports *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH](../VS_visualcpp/COLUMN_ENTRY_PS_LENGTH.md)|Represents a binding to the specific column in the database. Supports the *length* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_LENGTH_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_LENGTH_STATUS.md)|Represents a binding to the specific column in the database. Supports *status* and *length* variables, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_PS_STATUS](../VS_visualcpp/COLUMN_ENTRY_PS_STATUS.md)|Represents a binding to the specific column in the database. Supports the *status* variable, *precision* and `scale` parameters.|  
|[COLUMN_ENTRY_STATUS](../VS_visualcpp/COLUMN_ENTRY_STATUS.md)|Represents a binding to the specific column in the database. Supports the *status* variable.|  
|[COLUMN_ENTRY_TYPE](../VS_visualcpp/COLUMN_ENTRY_TYPE.md)|Represents a binding to a specific column in the database. Supports `type` parameter.|  
|[COLUMN_ENTRY_TYPE_SIZE](../VS_visualcpp/COLUMN_ENTRY_TYPE_SIZE.md)|Represents a binding to the specific column in the database. Supports `type` and `size` parameters.|  
|[COLUMN_NAME](../VS_visualcpp/COLUMN_NAME.md)|Represents a binding to a specific column in the database by name.|  
|[COLUMN_NAME_EX](../VS_visualcpp/COLUMN_NAME_EX.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, size, precision, scale, column length, and column status.|  
|[COLUMN_NAME_LENGTH](../VS_visualcpp/COLUMN_NAME_LENGTH.md)|Represents a binding to a specific column in the database by name. Supports specification of column length.|  
|[COLUMN_NAME_LENGTH_STATUS](../VS_visualcpp/COLUMN_NAME_LENGTH_STATUS.md)|Represents a binding to a specific column in the database by name. Supports specification of column length and status.|  
|[COLUMN_NAME_PS](../VS_visualcpp/COLUMN_NAME_PS.md)|Represents a binding to a specific column in the database by name. Supports specification of precision and scale.|  
|[COLUMN_NAME_PS_LENGTH](../VS_visualcpp/COLUMN_NAME_PS_LENGTH.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column length.|  
|[COLUMN_NAME_PS_LENGTH_STATUS](../VS_visualcpp/COLUMN_NAME_PS_LENGTH_STATUS.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, column length, and column status.|  
|[COLUMN_NAME_PS_STATUS](../VS_visualcpp/COLUMN_NAME_PS_STATUS.md)|Represents a binding to a specific column in the database by name. Supports specification of precision, scale, and column status.|  
|[COLUMN_NAME_STATUS](../VS_visualcpp/COLUMN_NAME_STATUS.md)|Represents a binding to a specific column in the database by name. Supports specification of column status.|  
|[COLUMN_NAME_TYPE](../VS_visualcpp/COLUMN_NAME_TYPE.md)|Represents a binding to a specific column in the database by name. Supports specification of data type.|  
|[COLUMN_NAME_TYPE_PS](../VS_visualcpp/COLUMN_NAME_TYPE_PS.md)|Represents a binding to a specific column in the database by name. Supports specification of data type, precision, and scale.|  
|[COLUMN_NAME_TYPE_SIZE](../VS_visualcpp/COLUMN_NAME_TYPE_SIZE.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and size.|  
|[COLUMN_NAME_TYPE_STATUS](../VS_visualcpp/COLUMN_NAME_TYPE_STATUS.md)|Represents a binding to a specific column in the database by name. Supports specification of data type and column status.|  
|[END_COLUMN_MAP](../VS_visualcpp/END_COLUMN_MAP.md)|Marks the end of the column map entries.|  
  
### Command Macros  
  
|||  
|-|-|  
|[DEFINE_COMMAND](../VS_visualcpp/DEFINE_COMMAND.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../VS_visualcpp/CCommand-Class.md) class. Accepts only string types matching the specified application type (ANSI or Unicode). It is recommended that you use [DEFINE_COMMAND_EX](../VS_visualcpp/DEFINE_COMMAND_EX.md) instead of `DEFINE_COMMAND`.|  
|[DEFINE_COMMAND_EX](../VS_visualcpp/DEFINE_COMMAND_EX.md)|Specifies the command that will be used to create the rowset when using the [CCommand](../VS_visualcpp/CCommand-Class.md) class. Supports ANSI and Unicode applications.|  
  
### Parameter Map Macros  
  
|||  
|-|-|  
|[BEGIN_PARAM_MAP](../VS_visualcpp/BEGIN_PARAM_MAP.md)|Marks the beginning of the parameter map entries in the user record class.|  
|[END_PARAM_MAP](../VS_visualcpp/END_PARAM_MAP.md)|Marks the end of the parameter map entries.|  
|[SET_PARAM_TYPE](../VS_visualcpp/SET_PARAM_TYPE.md)|Specifies `COLUMN_ENTRY` macros that follow the `SET_PARAM_TYPE` macro as input, output, or input/output.|  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)