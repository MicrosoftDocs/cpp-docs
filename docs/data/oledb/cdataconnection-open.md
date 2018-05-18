---
title: "CDataConnection::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDataConnection.Open", "ATL.CDataConnection.Open", "CDataConnection::Open", "ATL::CDataConnection::Open"]
dev_langs: ["C++"]
helpviewer_keywords: ["Open method"]
ms.assetid: 2c6f0c01-4954-43ba-973e-861ac8e82892
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDataConnection::Open
Opens a connection to a data source using an initialization string.  
  
## Syntax  
  
```cpp
HRESULT Open(LPCOLESTR szInitString) throw();  
```  
  
#### Parameters  
 *szInitString*  
 [in] The initialization string for the data source.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)