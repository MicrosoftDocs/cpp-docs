---
title: "IErrorRecordsImpl::GetBasicErrorInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::IErrorRecordsImpl::GetBasicErrorInfo", "IErrorRecordsImpl::GetBasicErrorInfo", "GetBasicErrorInfo", "ATL.IErrorRecordsImpl.GetBasicErrorInfo", "IErrorRecordsImpl.GetBasicErrorInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetBasicErrorInfo method"]
ms.assetid: d0b4dec3-f32a-4aaa-8365-524f2e7c8395
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IErrorRecordsImpl::GetBasicErrorInfo
Returns basic information about the error, such as the return code and provider-specific error number.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetBasicErrorInfo )(ULONG ulRecordNum,  
   ERRORINFO *pErrorInfo);  
```  
  
#### Parameters  
 See [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)