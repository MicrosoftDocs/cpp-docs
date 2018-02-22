---
title: "IErrorRecordsImpl::GetErrorParameters | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["IErrorRecordsImpl::GetErrorParameters", "ATL.IErrorRecordsImpl.GetErrorParameters", "IErrorRecordsImpl.GetErrorParameters", "GetErrorParameters", "ATL::IErrorRecordsImpl::GetErrorParameters"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetErrorParameters method"]
ms.assetid: 9bafac52-399e-4e0e-8365-b9f83074cdd5
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetErrorParameters
Returns the error parameters.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetErrorParameters )(ULONG ulRecordNum,  
   DISPPARAMS *pdispparams);  
```  
  
#### Parameters  
 See [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)