---
title: "BEGIN_COLUMN_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_COLUMN_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_COLUMN_MAP macro"
ms.assetid: d6ffe633-e0da-4e33-8faa-f7f259d05420
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# BEGIN_COLUMN_MAP
Marks the beginning of a column map entry.  
  
## Syntax  
  
```  
  
BEGIN_COLUMN_MAP(  
x  
 )  
  
```  
  
#### Parameters  
 *x*  
 [in] The name of the user record class derived from `CAccessor`.  
  
## Remarks  
 This macro is used in the case of a single accessor on a rowset. If you have multiple accessors on a rowset, use [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md).  
  
 The `BEGIN_COLUMN_MAP` macro is completed with the `END_COLUMN_MAP` macro. This macro is used when there is only one accessor required in the user record.  
  
 Columns correspond to fields in the rowset you want to bind.  
  
## Example  
 Here is a sample column and parameter map:  
  
 <!--[!CODE [NVC_OLEDB_Consumer#16](../codesnippet/vs_snippets_cpp/nvc_oledb_consumer#16)]  -->
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN_ENTRY_EX](../../data/oledb/column-entry-ex.md)