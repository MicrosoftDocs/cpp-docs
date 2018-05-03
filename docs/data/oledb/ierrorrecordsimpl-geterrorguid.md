---
title: "IErrorRecordsImpl::GetErrorGUID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetErrorGUID", "IErrorRecordsImpl.GetErrorGUID", "IErrorRecordsImpl::GetErrorGUID"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetErrorGUID method"]
ms.assetid: 42c00755-50e5-401a-8246-adef9de5ced2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetErrorGUID
Gets the error GUID from an error record.  
  
## Syntax  
  
```cpp
      REFGUID GetErrorGUID(ERRORINFO& rCurError);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 A reference to a GUID for the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)