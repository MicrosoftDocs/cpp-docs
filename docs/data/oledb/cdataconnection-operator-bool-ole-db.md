---
title: "CDataConnection::operator bool (OLE DB) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataConnection::operatorBOOL"
  - "ATL::CDataConnection::operatorBOOL"
  - "CDataConnection.operatorBOOL"
  - "ATL.CDataConnection.operatorBOOL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BOOL operator"
  - "operator bool"
ms.assetid: e0791faf-2ed2-4dbb-9e68-3b9b5da2b7a7
caps.latest.revision: 8
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
# CDataConnection::operator bool (OLE DB)
Determines whether the current session is open or not.  
  
## Syntax  
  
```  
  
operator bool( ) throw( );  
  
```  
  
## Remarks  
 Returns a `bool` (C++ data type) value. **true** means the current session is open; **false** means the current session is closed.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator BOOL](../../data/oledb/cdataconnection-operator-bool.md)