---
title: "CDBErrorInfo::GetErrorInfo | Microsoft Docs"
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
  - "GetErrorInfo"
  - "ATL.CDBErrorInfo.GetErrorInfo"
  - "CDBErrorInfo.GetErrorInfo"
  - "ATL::CDBErrorInfo::GetErrorInfo"
  - "CDBErrorInfo::GetErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorInfo method"
ms.assetid: 234e1f02-c307-4666-b3ce-2a4d62407fa1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBErrorInfo::GetErrorInfo
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDBErrorInfo::GetErrorInfo](https://docs.microsoft.com/cpp/data/oledb/cdberrorinfo-geterrorinfo).  
  
  
Calls [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/library/ms711230.aspx) to return an [IErrorInfo](https://msdn.microsoft.com/library/ms718112.aspx) interface pointer to the specified record.  
  
## Syntax  
  
```  
  
      HRESULT GetErrorInfo(   
   ULONG ulRecordNum,   
   LCID lcid,   
   IErrorInfo** ppErrorInfo    
) const throw( );  
```  
  
#### Parameters  
 See [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/library/ms711230.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)

