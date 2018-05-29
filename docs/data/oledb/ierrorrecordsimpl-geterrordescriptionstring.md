---
title: "IErrorRecordsImpl::GetErrorDescriptionString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetErrorDescriptionString", "IErrorRecordsImpl.GetErrorDescriptionString", "IErrorRecordsImpl::GetErrorDescriptionString"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetErrorDescriptionString method"]
ms.assetid: 8bc71c45-ca9f-4632-bb02-1aa9ed8086c4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetErrorDescriptionString
Gets the error description string from an error record.  
  
## Syntax  
  
```cpp
      LPOLESTR GetErrorDescriptionString(ERRORINFO& rCurError);  
```  
  
#### Parameters  
 `rCurError`  
 An `ERRORINFO` record in an **IErrorInfo** interface.  
  
## Return Value  
 A pointer to a string describing the error.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)