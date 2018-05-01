---
title: "CDataConnection::operator CSession&amp; | Microsoft Docs"
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
  - "CSession&"
  - "CDataConnection::operatorCSession&"
  - "CDataConnection.operatorCSession&"
  - "operatorCSession&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator CSession&"
  - "CSession& operator"
ms.assetid: fba1e498-e482-4dda-8e0f-2542163bf627
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CSession&amp;
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataConnection::operator CSession&amp;](https://docs.microsoft.com/cpp/data/oledb/cdataconnection-operator-csession-amp).  
  
  
Returns a reference to the contained `CSession` object.  
  
## Syntax  
  
```  
  
operator const CSession&();  
  
```  
  
## Remarks  
 This operator returns a reference to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` reference is expected.  
  
## Example  
 If you have a function (such as `func` below) that takes a `CSession` reference, you can use **CSession&** to pass a `CDataConnection` object instead.  
  
 [!code-cpp[NVC_OLEDB_Consumer#5](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#5)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#6](../../snippets/cpp/VS_Snippets_Cpp/NVC_OLEDB_Consumer/Cpp/NVC_OLEDB_Consumer.cpp#6)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession*](../../data/oledb/cdataconnection-operator-csession-star.md)

