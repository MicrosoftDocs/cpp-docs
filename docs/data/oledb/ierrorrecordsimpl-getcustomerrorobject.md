---
title: "IErrorRecordsImpl::GetCustomErrorObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::IErrorRecordsImpl::GetCustomErrorObject", "IErrorRecordsImpl::GetCustomErrorObject", "ATL.IErrorRecordsImpl.GetCustomErrorObject", "IErrorRecordsImpl.GetCustomErrorObject", "GetCustomErrorObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetCustomErrorObject method"]
ms.assetid: 96d3549b-a49c-4552-94b2-71babaf1bf20
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetCustomErrorObject
Returns a pointer to an interface on a custom error object.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetCustomErrorObject )(ULONG ulRecordNum,  
   REFIID riid,  
   IUnknown **ppObject);  
```  
  
#### Parameters  
 See [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)