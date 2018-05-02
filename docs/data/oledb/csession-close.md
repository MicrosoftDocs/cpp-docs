---
title: "CSession::Close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["CSession::Close", "ATL.CSession.Close", "CSession.Close", "ATL::CSession::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: dc36c4c0-e588-4c0b-91d1-fc7dc5c8e7f4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# CSession::Close
Closes the session, which was opened by [CSession::Open](../../data/oledb/csession-open.md).  
  
## Syntax  
  
```cpp
void Close() throw();  
  
```  
  
## Remarks  
 Releases the **m_spOpenRowset** pointer.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CSession Class](../../data/oledb/csession-class.md)