---
title: "CDataConnection::operator bool (OLE DB) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CDataConnection::operatorBOOL", "ATL::CDataConnection::operatorBOOL", "CDataConnection.operatorBOOL", "ATL.CDataConnection.operatorBOOL"]
dev_langs: ["C++"]
helpviewer_keywords: ["BOOL operator", "operator bool"]
ms.assetid: e0791faf-2ed2-4dbb-9e68-3b9b5da2b7a7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CDataConnection::operator bool (OLE DB)
Determines whether the current session is open or not.  
  
## Syntax  
  
```cpp
operator bool() throw();  
  
```  
  
## Remarks  
 Returns a `bool` (C++ data type) value. **true** means the current session is open; **false** means the current session is closed.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator BOOL](../../data/oledb/cdataconnection-operator-bool.md)