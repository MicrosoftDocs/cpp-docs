---
title: "IErrorRecordsImpl::GetCustomErrorObject | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IErrorRecordsImpl::GetCustomErrorObject"
  - "IErrorRecordsImpl::GetCustomErrorObject"
  - "ATL.IErrorRecordsImpl.GetCustomErrorObject"
  - "IErrorRecordsImpl.GetCustomErrorObject"
  - "GetCustomErrorObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCustomErrorObject method"
ms.assetid: 96d3549b-a49c-4552-94b2-71babaf1bf20
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IErrorRecordsImpl::GetCustomErrorObject
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IErrorRecordsImpl::GetCustomErrorObject](https://docs.microsoft.com/cpp/data/oledb/ierrorrecordsimpl-getcustomerrorobject).  
  
  
Returns a pointer to an interface on a custom error object.  
  
## Syntax  
  
```  
  
      STDMETHOD( GetCustomErrorObject )(  
   ULONG ulRecordNum,  
   REFIID riid,  
   IUnknown **ppObject   
);  
```  
  
#### Parameters  
 See [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/library/ms725417.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IErrorRecordsImpl Class](../../data/oledb/ierrorrecordsimpl-class.md)

