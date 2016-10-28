---
title: "COLUMN_ENTRY_PS_STATUS"
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
  - "COLUMN_ENTRY_PS_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_PS_STATUS macro"
ms.assetid: c02140c6-246f-4df5-8b86-698d7d137022
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
# COLUMN_ENTRY_PS_STATUS
Represents a binding on the rowset to the specific column in the database.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY_PS_STATUS(  
nOrdinal  
,   
nPrecision  
,   
nScale  
,   
data  
,   
status  
 )  
  
```  
  
#### Parameters  
 See [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) in the *OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 [in] The column number.  
  
 `nPrecision`  
 [in] The maximum precision of the column you want to bind.  
  
 `nScale`  
 [in] The scale of the column you want to bind.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
 *status*  
 [in] The variable to be bound to the column status.  
  
## Remarks  
 Allows you to specify the precision and scale of the column you want to bind. This macro supports the *status* variable. It is used in the following places:  
  
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
 [COLUMN_ENTRY](../data/column_entry.md)   
 [COLUMN_ENTRY_EX](../data/column_entry_ex.md)   
 [COLUMN_ENTRY_LENGTH](../data/column_entry_length.md)   
 [COLUMN_ENTRY_PS](../data/column_entry_ps.md)   
 [COLUMN_ENTRY_PS_LENGTH](../data/column_entry_ps_length.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../data/column_entry_length_status.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../data/column_entry_ps_length_status.md)   
 [COLUMN_ENTRY_STATUS](../data/column_entry_status.md)   
 [END_ACCESSOR](../data/end_accessor.md)   
 [END_ACCESSOR_MAP](../data/end_accessor_map.md)   
 [END_COLUMN_MAP](../data/end_column_map.md)