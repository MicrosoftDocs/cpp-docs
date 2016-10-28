---
title: "COLUMN_NAME"
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
  - "COLUMN_NAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_NAME macro"
ms.assetid: a213b9a0-2148-4a08-9111-d9fa8fdec462
caps.latest.revision: 7
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
# COLUMN_NAME
Represents a binding on the rowset to the specific column in the rowset. Similar to [COLUMN_ENTRY](../data/column_entry.md), except that this macro takes the column name instead of the column number.  
  
## Syntax  
  
```  
  
COLUMN_NAME(  
pszName  
,   
data  
 )  
  
```  
  
#### Parameters  
 `pszName`  
 [in] A pointer to the column name. The name must be a Unicode string. You can accomplish this by putting an 'L' in front of the name, for example: `L"MyColumn"`.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 The **COLUMN_NAME_\*** macros are used in the same places as [COLUMN_ENTRY](../data/column_entry.md):  
  
-   Between the [BEGIN_COLUMN_MAP](../data/begin_column_map.md) and [END_COLUMN_MAP](../data/end_column_map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../data/begin_accessor.md) and [END_ACCESSOR](../data/end_accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../data/begin_param_map.md) and [END_PARAM_MAP](../data/end_param_map.md) macros.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../data/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../data/begin_accessor.md)   
 [BEGIN_ACCESSOR_MAP](../data/begin_accessor_map.md)   
 [BEGIN_COLUMN_MAP](../data/begin_column_map.md)   
 [COLUMN_NAME_EX](../data/column_name_ex.md)   
 [COLUMN_NAME_LENGTH](../data/column_name_length.md)   
 [COLUMN_NAME_LENGTH_STATUS](../data/column_name_length_status.md)   
 [COLUMN_NAME_STATUS](../data/column_name_status.md)   
 [COLUMN_NAME_PS](../data/column_name_ps.md)   
 [COLUMN_NAME_PS_LENGTH](../data/column_name_ps_length.md)   
 [COLUMN_NAME_PS_STATUS](../data/column_name_ps_status.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../data/column_name_ps_length_status.md)   
 [COLUMN_NAME_TYPE](../data/column_name_type.md)   
 [COLUMN_NAME_TYPE_PS](../data/column_name_type_ps.md)   
 [COLUMN_NAME_TYPE_SIZE](../data/column_name_type_size.md)   
 [COLUMN_NAME_TYPE_STATUS](../data/column_name_type_status.md)