---
title: "BLOB_ENTRY_LENGTH_STATUS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLOB_ENTRY_LENGTH_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_ENTRY_LENGTH_STATUS macro"
ms.assetid: 09da67de-421b-4853-9a26-760e38324502
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
# BLOB_ENTRY_LENGTH_STATUS
Used with `BEGIN_COLUMN_MAP` and `END_COLUMN_MAP` to bind a binary large object ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro also gets the length and status of the BLOB column.  
  
## Syntax  
  
```  
  
BLOB_ENTRY_LENGTH_STATUS(  
nOrdinal  
,   
IID  
,   
flags  
,   
data  
, length, status )  
```  
  
#### Parameters  
 `nOrdinal`  
 [in] The column number.  
  
 *IID*  
 [in] Interface GUID, such as **IDD_ISequentialStream**, used to retrieve the BLOB.  
  
 `flags`  
 [in] Storage-mode flags as defined by the OLE Structured Storage model (for example, **STGM_READ**).  
  
 `data`  
 [in] The corresponding data member in the user record.  
  
 *length*  
 [out] The (actual) length in bytes of the BLOB column.  
  
 *status*  
 [out] The status of the BLOB data column.  
  
## Example  
 See [How Can I Retrieve a BLOB?](../../data/oledb/retrieving-a-blob.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [Macros and Global Functions for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB_ENTRY](../../data/oledb/blob-entry.md)   
 [BLOB_ENTRY_LENGTH](../../data/oledb/blob-entry-length.md)   
 [BLOB_ENTRY_STATUS](../../data/oledb/blob-entry-status.md)