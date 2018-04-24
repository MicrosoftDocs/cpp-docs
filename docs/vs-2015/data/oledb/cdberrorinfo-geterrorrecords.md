---
title: "CDBErrorInfo::GetErrorRecords | Microsoft Docs"
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
  - "CDBErrorInfo.GetErrorRecords"
  - "ATL.CDBErrorInfo.GetErrorRecords"
  - "ATL::CDBErrorInfo::GetErrorRecords"
  - "GetErrorRecords"
  - "CDBErrorInfo::GetErrorRecords"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorRecords method"
ms.assetid: 07746774-bcca-4833-8f55-a619e9777c17
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDBErrorInfo::GetErrorRecords
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDBErrorInfo::GetErrorRecords](https://docs.microsoft.com/cpp/data/oledb/cdberrorinfo-geterrorrecords).  
  
  
Gets error records for the specified object.  
  
## Syntax  
  
```  
  
      HRESULT GetErrorRecords(   
   IUnknown* pUnk,   
   const IID& iid,   
   ULONG* pcRecords    
) throw( );  
HRESULT GetErrorRecords(   
   ULONG* pcRecords    
) throw( );  
```  
  
#### Parameters  
 *pUnk*  
 [in] Interface to the object for which to get error records.  
  
 `iid`  
 [in] The IID of the interface associated with the error.  
  
 *pcRecords*  
 [out] A pointer to the (one-based) count of error records.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Use the first form of the function if you want to check which interface to get the error information from. Otherwise, use the second form.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDBErrorInfo Class](../../data/oledb/cdberrorinfo-class.md)

