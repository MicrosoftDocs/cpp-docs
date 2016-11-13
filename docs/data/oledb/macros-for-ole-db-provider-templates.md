---
title: "Macros for OLE DB Provider Templates | Microsoft Docs"
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
  - "OLE DB provider templates, macros"
  - "macros, OLE DB Provider Templates"
  - "Provider Template macros (OLE DB)"
  - "OLE DB Provider Template macros"
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
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
# Macros for OLE DB Provider Templates
The OLE DB Templates Provider macros offer functionality in the following categories:  
  
### Property Set Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROPERTY_SET](../../data/oledb/begin-property-set.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPERTY_SET_EX](../../data/oledb/begin-property-set-ex.md)|Marks the beginning of a property set.|  
|[BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md)|Marks the beginning of a property set that can be hidden or defined outside the scope of the provider.|  
|[CHAIN_PROPERTY_SET](../../data/oledb/chain-property-set.md)|Chains property groups together.|  
|[END_PROPERTY_SET](../../data/oledb/end-property-set.md)|Marks the end of a property set.|  
|[END_PROPSET_MAP](../../data/oledb/end-propset-map.md)|Marks the end of a property set map.|  
|[PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md)|Sets a specific property in a property set to a default value.|  
|[PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md)|Sets a specific property in a property set to a value supplied by you. Also enables you to set flags and options.|  
|[PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md)|Sets a specific property in a property set to a value supplied by you.|  
  
### Column Map Macros  
  
|||  
|-|-|  
|[BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md)|Marks the beginning of the provider column map entries.|  
|[END_PROVIDER_COLUMN_MAP](../../data/oledb/end-provider-column-map.md)|Marks the end of the provider column map entries.|  
|[PROVIDER_COLUMN_ENTRY](../../data/oledb/provider-column-entry.md)|Represents a specific column supported by the provider.|  
|[PROVIDER_COLUMN_ENTRY_GN](../../data/oledb/provider-column-entry-gn.md)|Represents a specific column supported by the provider. You can specify the column's size, data type, precision, scale, and schema rowset GUID.|  
|[PROVIDER_COLUMN_ENTRY_FIXED](../../data/oledb/provider-column-entry-fixed.md)|Represents a specific column supported by the provider. You can specify the column data type.|  
|[PROVIDER_COLUMN_ENTRY_LENGTH](../../data/oledb/provider-column-entry-length.md)|Represents a specific column supported by the provider. You can specify the column size.|  
|[PROVIDER_COLUMN_ENTRY_STR](../../data/oledb/provider-column-entry-str.md)|Represents a specific column supported by the provider. It assumes the column type is a string.|  
|[PROVIDER_COLUMN_ENTRY_TYPE_LENGTH](../../data/oledb/provider-column-entry-type-length.md)|Represents a specific column supported by the provider. Like PROVIDER_COLUMN_ENTRY_LENGTH, but also allows you to specify the column's data type as well as size.|  
|[PROVIDER_COLUMN_ENTRY_WSTR](../../data/oledb/provider-column-entry-wstr.md)|Represents a specific column supported by the provider. It assumes the column type is a Unicode character string.|  
  
### Schema Rowset Macros  
  
|||  
|-|-|  
|[BEGIN_SCHEMA_MAP](../../data/oledb/begin-schema-map.md)|Marks the beginning of a schema map.|  
|[SCHEMA_ENTRY](../../data/oledb/schema-entry.md)|Associates a GUID with a class.|  
|[END_SCHEMA_MAP](../../data/oledb/end-schema-map.md)|Marks the end of a schema map.|  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creating an OLE DB Provider](../../data/oledb/creating-an-ole-db-provider.md)   
 [OLE DB Provider Templates Reference](../../data/oledb/ole-db-provider-templates-reference.md)