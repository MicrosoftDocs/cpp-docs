---
title: "CDataConnection::operator CSession* | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["CDataConnection.operatorCSession*", "CDataConnection::operatorCSession*", "operatorCSession*", "CSession*"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator CSession*", "CSession* operator"]
ms.assetid: 0b0feede-5c3e-4835-be5b-03651597014d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CSession*
Returns a pointer to the contained `CSession` object.  
  
## Syntax  
  
```  
  
operator const CSession*() throw( );  
  
```  
  
## Remarks  
 This operator returns a pointer to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` pointer is expected.  
  
## Example  
 See [operator CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md) for a usage example.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md)