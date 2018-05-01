---
title: "CDataConnection::OpenNewSession | Microsoft Docs"
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
  - "CDataConnection.OpenNewSession"
  - "ATL.CDataConnection.OpenNewSession"
  - "ATL::CDataConnection::OpenNewSession"
  - "OpenNewSession"
  - "CDataConnection::OpenNewSession"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenNewSession method"
ms.assetid: 0a70e573-9498-4ca7-b524-45666dc7b0a3
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::OpenNewSession
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataConnection::OpenNewSession](https://docs.microsoft.com/cpp/data/oledb/cdataconnection-opennewsession).  
  
  
Opens a new session using the current connection object's data source.  
  
## Syntax  
  
```  
  
      HRESULT OpenNewSession(   
   CSession & session    
) throw( );  
```  
  
#### Parameters  
 `session`  
 [in/out] A reference to the new session object.  
  
 **Remarks**  
 The new session uses the current connection object's contained data source object as its parent, and can access all of the same information as the data source.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataConnection Class](../../data/oledb/cdataconnection-class.md)

