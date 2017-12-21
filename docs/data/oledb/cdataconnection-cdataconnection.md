---
title: "CDataConnection::CDataConnection | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["CDataConnection.CDataConnection", "ATL.CDataConnection.CDataConnection", "CDataConnection::CDataConnection", "ATL::CDataConnection::CDataConnection"]
dev_langs: ["C++"]
helpviewer_keywords: ["CDataConnection class, constructor"]
ms.assetid: ac25c9a0-44d3-4083-b13f-76c07772e12d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CDataConnection::CDataConnection
Instantiates and initializes a `CDataConnection` object.  
  
## Syntax  
  
```  
  
      CDataConnection();   
CDataConnection(  
   const CDataConnection &ds  
);  
```  
  
#### Parameters  
 `ds`  
 [in] A reference to an existing data connection.  
  
## Remarks  
 The first override creates a new `CDataConnection` object with default settings.  
  
 The second override creates a new `CDataConnection` object with settings equivalent to the data connection object you specify.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)