---
title: "CDataSource::GetInitializationString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["ATL::CDataSource::GetInitializationString", "CDataSource.GetInitializationString", "GetInitializationString", "CDataSource::GetInitializationString", "ATL.CDataSource.GetInitializationString"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetInitializationString method"]
ms.assetid: 97134723-6e99-4004-a56d-ec57543dbf3b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDataSource::GetInitializationString
Retrieves the initialization string of a data source that is currently open.  
  
## Syntax  
  
```cpp
HRESULT GetInitializationString(BSTR* pInitializationString,   
   bool bIncludePassword = false) throw();  
```  
  
#### Parameters  
 *pInitializationString*  
 [out] A pointer to the initialization string.  
  
 *bIncludePassword*  
 [in] **true** if string includes a password; otherwise **false**.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 The resulting initialization string can be used to later reopen this data source connection.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)