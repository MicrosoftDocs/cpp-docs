---
title: "CSession::Commit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CSession.Commit", "ATL.CSession.Commit", "ATL::CSession::Commit", "CSession::Commit"]
dev_langs: ["C++"]
helpviewer_keywords: ["Commit method"]
ms.assetid: 1d5f56b9-000c-4bae-a975-89d3452f499f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CSession::Commit
Commits the transaction.  
  
## Syntax  
  
```cpp
HRESULT Commit(BOOL bRetaining = FALSE,   
   DWORD grfTC = XACTTC_SYNC,   
   DWORD grfRM = 0) const throw();  
```  
  
#### Parameters  
 See [ITransaction::Commit](https://msdn.microsoft.com/en-us/library/ms713008.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 For more information, see [ITransaction::Commit](https://msdn.microsoft.com/en-us/library/ms713008.aspx).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CSession Class](../../data/oledb/csession-class.md)