---
title: "CDBErrorInfo::GetCustomErrorObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDBErrorInfo::GetCustomErrorObject", "ATL.CDBErrorInfo.GetCustomErrorObject", "CDBErrorInfo.GetCustomErrorObject", "ATL::CDBErrorInfo::GetCustomErrorObject", "GetCustomErrorObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetCustomErrorObject method"]
ms.assetid: 295c053c-b76c-47a5-adfb-333e65d2df0d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDBErrorInfo::GetCustomErrorObject
Calls [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) to return a pointer to an interface on a custom error object.  
  
## Syntax  
  
```
HRESULT GetCustomErrorObject(ULONG ulRecordNum,   
   REFIID riid,IUnknown** ppObject) const throw();  
```  
  
#### Parameters  
 See [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)