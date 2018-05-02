---
title: "CSession::GetTransactionInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetTransactionInfo", "CSession.GetTransactionInfo", "ATL.CSession.GetTransactionInfo", "CSession::GetTransactionInfo", "ATL::CSession::GetTransactionInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetTransactionInfo method"]
ms.assetid: 9fa62808-3162-4b5a-8610-e1abb8cf9a71
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CSession::GetTransactionInfo
Returns information regarding a transaction.  
  
## Syntax  
  
```cpp
HRESULT GetTransactionInfo(XACTTRANSINFO* pInfo) const throw();  
```  
  
#### Parameters  
 See [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/en-us/library/ms714975.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 For more information, see [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/en-us/library/ms714975.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CSession Class](../../data/oledb/csession-class.md)