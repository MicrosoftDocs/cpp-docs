---
title: "CSession::Abort | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CSession.Abort", "CSession::Abort", "ATL.CSession.Abort", "ATL::CSession::Abort"]
dev_langs: ["C++"]
helpviewer_keywords: ["Abort method"]
ms.assetid: 02413b20-c486-451f-b4d7-73a6e8065df8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CSession::Abort
Terminates the transaction.  
  
## Syntax  
  
```cpp
HRESULT Abort(BOID* pboidReason = NULL,   
   BOOL bRetaining = FALSE,   
   BOOL bAsync = FALSE) const throw();  
```  
  
#### Parameters  
 See [ITransaction::Abort](https://msdn.microsoft.com/en-us/library/ms709833.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CSession Class](../../data/oledb/csession-class.md)