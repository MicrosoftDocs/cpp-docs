---
title: "CSession::Close | Microsoft Docs"
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
  - "CSession::Close"
  - "ATL.CSession.Close"
  - "CSession.Close"
  - "ATL::CSession::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close method"
ms.assetid: dc36c4c0-e588-4c0b-91d1-fc7dc5c8e7f4
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CSession::Close
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CSession::Close](https://docs.microsoft.com/cpp/data/oledb/csession-close).  
  
  
Closes the session, which was opened by [CSession::Open](../../data/oledb/csession-open.md).  
  
## Syntax  
  
```  
  
void Close( ) throw( );  
  
```  
  
## Remarks  
 Releases the **m_spOpenRowset** pointer.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CSession Class](../../data/oledb/csession-class.md)

