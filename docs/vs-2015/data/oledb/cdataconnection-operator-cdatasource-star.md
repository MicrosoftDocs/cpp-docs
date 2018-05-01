---
title: "CDataConnection::operator CDataSource* | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataSource*"
  - "CDataConnection::operatorCDataSource*"
  - "CDataConnection.operatorCDataSource*"
  - "operatorCDataSource*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource* operator"
  - "operator * (CDataSource)"
ms.assetid: 9118e324-e68d-45c5-a791-03f041d420ed
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CDataSource*
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataConnection::operator CDataSource*](https://docs.microsoft.com/cpp/data/oledb/cdataconnection-operator-cdatasource-star).  
  
  
Returns a pointer to the contained `CDataSource` object.  
  
## Syntax  
  
```  
  
operator const CDataSource*() throw( );  
  
```  
  
## Remarks  
 This operator returns a pointer to the contained `CDataSource` object, allowing you to pass a `CDataConnection` object where a `CDataSource` pointer is expected.  
  
 See [operator CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md) for a usage example.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md)

