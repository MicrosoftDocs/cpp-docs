---
title: "COLUMN_ENTRY"
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
  - "COLUMN_ENTRY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY macro"
ms.assetid: a10aef29-6d70-49ec-b572-5b5c4abe1b46
caps.latest.revision: 9
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
# COLUMN_ENTRY
Represents a binding on the rowset to the specific column in the rowset.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY(  
nOrdinal  
,   
data  
 )  
  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] The column number.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 The `COLUMN_ENTRY` macro is used in the following places:  
  
-   Between the [BEGIN_COLUMN_MAP](../data/begin_column_map.md) and [END_COLUMN_MAP](../data/end_column_map.md) macros.  
  
-   Between the [BEGIN_ACCESSOR](../data/begin_accessor.md) and [END_ACCESSOR](../data/end_accessor.md) macros.  
  
-   Between the [BEGIN_PARAM_MAP](../data/begin_param_map.md) and [END_PARAM_MAP](../data/end_param_map.md) macros.  
  
## Example  
 See the examples in the macro topics, [BEGIN_COLUMN_MAP](../data/begin_column_map.md) and [BEGIN_ACCESSOR_MAP](../data/begin_accessor_map.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../data/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../data/begin_accessor.md)   
 [BEGIN_ACCESSOR_MAP](../data/begin_accessor_map.md)   
 [BEGIN_COLUMN_MAP](../data/begin_column_map.md)   
 [COLUMN_ENTRY_EX](../data/column_entry_ex.md)   
 [COLUMN_ENTRY_PS](../data/column_entry_ps.md)   
 [COLUMN_ENTRY_PS_LENGTH](../data/column_entry_ps_length.md)   
 [COLUMN_ENTRY_LENGTH](../data/column_entry_length.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../data/column_entry_length_status.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../data/column_entry_ps_length_status.md)   
 [COLUMN_ENTRY_STATUS](../data/column_entry_status.md)   
 [COLUMN_ENTRY_PS_STATUS](../data/column_entry_ps_status.md)   
 [COLUMN_ENTRY_TYPE](../data/column_entry_type.md)   
 [COLUMN_ENTRY_TYPE_SIZE](../data/column_entry_type_size.md)   
 [END_ACCESSOR](../data/end_accessor.md)   
 [END_ACCESSOR_MAP](../data/end_accessor_map.md)   
 [END_COLUMN_MAP](../data/end_column_map.md)