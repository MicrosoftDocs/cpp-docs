---
title: "CDataConnection::operator CDataSource&amp; | Microsoft Docs"
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
  - "CDataSource&"
  - "CDataConnection.operatorCDataSource&"
  - "operatorCDataSource&"
  - "CDataConnection::operatorCDataSource&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource& operator"
  - "operator & (CDataSource)"
ms.assetid: 852faeee-f1b1-4465-9828-b261d1edf022
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CDataSource&amp;
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataConnection::operator CDataSource&amp;](https://docs.microsoft.com/cpp/data/oledb/cdataconnection-operator-cdatasource-amp).  
  
  
Returns a reference to the contained `CDataSource` object.  
  
## Syntax  
  
```  
  
operator const CDataSource&() throw( );  
  
```  
  
## Remarks  
 This operator returns a reference to the contained `CDataSource` object, allowing you to pass a `CDataConnection` object where a `CDataSource` reference is expected.  
  
## Example  
 If you have a function (such as `func` below) that takes a `CDataSource` reference, you can use **CDataSource&** to pass a `CDataConnection` object instead.  
  
 [!code-cpp[NVC_OLEDB_Consumer#3](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#3)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#4](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#4)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource*](../../data/oledb/cdataconnection-operator-cdatasource-star.md)

