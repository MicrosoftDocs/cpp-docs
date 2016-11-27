---
title: "CDataConnection::operator CSession&amp; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CDataConnection::operator CSession&amp;
Returns a reference to the contained `CSession` object.  
  
## Syntax  
  
```  
  
operator const CSession&();  
  
```  
  
## Remarks  
 This operator returns a reference to the contained `CSession` object, allowing you to pass a `CDataConnection` object where a `CSession` reference is expected.  
  
## Example  
 If you have a function (such as `func` below) that takes a `CSession` reference, you can use **CSession&** to pass a `CDataConnection` object instead.  
  
 [!code-cpp[NVC_OLEDB_Consumer#5](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#6](../../data/oledb/codesnippet/cpp/cdataconnection-operator-csession-amp_2.cpp)]  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession*](../../data/oledb/cdataconnection-operator-csession-star.md)