---
title: "Macros for OLE DB Provider Templates"
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
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
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
# Macros for OLE DB Provider Templates
The OLE DB Templates Provider macros offer functionality in the following categories:  
  
### Property Set Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROPERTY_SET](../VS_visualcpp/BEGIN_PROPERTY_SET.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPERTY_SET_EX](../VS_visualcpp/BEGIN_PROPERTY_SET_EX.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPSET_MAP](../VS_visualcpp/BEGIN_PROPSET_MAP.md)|Marks the beginning of a property set that can be hidden or defined outside the scope of the provider.|  
|[CHAIN_PROPERTY_SET](../VS_visualcpp/CHAIN_PROPERTY_SET.md)|Chains property groups together.|  
|[END_PROPERTY_SET](../VS_visualcpp/END_PROPERTY_SET.md)|Marks the end of a property set.|  
|[END_PROPSET_MAP](../VS_visualcpp/END_PROPSET_MAP.md)|Marks the end of a property set map.|  
|[PROPERTY_INFO_ENTRY](../VS_visualcpp/PROPERTY_INFO_ENTRY.md)|Sets a specific property in a property set to a default value.|  
|[PROPERTY_INFO_ENTRY_EX](../VS_visualcpp/PROPERTY_INFO_ENTRY_EX.md)|Sets a specific property in a property set to a value supplied by you. Also enables you to set flags and options.|  
|[PROPERTY_INFO_ENTRY_VALUE](../VS_visualcpp/PROPERTY_INFO_ENTRY_VALUE.md)|Sets a specific property in a property set to a value supplied by you.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROVIDER_COLUMN_MAP](../VS_visualcpp/BEGIN_PROVIDER_COLUMN_MAP.md)|Marks the beginning of the provider column map entries.|  
|[END_PROVIDER_COLUMN_MAP](../VS_visualcpp/END_PROVIDER_COLUMN_MAP.md)|Marks the end of the provider column map entries.|  
|[PROVIDER_COLUMN_ENTRY](../VS_visualcpp/PROVIDER_COLUMN_ENTRY.md)|Represents a specific column supported by the provider.|  
|[PROVIDER_COLUMN_ENTRY_GN](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_GN.md)|Represents a specific column supported by the provider. You can specify the column's size, data type, precision, scale, and schema rowset GUID.|  
|[PROVIDER_COLUMN_ENTRY_FIXED](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_FIXED.md)|Represents a specific column supported by the provider. You can specify the column data type.|  
|[PROVIDER_COLUMN_ENTRY_LENGTH](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_LENGTH.md)|Represents a specific column supported by the provider. You can specify the column size.|  
|[PROVIDER_COLUMN_ENTRY_STR](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_STR.md)|Represents a specific column supported by the provider. It assumes the column type is a string.|  
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_TYPE_LENGTH.md)|Represents a specific column supported by the provider. Like PROVIDER_COLUMN_ENTRY_LENGTH, but also allows you to specify the column's data type as well as size.|  
|[PROVIDER_COLUMN_ENTRY_WSTR](../VS_visualcpp/PROVIDER_COLUMN_ENTRY_WSTR.md)|Represents a specific column supported by the provider. It assumes the column type is a Unicode character string.|  
  
### Schema Rowset Macros  
  
|||  
|-|-|  
|[BEGIN_SCHEMA_MAP](../VS_visualcpp/BEGIN_SCHEMA_MAP.md)|Marks the beginning of a schema map.|  
|[SCHEMA_ENTRY](../VS_visualcpp/SCHEMA_ENTRY.md)|Associates a GUID with a class.|  
|[END_SCHEMA_MAP](../VS_visualcpp/END_SCHEMA_MAP.md)|Marks the end of a schema map.|  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an OLE DB Provider](../VS_visualcpp/Creating-an-OLE-DB-Provider.md)   
 [OLE DB Provider Templates Reference](../VS_visualcpp/OLE-DB-Provider-Templates-Reference.md)