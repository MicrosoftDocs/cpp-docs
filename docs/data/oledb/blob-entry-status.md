---
title: "BLOB_ENTRY_STATUS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["BLOB_ENTRY_STATUS"]
dev_langs: ["C++"]
helpviewer_keywords: ["BLOB_ENTRY_STATUS macro"]
ms.assetid: 191007f4-dfcc-4ae2-a7fc-6f7899accc9f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# BLOB_ENTRY_STATUS
Used with `BEGIN_COLUMN_MAP` or `BEGIN_ACCESSOR_MAP` to bind a binary large object ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Similar to [BLOB_ENTRY](../../data/oledb/blob-entry.md), except that this macro also gets the status of the BLOB column.  
  
## Syntax  
  
```cpp
BLOB_ENTRY_STATUS(nOrdinal, IID, flags, data, status)  
  
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
  
 *status*  
 [out] The status of the BLOB field.  
  
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
 [BLOB_ENTRY_LENGTH_STATUS](../../data/oledb/blob-entry-length-status.md)