---
title: "Macros for OLE DB Provider Templates"
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
  - "OLE DB provider templates, macros"
  - "macros, OLE DB Provider Templates"
  - "Provider Template macros (OLE DB)"
  - "OLE DB Provider Template macros"
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
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
# Macros for OLE DB Provider Templates
The OLE DB Templates Provider macros offer functionality in the following categories:  
  
### Property Set Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROPERTY_SET](../data/begin_property_set.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPERTY_SET_EX](../data/begin_property_set_ex.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPSET_MAP](../data/begin_propset_map.md)|Marks the beginning of a property set that can be hidden or defined outside the scope of the provider.|  
|[CHAIN_PROPERTY_SET](../data/chain_property_set.md)|Chains property groups together.|  
|[END_PROPERTY_SET](../data/end_property_set.md)|Marks the end of a property set.|  
|[END_PROPSET_MAP](../data/end_propset_map.md)|Marks the end of a property set map.|  
|[PROPERTY_INFO_ENTRY](../data/property_info_entry.md)|Sets a specific property in a property set to a default value.|  
|[PROPERTY_INFO_ENTRY_EX](../data/property_info_entry_ex.md)|Sets a specific property in a property set to a value supplied by you. Also enables you to set flags and options.|  
|[PROPERTY_INFO_ENTRY_VALUE](../data/property_info_entry_value.md)|Sets a specific property in a property set to a value supplied by you.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROVIDER_COLUMN_MAP](../data/begin_provider_column_map.md)|Marks the beginning of the provider column map entries.|  
|[END_PROVIDER_COLUMN_MAP](../data/end_provider_column_map.md)|Marks the end of the provider column map entries.|  
|[PROVIDER_COLUMN_ENTRY](../data/provider_column_entry.md)|Represents a specific column supported by the provider.|  
|[PROVIDER_COLUMN_ENTRY_GN](../data/provider_column_entry_gn.md)|Represents a specific column supported by the provider. You can specify the column's size, data type, precision, scale, and schema rowset GUID.|  
|[PROVIDER_COLUMN_ENTRY_FIXED](../data/provider_column_entry_fixed.md)|Represents a specific column supported by the provider. You can specify the column data type.|  
|[PROVIDER_COLUMN_ENTRY_LENGTH](../data/provider_column_entry_length.md)|Represents a specific column supported by the provider. You can specify the column size.|  
|[PROVIDER_COLUMN_ENTRY_STR](../data/provider_column_entry_str.md)|Represents a specific column supported by the provider. It assumes the column type is a string.|  
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](../data/provider_column_entry_type_length.md)|Represents a specific column supported by the provider. Like PROVIDER_COLUMN_ENTRY_LENGTH, but also allows you to specify the column's data type as well as size.|  
|[PROVIDER_COLUMN_ENTRY_WSTR](../data/provider_column_entry_wstr.md)|Represents a specific column supported by the provider. It assumes the column type is a Unicode character string.|  
  
### Schema Rowset Macros  
  
|||  
|-|-|  
|[BEGIN_SCHEMA_MAP](../data/begin_schema_map.md)|Marks the beginning of a schema map.|  
|[SCHEMA_ENTRY](../data/schema_entry.md)|Associates a GUID with a class.|  
|[END_SCHEMA_MAP](../data/end_schema_map.md)|Marks the end of a schema map.|  
  
## See Also  
 [OLE DB Provider Templates](../data/ole-db-provider-templates--c---.md)   
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../data/creating-an-ole-db-provider.md)   
 [OLE DB Provider Templates Reference](../data/ole-db-provider-templates-reference.md)