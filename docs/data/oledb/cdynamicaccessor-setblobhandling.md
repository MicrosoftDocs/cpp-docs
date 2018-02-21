---
title: "CDynamicAccessor::SetBlobHandling | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CDynamicAccessor::SetBlobHandling", "CDynamicAccessor.SetBlobHandling", "ATL::CDynamicAccessor::SetBlobHandling", "SetBlobHandling", "ATL.CDynamicAccessor.SetBlobHandling"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetBlobHandling method"]
ms.assetid: fa8b0bb3-a21b-4d64-aeef-e79bf61d079c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CDynamicAccessor::SetBlobHandling
Sets the BLOB handling value for the current row.  
  
## Syntax  
  
```cpp
      bool SetBlobHandling(DBBLOBHANDLINGENUM eBlobHandling);  
```  
  
#### Parameters  
 `eBlobHandling`  
 Specifies how the BLOB data is to be handled. It can take the following values:  
  
-   **DBBLOBHANDLING_DEFAULT**: Handle column data larger than `nBlobSize` (as set by `SetBlobSizeLimit`) as BLOB data and retrieve it through an `ISequentialStream` or `IStream` object. This option will attempt to bind every column containing data larger than `nBlobSize` or listed as **DBTYPE_IUNKNOWN** as BLOB data.  
  
-   **DBBLOBHANDLING_NOSTREAMS**: Handle column data larger than `nBlobSize` (as set by `SetBlobSizeLimit`) as BLOB data and retrieve it through reference in provider-allocated, consumer-owned memory. This option is useful for tables that have more than one BLOB column, and the provider supports only one `ISequentialStream` object per accessor.  
  
-   **DBBLOBHANDLING_SKIP**: Skip (do not bind) columns qualifying as containing BLOBs (the accessor will not bind or retrieve the column value but it will still retrieve the column status and length).  
  
## Remarks  
 You should call `SetBlobHandling` before calling **Open**.  
  
 The constructor method [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) sets the BLOB handling value to **DBBLOBHANDLING_DEFAULT**.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)