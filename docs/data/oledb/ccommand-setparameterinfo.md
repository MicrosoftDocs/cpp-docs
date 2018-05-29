---
title: "CCommand::SetParameterInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["SetParameterInfo", "CCommand.SetParameterInfo", "CCommand::SetParameterInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["SetParameterInfo method"]
ms.assetid: a70e92f4-1e73-41d7-a5b7-c6ebb45a6477
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CCommand::SetParameterInfo
Specifies the native type of each command parameter.  
  
## Syntax  
  
```cpp
HRESULT CCommandBase::SetParameterInfo(DB_UPARAMS ulParams,  
   const DBORDINAL* pOrdinals,  
   const DBPARAMBINDINFO* pParamInfo) throw();  
```  
  
#### Parameters  
 See [ICommandWithParameters::SetParameterInfo](https://msdn.microsoft.com/en-us/library/ms725393.aspx) in the *OLE DB Programmer's Reference*.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CCommand Class](../../data/oledb/ccommand-class.md)