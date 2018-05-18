---
title: "IErrorRecordsImpl::GetErrorSource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IErrorRecordsImpl.GetErrorSource", "GetErrorSource", "IErrorRecordsImpl::GetErrorSource"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetErrorSource method"]
ms.assetid: 5436f1ce-c5a4-403b-a62b-c58e70e5c925
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetErrorSource
Gets the source code that caused the error from an error record.  
  
## Syntax  
  
```cpp
      LPOLESTR GetErrorSource(ERRORINFO& rCurError);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 Pointer to a string containing the source code for the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)