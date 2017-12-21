---
title: "CDBErrorInfo::GetErrorParameters | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["ATL.CDBErrorInfo.GetErrorParameters", "CDBErrorInfo::GetErrorParameters", "ATL::CDBErrorInfo::GetErrorParameters", "CDBErrorInfo.GetErrorParameters", "GetErrorParameters"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetErrorParameters method"]
ms.assetid: 3a2dd8e2-fecc-4315-9f2b-ce3138cdd187
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CDBErrorInfo::GetErrorParameters
Calls [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) to return the error parameters.  
  
## Syntax  
  
```  
  
      HRESULT GetErrorParameters(   
   ULONG ulRecordNum,   
   DISPPARAMS* pdispparams    
) const throw( );  
```  
  
#### Parameters  
 See [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)