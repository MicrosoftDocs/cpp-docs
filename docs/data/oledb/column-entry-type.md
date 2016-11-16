---
title: "COLUMN_ENTRY_TYPE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLUMN_ENTRY_TYPE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_TYPE macro"
ms.assetid: ac424261-ff6c-443b-a197-2cec8d78d738
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
# COLUMN_ENTRY_TYPE
Represents a binding to the specific column in the database. Supports `type` parameter.  
  
## Syntax  
  
```  
  
COLUMN_ENTRY_TYPE (  
nOrdinal  
,   
wType  
,   
data  
 )  
  
```  
  
#### Parameters  
 `nOrdinal`  
 [in] The column number.  
  
 `wType`  
 [in] Data type of column entry.  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
## Remarks  
 This macro is a specialized variant of the [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro that provides a means of specifying data type.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)